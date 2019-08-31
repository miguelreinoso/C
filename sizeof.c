// C has a built-in 'sizeof' operator that gives the memory requirements for a particular data type


#include <stdio.h> // stdio = standard in out

int main() {
    printf("int: %d \n", sizeof(int)); // integer
    printf("float: %d \n", sizeof(float)); // float
    printf("double: %d \n", sizeof(double)); // double-precision floating point value
    printf("char: %d \n", sizeof(char)); // single character

    return 0; //terminates the main() function and returns the value 0 to the calling process
}


// ======================================================================================
// Memory (bytes):

// int: 4
// float: 4
// double: 8
// char: 1
