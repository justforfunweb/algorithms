#include <stdio.h>
#include <conio.h>

int fib(int n){
	if(n <= 1){
		return n;
    }
    else{
	    return fib(n - 1) + fib(n - 2);
    }
}

int main(){
	int n;
    
    printf("Enter the number :\n");
    scanf("%d" , &n);

	printf("%d", fib(n));
    
	return 0;
}
