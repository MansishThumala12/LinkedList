/*
 * linked_list_hdr.h
 *
 *  Created on: 08-Jul-2018
 *      Author: manish
 */

#ifndef LINKED_LIST_HDR_H_
#define LINKED_LIST_HDR_H_

#include <stdio.h>
#include <stdlib.h>

/*
 * Err enum type lists 8-bit error codes
 * err_t as typedef
 *
 */
typedef enum Err{
	FINE = 0b00000000,
	NOT_CREATED = 0b10000000,
	PARTIAL_CREATED = 0b01000000,
	NO_TYPE_GIVEN = 0b00000001
}err_t;

/*
 * Data_Types enum type lists values 0-2
 * data_ty as typedef
 *
 */
typedef enum Data_Types{
	INT,
	CHAR,
	FLOAT
}data_ty_t;

/*
 * Data Union holds the a node'd data values
 * data_t as typedef
 *
 */
typedef union Data{
	int i;
	float f;
	char c;
}data_t;

/*
 * Node structure for the basic node variable
 */
typedef struct Node{
	struct Node *prev;
	data_t *data;
	struct Node *next;
}node_t;

typedef struct List{
	struct Node *lst;
	int curr_pos;
	int lenght;
	struct Node* front;
	struct Node* back;
	enum Data_Types typ;
	char error_flags /*0b00000000*/;
}list_t;

typedef struct Return_struct{
	enum Err error;
	struct List* Return_Pointer;
}rtn_struct;


/*
 * Function		:	Creates a List and passes its as variable not as a pointer.
 *
 * Parameters	:	Takes the length(int type) of the list and the type() of list variable.
 *
 * Return		:	Returns the created List variable.
 *
 */
struct List CreateList(int Lenght,enum Data_Types Type);

/*
 * Function		:	Links a New Node to the given list.
 *
 * Parameter	:	List on which node is to be linked.
 *
 * Return		:	return's Return_struct with the current List pointer and error
 * 					values.
 */
struct Return_struct LinkNew(struct List*);

//	TODO:Write function description
/*
 *Function		:
 *
 *Parameter		:
 *
 *Return		:
 */
struct List Align(struct List Inp);

//	TODO:Write function description
/*
 *Function		:
 *
 *Parameter		:
 *
 *Return		:
 */
void PrintListDetails(struct List Inp);

//	TODO:Wriet function description
/*
 *Function		:
 *
 *Parameter		:
 *
 *Return		:
 */
struct List WriteData(void *data,struct List Inp);
#endif /* LINKED_LIST_HDR_H_ */
