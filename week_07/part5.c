/*
Sum of Command Line Arguments: Write a C program that takes multiple integers as 
command-line arguments and prints their sum.



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i = 1;
    int sum = 0;
    while (i < argc) {
        sum = atoi(argv[i]) + sum;
        i++;
    }
    printf("Sum is %d\n", sum);
}

*/

/*
Count Characters in Command Line Arguments: Write a C program that counts the 
total number of characters in all the command-line arguments passed to it.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) { 
    int i = 1;
    int sum = 0;
    while (i < argc) {
        sum += strlen(argv[i]);
        i++;
    }
    printf("Sum is %d\n", sum);
}

*/

/*
Reverse Command Line Arguments: Write a C program that prints all the 
command-line arguments passed to it in reverse order.
#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = argc - 1; i > 0; i--) {
        printf("%s\n", argv[i]);
    }

    return 0;
}

*/


/*
Check for Command Line Arguments: Write a C program that checks if any 
command-line arguments were provided except for the program name. If none were 
provided, print a message indicating so; otherwise, print the number of arguments.
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argv[1] == NULL) {
        printf("No command line arguments provided!\n");
        return 0;
    }
    printf("Num arguments is %d\n", argc - 1);
    return 0;
}
