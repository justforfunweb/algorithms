#include <stdio.h>
#include <conio.h>
#include <math.h>
 
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int array[], int numberOfElements){
    printf("Sorted array is\n");
    for(int i = 0 ; i < numberOfElements ; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
 
void selectionSort(int array[], int numberOfElements){
    int minimumIndex;
 
    for (int i = 0 ; i < numberOfElements-1 ; i++){
        minimumIndex = i;
        for (int j = i+1 ; j < numberOfElements ; j++){
            if (array[j] < array[minimumIndex]){
                minimumIndex = j;
            }
        }
        if(minimumIndex != i){
            swap(&array[minimumIndex], &array[i]);
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

    selectionSort(array , numberOfElements);

    return 0;
}
