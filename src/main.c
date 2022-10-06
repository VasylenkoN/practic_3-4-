#include <stdio.h>
#include <stdlib.h>

#include <time.h>
#include "function.h"



int main (int argc, char* argv[]) {
	srand(time(NULL));
	int **ArrayList;
	int n, k = 0;
	while (1) {
		int number;
		printf("\n\t1. Аdd an element to the end of a list.\n");
    	printf("\t2. Inserting an element in the middle of a list.\n");
    	printf("\t3. Quantity of elements in the array.\n");
    	printf("\t4. Delete elements by index.\n");
		printf("\t5. Changing the value of an existing element.\n");
		printf("\t6. Get the value of the given element.\n");
		printf("\t7. Create Array list.\n");
		printf("\t8. Display array elements.\n");
		printf("\t0. Exit.\n");
		printf("  Your choice: ");
		scanf ("%d", &number);
		switch(number) {
			case 0 : {
              	printf("\nExit");
				free(ArrayList);
				return 0;
			}
			case 1 : {
				if (k == 1) {
					int item;
					printf("\n  Input a new array value: ");
					scanf ("%d", &item);
					ArrayList = set_new_memory(ArrayList, n);
					add(ArrayList, n, item);
					n++;
					print_array_list(ArrayList, n);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
			}
			case 2 : {
				if (k == 1) {
					int index, item;
					printf("\n  Input index for array: ");
					scanf ("%d", &index);
					index--;
					printf("\n  Input a new value for array: ");
					scanf ("%d", &item);
					ArrayList = set_new_memory(ArrayList, n);
					insert(ArrayList, n, index, item);
					n++;
					print_array_list(ArrayList, n);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
			}
			case 3 : {
				if (k == 1) {
					size(n);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
			}
			case 4 : {
				if (k == 1) {
					int index;
					printf("\n  Input index for array: ");
					scanf ("%d", &index);
					index--;
					ArrayList = set_new_memory(ArrayList, n);
					remove_index(ArrayList, n, index);
					n--;
					print_array_list(ArrayList, n);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
			}
			case 5 : {
				if (k == 1) {
					int index, item;
					printf("\n  Input index for array:: ");
					scanf ("%d", &index);
					index--;
					printf("\n  Input a new value for array: ");
					scanf ("%d", &item);
					set(ArrayList, index, item);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
			}
			case 6 : {
				if (k == 1) {
					int index;
					printf("  Enter array index: ");
					scanf ("%d", &index);
					index--;
					if (index < 0 || index > n) {
						printf("  Error\n");
						break;
					}
					get(ArrayList, index);
					break;
				} else {
					printf("\n  Array not created!\n");
					break;
				}
			}
			case 7 : {
				if (k == 0) {
				    int min, max;
				    printf("\n  Enter the size of the array:");
				    scanf ("%d", &n);
				    if (n < 0) {
				        printf("  Error\n");
					    break;
					}
					printf("  Input the MIN value:");
					scanf ("%d", &min);
					printf("  Input the MAX value:");
					scanf ("%d", &max);
					ArrayList = memory(n);
					fill_array_list_random(ArrayList, n, min, max);
				    print_array_list(ArrayList, n);
					k++;
					break;
					} else {
					printf("\n  Array created!\n");
					break;
				    }
				}
			case 8 : {
				if (k == 0) {
					printf("\n  Array not created!\n");
					break;
				} else {
					print_array_list(ArrayList, n);
					break;
				}
			}
			default: printf("  Error\n\n");
		}
		continue;
	}
	return 0;
}
