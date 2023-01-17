class sortingArray:
    def printArray(self , array):
        print(*array)
        
    def bubbleSort(self , array):
        for i in range(len(array)):
            for j in range(0, len(array)-i-1):
                if array[j] > array[j+1]:
                    array[j], array[j+1] = array[j+1], array[j]
                    
        sortingArray().printArray(array)

if __name__ == "__main__":
    numberOfElements = int(input("Enter the number of elements: "))
    print("Enter the elements in a space separated manner")
    array = list(map(int,input().split()))
    sortingArray().bubbleSort(array)
