#include <conio.h>
#include <stdio.h>

int binomialCoeff(int n, int k){
	int C[n + 1][k + 1];

	for (int i = 0; i <= n; i++){
		for (int j = 0; j <= min(i, k); j++){
			if (j == 0 || j == i)
				C[i][j] = 1;
			else
				C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
		}
	}
	return C[n][k];
}

int min(int a, int b){
    return (a < b) ? a : b;
}

int main(){
	int n , k;

    printf("Enter the value of n\n");
    scanf("%d" , &n);
    printf("Enter the value of k\n");
    scanf("%d" , &k);

	printf("Value of nCk is %d\n", binomialCoeff(n, k));

	return 0;
}
