#include <stdio.h>
#include <conio.h>
#include <math.h>

void swap(int* xp, int* yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void printArray(int array[], int numberOfElements){
    printf("Sorted array is\n");
	for(int i = 0 ; i < numberOfElements ; i++)
		printf("%d ", array[i]);
	printf("\n");
}

void bubbleSort(int array[], int numberOfElements){
	for (int i = 0 ; i < numberOfElements - 1 ; i++){
		for (int j = 0 ; j < numberOfElements - i - 1 ; j++){
			if (array[j] > array[j + 1]){
				swap(&array[j], &array[j + 1]);
            }
        }
    }

    printArray(array , numberOfElements);
}

int main(){
	int numberOfElements;

    printf("Enter the number of elements:\n");
    scanf("%d" , &numberOfElements);

    int array[numberOfElements];

    printf("Enter the elements in a space separated manner\n");
    for(int i = 0 ; i < numberOfElements ; i++){
        scanf("%d" , &array[i]);
    }

    bubbleSort(array , numberOfElements);
}
