#include <stdio.h>

int main(void) {
    int sum = 0;
    int target = 0;
    int input = 0;
    printf("Please enter the target: ");
    scanf("%d", &target);
    
    printf("Please enter numbers: ");
    //  6
    scanf("%d", &input);
    sum = sum + input;

    while (sum < target) {
        scanf("%d", &input);
        sum = sum + input;
    }
}


// PART C: Scanf until EOF (Control-D)
// int input = 0;
//     while (scanf("%d", &input) == 1) {
//         printf("Number entered: %d\n", input);
//     }

// PART A:  Enter a series of integers until you reach a negative number. Then, stop and calculate the sum.
// //  int input = 0;
//     int sum = 0;
//     scanf("%d", &input);
//     while (input >= 0) {
//         sum = sum + input;
//         scanf("%d", &input);
//     }


// PART B: B: Enter characters until the user presses 'q'. Then, display the count of characters entered.
//  char input = ' ';
//    scanf(" %c", &input);
//    while (input != 'q') {
//         printf("%c\n", input);
//         scanf(" %c", &input);
//    }
    