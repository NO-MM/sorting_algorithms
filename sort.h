#ifndef _SORT_H
#define _SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * struct listint_s - A function with doubly linked list node.
 *
 * @n: An integer stored in the node.
 * @prev: A pointer to the previous element of the list.
 * @next: A pointer to the next element of the list.
 */
typedef struct listint_s
{
  int n;
  struct listint_s *prev;
  struct listint_s *next;
}listint_t;

/* print */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
