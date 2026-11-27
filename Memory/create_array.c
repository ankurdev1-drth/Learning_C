//function should return a pointer to a dynamically allocated int array with n members each of which is initializeed to initial_value
// return value should be NULL if the array can't be allocated
#include <stdio.h>
#include <stdlib.h>


int *create_array(int n, int initial_value){
	int *array;
	int i;
	
	array = malloc(n * sizeof(int));
	if (array == NULL) {
		return NULL;
	}
	for (i = 0; i <n; i++){
		arr[i] = initial_value;
	}
	return arr;
}
