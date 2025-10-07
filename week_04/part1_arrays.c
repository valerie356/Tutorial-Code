// part1_arrays.c, odd_only
//
// Written by YOUR-NAME (YOUR-ZID)
// on TODAYS-DATE 
//
// This program adds 1 to any odd element in an array and after prints 
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {
    
    // 1st method
    int my_array[] = {10, 11, 12, 13, 14};

    int i = 0;
    while (i < SIZE) {
        // my_array[4];
        // Odd number
        if (my_array[i] % 2 == 1) {
            my_array[i]++;
        }
        i++;
    }

    i = 0;
    while (i < SIZE) {
        printf("%d ", my_array[i]);
        i++;
    }
    printf("\n");
    return 0;
}


/*
    // 2nd method:
    int my_array[SIZE];

    // 3rd method;
    int my_array[SIZE];
    int i = 0;
    while (i < SIZE) {
        i++;
    }

    // 4th method;
    int my_array[SIZE] = {0};
    */


// int array[] = {1, 2, 3, 4, 5};

//     int i = 0;
//     while (i < SIZE) {
//         if (array.i % 2 == 0) {
//             array.i += 1;
//         }
//     }

//     int j = 1;
//     while (j < SIZE) {
//         printf("%c ", array.j);
//     }

//     printf("\n");