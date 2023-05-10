//Memoization:

//Advantage: Memoization has a lower time complexity than the recursive function and does not result in a stack overflow for larger inputs.

//Disadvantage: However, it may require more memory for storing the results.

#include <stdio.h>

int memo[100];

int F(int n)
{
    if (n <= 1) {
        memo[n] = n;
        return n;
    }
    else if (n == 2) {
        memo[n] = 1;
        return 1;
    }
    else if (memo[n] != -1) {
        return memo[n];
    }
    else {
        memo[n] = F(n-1) + F(n-2);
        return memo[n];
    }
}

int main()
{
    int n ;
    printf("Type a number:");
    scanf("%d", &n);
    for (int i = 0; i < 100; i++) {
        memo[i] = -1;
    }

    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", F(i));
    }
    printf("\n");
    
    return 0;
}
