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
	man = CreateList(1,INT);
	GotoFront(&man);

	return EXIT_SUCCESS;
}
