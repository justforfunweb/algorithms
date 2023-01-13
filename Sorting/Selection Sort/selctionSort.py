class sortingArray:
    def printArray(self,array):
        print(*array)
        
    def selectionSort(self,array):
        for i in range(len(array)):
            minimumIndex = i
            for j in range(i+1, len(array)):
                if array[minimumIndex] > array[j]:
                    minimumIndex = j
            array[i], array[minimumIndex] = array[minimumIndex], array[i]
        sortingArray().printArray(array)

if __name__ == "__main__":
    numberOfElements = int(input("Enter the number of elements: "))
    print("Enter the elements in a space separated manner")
    array = list(map(int,input().split()))
    sortingArray().selectionSort(array)