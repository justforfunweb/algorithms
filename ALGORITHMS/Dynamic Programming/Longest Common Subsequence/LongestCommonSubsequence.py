class lcs:
    def longestCommonSubsequence(self , string1 , string2):
        L = [[None]*(len(string2)+1) for i in range(len(string1)+1)]

        for i in range(len(string1)+1):
            for j in range(len(string2)+1):
                if i == 0 or j == 0 :
                    L[i][j] = 0
                elif string1[i-1] == string2[j-1]:
                    L[i][j] = L[i-1][j-1]+1
                else:
                    L[i][j] = max(L[i-1][j] , L[i][j-1])

        return L[len(string1)][len(string2)]

if __name__ == "__main__":
    string1 = input("Enter the first string: ").upper()
    string2 = input("Enter the second string: ").upper()
    print("Length of the longest common subsequence is ", lcs().longestCommonSubsequence(list(string1), list(string2)))
