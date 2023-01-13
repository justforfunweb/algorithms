#include <math.h>
#include <stdio.h>
#include <math.h>

void printArray(int array[], int numberOfElements){
    printf("Sorted array is\n");
    for(int i = 0 ; i < numberOfElements ; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertionSort(int array[], int numberOfElements){
	for (int i = 1 ; i < numberOfElements ; i++){
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key){
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
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

    insertionSort(array , numberOfElements);

    return 0;
}

