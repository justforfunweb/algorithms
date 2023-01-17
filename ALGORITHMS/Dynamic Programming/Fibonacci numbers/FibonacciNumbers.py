class fibo:
    def fibonacci(self , n):
        if n <= 1:
            return n
        return fibo().fibonacci(n-1) + fibo().fibonacci(n-2)


if __name__ == "__main__":
	print(fibo().fibonacci(int(input("Enter the number: "))))
