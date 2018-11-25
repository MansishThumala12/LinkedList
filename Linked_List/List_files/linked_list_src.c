/*
 * linked_list_src.cpp
 *
 *  Created on: 08-Jul-2018
 *      Author: manish
 */

#include "linked_list_hdr.h"
#include "linked_list_mcr.h"

struct List 			CreateList(int Lenght,enum Data_Types Type){

	struct List retn;

	retn.error_flags = DEFAULT_ERROR_FLG;

	if ((Type == INT)|(Type == FLOAT)|(Type == CHAR)){
		retn.lst = (struct Node*)malloc(sizeof(struct Node));
		if (retn.lst != NULL){
			retn.lst->prev = (struct Node*)NULL;
			retn.front = retn.lst;
			retn.lenght = 1;
			retn.curr_pos = 0;
		}else{
			retn.lst=retn.front=retn.back = NULL;
			retn.lenght = 0;
			retn.curr_pos = 0;
			retn.error_flags |= (NOT_CREATED);
		}
	}else{
		retn.lst=retn.front=retn.back = NULL;
		retn.lenght = 0;
		retn.curr_pos = 0;
		retn.error_flags |= (NO_TYPE_GIVEN);
		return retn;
	}

	switch (Type){
	case INT:
		retn.typ = INT;
		break;
	case FLOAT:
		retn.typ = FLOAT;
		break;
	case CHAR:
		retn.typ = CHAR;
		retn.curr_pos = 0;
		break;
	default:
		retn.lst=retn.front=retn.back = NULL;
		retn.lenght = 0;
		retn.curr_pos = 0;
		retn.error_flags |= (NO_TYPE_GIVEN|NOT_CREATED);
	}

	int i = 0;
	struct Return_struct temp_while;

	while (i < Lenght-2){
		temp_while = LinkNew(&retn);
		if (temp_while.error == NOT_CREATED){
			break;
		}
		i++;
	}

	if (temp_while.error != NOT_CREATED){
		temp_while = LinkNew(&retn);
		retn.back = temp_while.Return_Pointer->lst;
		retn.lst->next =(struct Node*) NULL;
	}else if(temp_while.error == NOT_CREATED && retn.lenght != 0){
		retn.back = temp_while.Return_Pointer->lst;
		retn.lst->next =(struct Node*) NULL;
		retn.error_flags |= PARTIAL_CREATED;
	}else{
		retn.lst=retn.front=retn.back = (struct Node*)NULL;
		retn.lenght = 0;
		retn.curr_pos = 0;
		retn.error_flags |= (NOT_CREATED);
	}

	return retn;
}

struct Return_struct 	LinkNew(struct List* Inp){
	rtn_struct retn;
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

	if (temp != NULL){
		Inp->lst->next = temp;
		Inp->lst->next->prev = Inp->lst;
		Inp->lst = Inp->lst->next;
		Inp->curr_pos += 1;
		Inp->lenght += 1;
		retn.Return_Pointer = Inp;
		return retn;
	}else{
		retn.Return_Pointer = Inp;
		retn.error = NOT_CREATED;
		return retn;
	}
}

struct List 			Align(struct List Inp){
	Inp.lst = Inp.front;
	Inp.curr_pos = 0;
	return Inp;
}

struct List 			WriteData(void *data,struct List Inp){

//	TODO:Complete Function
	return Inp;
}

void 					PrintListDetails(struct List Inp){
//	TODO:Still have to complete this function
	printf("lenght od the list: %d\n",ReturnLenght(Inp));
}

struct List 			WriteValue(void *data,struct List Inp){
	switch (Inp.typ){
	case INT:
		Inp.lst->data->i = *(int*)data;
		break;
	case FLOAT:
		Inp.lst->data->f = *(float*)data;
		break;
	case CHAR:
		Inp.lst->data->c = *(char*)data;
		break;
	}
	return Inp;
}
