#ifndef _SEARCH_ALGOS_H
#define _SEARCH_ALGOS_H

/* Libraries */
#include <stdio.h>

/* Globals and Structures*/

/* Prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int l, int r);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGOS_H */
