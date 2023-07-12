/**
  ******************************************************************************
  * @file    	csmkll.h
  * @author		Claude Stephane M. Kouame
  * @version 	V1.0
  * @date		Oct 10, 2021
  * @brief
  * feel free to use it as you wish ;-)
  ******************************************************************************
*/
#ifndef CSMKLL_H
#define CSMKLL_H

#include <stdlib.h>
#include <stdio.h>

typedef struct linkedList
{
    int val;
    struct linkedList *next;
} LinkedList;


LinkedList *ll_init(int);
int ll_size(LinkedList*);
int ll_get(LinkedList*, int);
void ll_append(LinkedList**, int);
void ll_insert(LinkedList*, int, int);
void ll_remove(LinkedList**, int);
void ll_clear(LinkedList*);
void ll_print(LinkedList*);


#endif /* CSMKLL_H */
