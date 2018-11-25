/*
 * linked_list_mcr.h
 *
 *  Created on: 11-Jul-2018
 *      Author: manish
 */

#ifndef LINKED_LIST_MCR_H_
#define LINKED_LIST_MCR_H_

 //	TODO:Write Macro description
/*
 *Macro			:
 *
 *Parameter		:
 *
 *Return		:
 */
#define DEFAULT_ERROR_FLG (char)0b00000000

 //	TODO:Write Macro description
/*
 *Macro			:
 *
 *Parameter		:
 *
 *Return		:
 */
#define ReturnLenght(Lst) (Lst.lenght)

#define ReturnCurrentPosition(Lst) (Lst.curr_pos)

#define ReturnDataType(Lst) (Lst.typ)

#define ReturnFront(Lst) (Lst.front)

#define ReturnBack(Lst) (Lst.back)

//	TODO: Deal with Macro's
#define GotoFront(Inp) (Inp->lst = Inp->front)

#define GotoBack(Inp) (Inp->lst = Inp->back)

#endif /* LINKED_LIST_MCR_H_ */
