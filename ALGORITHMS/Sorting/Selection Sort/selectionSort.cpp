#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void printArray(int array[], int numberOfElements){
    cout << "Sorted array is" << endl;
	for (int i = 0 ; i < numberOfElements ; i++)
		cout << array[i] << " ";
	cout << endl;
}

void selectionSort(int array[], int numberOfElements){
	int minimumIndex;
	for(int i = 0 ; i < numberOfElements-1 ; i++){
		minimumIndex = i;
		for (int j = i + 1 ; j < numberOfElements ; j++)
		if (array[j] < array[minimumIndex])
			minimumIndex = j;
		if(minimumIndex != i)
			swap(&array[minimumIndex], &array[i]);
	}

    printArray(array , numberOfElements);
}

int main(){
	int numberOfElements;

    cout << "Enter the number of elements:" << endl;
    cin >> numberOfElements;

    int array[numberOfElements];

    cout << "Enter the elements in a space separated manner" << endl;
    for(int i = 0 ; i < numberOfElements ; i++){
        cin >> array[i];
    }

    selectionSort(array , numberOfElements);

    return 0;
}
