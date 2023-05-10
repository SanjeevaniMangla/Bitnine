//Recursive Function:

//Advantage: The recursive function is easy to understand and implement. 

//Disadvantage: However, it has a higher time complexity due to repeated calculations, which can result in a stack overflow for larger inputs.

#include <stdio.h>

int F(int n) {
    if (n == 0) 
        return 0;
    else if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return F(n-3) + F(n-2);
}

int main() {
    int n ;
    printf("Type a number:");
    scanf("%d", &n);
    printf("Fibonacci sequence of %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", F(i));
    }
    printf("\n");
    return 0;
}