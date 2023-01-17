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

void bubbleSort(int array[], int numberOfElements){
	for (int i = 0 ; i < numberOfElements - 1 ; i++)
		for (int j = 0 ; j < numberOfElements - i - 1 ; j++)
			if (array[j] > array[j + 1])
				swap(array[j], array[j + 1]);

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

    bubbleSort(array , numberOfElements);
}
