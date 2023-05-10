//Iterative Function:

//Advantage: The iterative function has a lower time complexity than the recursive function as it avoids repeated calculations. 
//           It is also more memory-efficient as it does not use the system stack. 

//Disadvantage: However, the iterative function may be harder to understand and implement for some people.


#include <stdio.h>

int F(int n)
{
    int f0 = 0, f1 = 1, f2 = 2, f3;
    if (n == 0)
        return f0;
    else if (n == 1)
        return f1;
    else if (n == 2)
        return f2;
    else
    {
        for (int i = 3; i <= n; i++)
        {
            f3 = f1 + f0;
            f0 = f1;
            f1 = f2;
            f2 = f3;
        }
        return f3;
    }
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