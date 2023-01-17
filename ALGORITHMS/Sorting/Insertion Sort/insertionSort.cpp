#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int numberOfElements){
    cout << "Sorted array is" << endl;
	for (int i = 0 ; i < numberOfElements ; i++)
		cout << array[i] << " ";
	cout << endl;
}

void insertionSort(int array[], int numberOfElements){
	for(int i = 1 ; i < numberOfElements ; i++){
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

    cout << "Enter the number of elements:" << endl;
    cin >> numberOfElements;

    int array[numberOfElements];

    cout << "Enter the elements in a space separated manner" << endl;
    for(int i = 0 ; i < numberOfElements ; i++){
        cin >> array[i];
    }

    insertionSort(array , numberOfElements);

	return 0;
}
