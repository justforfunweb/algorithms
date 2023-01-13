class sortingArray:
    def printArray(self,array):
        print(*array)

    def insertionSort(self , array):
        for i in range(1, len(array)):
            key = array[i]
            j = i-1
            while (j >= 0 and key < array[j]):
                    array[j + 1] = array[j]
                    j -= 1
            array[j + 1] = key

        sortingArray().printArray(array)

if __name__ == "__main__":
    numberOfElements = int(input("Enter the number of elements: "))
    print("Enter the elements in a space separated manner")
    array = list(map(int,input().split()))
    sortingArray().insertionSort(array)
