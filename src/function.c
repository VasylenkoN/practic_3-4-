#ifndef FUNCTION_C
#define FUNCTION_C
#include <stdio.h>
#include <stdlib.h>

int **memory(int size){
    int **arr = (int **) malloc(size * sizeof(int*));
    return arr;
}


int **set_new_memory(int **mass, int size) {
	int **arr = (int **)realloc(mass, (size + 1) * sizeof(int*));
	return arr;
}



void fill_array_list(int **mass, int size) {
	int i;
	printf("\n  Enter array values: ");
	for (i = 0; i < size; i++) {
		scanf("%d", &mass[i]);
	}
}


void fill_array_list_random(int **mass, int size, int min, int max) {
	int i;
	for(i = 0; i < size; i++){
		mass[i]= rand() % (max - min + 1) + min;
	}
}


void print_array_list(int **mass, int size) {
	int i;
	printf("\n\n  [");
	for(i = 0; i < size; i++){
		printf("%d\t", mass[i]);
	}
	printf("]\n\n\n");
}


void get(int **mass, int index) {
	printf("  ArrayList[%d] = %d\n", index + 1, mass[index]);
}


void set(int **mass, int index, int item) {
	mass[index] = item;
	printf("\n  New value set!\n");
}


void size(int size) {
	printf("\n  The size of the array is: %d\n\n", size);
}



void add(int **mass, int size, int item) {
	mass[size] = item;
	printf("\n  New value added!\n");
}


void insert(int **mass, int size, int index,int item) {
	int i, tmp = size;
	while(tmp >= index) {
		mass[tmp + 1] = mass[tmp];
		tmp--;
	}
	mass[index] = item;
}


void remove_index(int **mass, int size, int index) {
	int i;
	if(index > size){
		 printf("\n  You can't delet index index is oversized!\n");
		 
	}else
	for (i = index; i < size; i++){
		mass[i] = mass[i + 1];
	}
}


#endif
