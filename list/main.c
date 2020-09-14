// list/main.c
// 
// Tests for linked list implementation.
//
// <Tanjin Prity>

#include <stdio.h>
#include "list.h"

int main() {
	printf("Tests for linked list implementation.\n");
   printf("----------------------------------------\n");
	
  list_t *linkedList = list_alloc();
	list_add_to_front(linkedList,2);
    printf("Add %d to the front: ", 2);
    list_print(linkedList);
    
	list_add_to_front(linkedList,1);
    printf("Add %d to the front: ", 1);
    list_print(linkedList);
    
	list_add_to_back(linkedList,3);
    printf("Add %d to the back: ", 3);
    list_print(linkedList);
    
	list_add_at_index(linkedList,89,3);
    printf("Add %d at index %d: ", 89,3);
    list_print(linkedList);
	
	elem num1 = list_remove_from_front(linkedList);
    printf("\nRemoved %d from the front: ", num1);
    list_print(linkedList);
    
	elem num2 = list_remove_at_index(linkedList, 3);
    printf("Removed %d from the index, %d: ", num2, 3);
    list_print(linkedList);
    
	elem num3 = list_remove_from_back(linkedList);
    printf("Removed %d from the back: ", num3);
    list_print(linkedList);
	
	int length = list_length(linkedList);
	printf("\nLength of the list is: %d.\n", length);
	
	elem item = 10;
	bool exist = list_is_in(linkedList, item);
	
  if (exist){
		printf("%d is in the list.\n", item);
	} else {
		printf("%d is not in the list.\n", item);
	}
	
	int index1 = 2;
	elem num4 = list_get_elem_at(linkedList, index1);
	printf("Element at index %d is: %d. \n", index1, num4);
	
	elem num5 = 2;
	int index2 = list_get_index_of(linkedList,num5);
	printf("Element %d is at index: %d. \n", num5, index2);
	
	list_free(linkedList);
	return 0;
}


/***
 * Tests for linked list implementation.
 * ----------------------------------------
 * Add 2 to the front: 2
 * Add 1 to the front: 1 -> 2
 * Add 3 to the back: 1 -> 2 -> 3
 * Add 89 at index 3: 1 -> 2 -> 3 -> 89
 * 
 * Removed 1 from the front: 2 -> 3 -> 89
 * Removed 89 from the index, 3: 2 -> 3
 * Removed 3 from the back: 2
 * 
 * Length of the list is: 1.
 * 10 is not in the list.
 * Element at index 2 is: 2. 
 * Element 2 is at index: 0. 
*/