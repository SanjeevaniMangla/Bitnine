##Question_1
This is a simple C program that demonstrates how to create a binary tree using structs and pointers. The program evaluates arithmetic expressions 
and calculates the nth fibonacci number using recursion. 

## Description
The program defines a `Node` struct, which represents a node in the binary tree. Each node has a `type` field that stores an `enum` value to 
indicate the type of node (ADD, SUB, MUL, DIV, ABS, FIB, SELF). The `value` field stores the numerical value of the node if it's a leaf node, 
and the `left` and `right` fields point to its left and right children if it's an operator node.

The program defines a `makeFunc` function to create a new node with a specified type, and a `makeValue` function to create a new leaf node with a specified value.

The program defines a `fibonacci` function that takes an integer `n` as input and returns the nth fibonacci number. It uses an array to store 
previously calculated fibonacci numbers to improve performance.

The program defines a `calc` function that takes a node pointer as input and recursively calculates the value of the node using its children.

The `main` function creates a binary tree to represent the expression `(10+6)-(5*4)`, calculates its value using `calc`, and prints the result. 
It also creates a node to calculate the 7th fibonacci number, and prints the result.

## Conclusion
This program demonstrates how to use structs and pointers to create a binary tree, and how to recursively evaluate arithmetic expressions and 
calculate fibonacci numbers.



##Question_2
This program is a simple implementation of the Fibonacci sequence using a recursive, iterative and memoization function in C.

##Development Environment
The program was developed using the C programming language and was tested on a Windows operating system. The code editor used for development 
was Visual Studio Code with the C/C++ extension installed.