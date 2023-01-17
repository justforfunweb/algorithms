#include <stdio.h>
#include <conio.h>
#include <string.h>

int max(int a , int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}

int lcs(char *X, char *Y, int m, int n){
	int L[m + 1][n + 1];

	for(int i = 0; i <= m; i++){
		for(int j = 0; j <= n; j++){
			if(i == 0 || j == 0){
				L[i][j] = 0;
            }
			else if(X[i - 1] == Y[j - 1]){
				L[i][j] = L[i - 1][j - 1] + 1;
            }
			else{
				L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
		}
	}
	return L[m][n];
}

int main(){
	
	char X[] = "AGGTAB";
	char Y[] = "GXTXAYB";

	int m = strlen(X);
	int n = strlen(Y);

	printf("Length of the longest common sub-sequence is: %d\n" , lcs(X, Y, m, n));

	return 0;
}
