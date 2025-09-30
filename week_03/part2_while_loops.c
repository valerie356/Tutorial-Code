// part2_2d_while_loops.c
//
// This program was writtn by Sofia De Bellis (z5418801)
// on Febuarary 2024
//
// This program is a simple deonstration of a 2D while loop 

#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5

int main(void) {
    // 1- counter
    // 2- condition
    // 3- increment
    int row = 0;
    while (row < MAX_ROW) { // row = 1
        int col = 0;
        while (col < MAX_COL) { // col = 5
            printf("%d ", col);
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}













// int i = 0;
//     while (i < MAX_ROW) {
//         int j = 0;
//         while (j < MAX_ROW) {
//             printf("%d ", j);
//             j++;
//         }
//         printf("\n");
//         i++;
//     }
