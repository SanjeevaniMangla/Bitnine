#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int type;
    int value;
    struct Node *left;
    struct Node *right;
} Node;
typedef enum TypeTag {
    ADD,
    SUB,
    MUL,
    DIV,
    ABS,
    FIB,
    SELF
} TypeTag;


#define MAXN 100
int fib[MAXN];
Node* makeFunc(TypeTag type) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->type = type;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* makeValue(int value) {
    Node *newNode = makeFunc(SELF);
    newNode->value = value;
    return newNode;
}
int fibonacci(int n) {
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 0;
    fib[2]=1;
    for(int i = 3; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}
int calc(Node* node) {
    if (node->type == ADD) {
        return calc(node->left) + calc(node->right);
    }
    else if (node->type == SUB) {
        return calc(node->left) - calc(node->right);
    }
    else if (node->type == MUL) {
        return calc(node->left) * calc(node->right);
    }
    else if (node->type == DIV) {
        return calc(node->left) / calc(node->right);
    }
    else if (node->type == ABS) {
        return abs(calc(node->left));
    }
    else if (node->type == FIB) {
        return fibonacci(calc(node->left));
    }
    else if (node->type == SELF) {
        return node->value;
    }
    else{
        printf("Not present");
        return -1;
    }       
}


int main() {
    for (int i = 0; i < MAXN; i++) {
        fib[i] = -1;
    }
    Node *add = makeFunc(ADD);
    add->left = makeValue(10);
    add->right = makeValue(6);
    Node *mul = makeFunc(MUL);
    mul->left = makeValue(5);
    mul->right = makeValue(4);
    Node *sub = makeFunc(SUB);
    sub->left = makeValue(calc(add));
    sub->right = makeValue(calc(mul));
    Node *fibo = makeFunc(FIB);
    fibo->left = makeValue(abs(calc(sub)));
    fibo->value = fibonacci(calc(fibo->left));
    
    printf("add : %d\n", calc(add));
    printf("mul : %d\n", calc(mul));
    printf("sub : %d\n", calc(sub));
    printf("fibo : %d\n", calc(fibo));
}
