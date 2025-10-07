// functions.c
//
// Written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program is a simple demonstration of functions

#include <stdio.h>


int add_numbers(int hello_world, int hello_world2);

// TODO: Function prototype
int main(void) {
    int result;
    int num1 = 5;
    int num2 = 3;

    // TODO: Function call 
    // 1st: What info does it need? -- function parameters
        //  num1, num2
    // 2nd: What do we want to extract from the function -- return
        // 
    result = add_numbers(num1, num2);

    printf("Result: %d\n", result);
    return 0;
}

int add_numbers(int hello_world, int hello_world2) {
    // int result = num1 + num2;
    // return result;
    return hello_world + hello_world2;
}

// char add_numbers;
// double add_numbers;
// void add_numbers;

