class binom:
    def binomialCoef(self , n , k):
        C = [[0 for _ in range(k+1)] for _ in range(n+1)]
        for i in range(n+1):
            for j in range(min(i, k)+1):
                if (j == 0 or j == i):
                    C[i][j] = 1
                else:
                    C[i][j] = C[i-1][j-1] + C[i-1][j]

        return C[n][k]

if __name__ == "__main__":
    n = int(input("Enter the value of n: "))
    k = int(input("Enter the value of k: "))
    print("Value of nCk is " , binom().binomialCoef(n , k))

    
