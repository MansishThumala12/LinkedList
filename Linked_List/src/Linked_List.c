/*
 ============================================================================
 Name        : Linked_List.c
 Author      : Manish
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "linked_list_hdr.h"
#include "linked_list_mcr.h"

int main(void) {
	list_t man;
	man = CreateList(7,INT);

//	while(man.lst != NULL){
//			node_t *temp = man.lst;
//			printf("curr:%p     prev:%p      nxt:%p		pos:%d\n",temp,temp->prev,temp->next,man.curr_pos);
//			man.lst = man.lst->prev;
//			man.curr_pos--;
//		}
//
//	man.lst = man.front;
//	man.curr_pos = 0;
//	printf("\n\n");
//	man = Align(man);
//
//	while(man.lst != NULL){
//		node_t *temp = man.lst;
//		printf("curr:%p     prev:%p      nxt:%p		pos:%d\n",temp,temp->prev,temp->next,man.curr_pos);
//		man.lst = man.lst->next;
//		man.curr_pos++;
//	}
	man = GotoBack(man);
	PrintListDetails(man);
	return EXIT_SUCCESS;
}
