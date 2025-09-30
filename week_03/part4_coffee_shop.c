// coffee_shop.c
//
// Written by YOUR-NAME (zID)
// on TODAYS-DATE 
//
// This program is a simple coffee shop used to demonstrate the use of 
// structs and enums in C. This program takes user input for a coffee order
// and outputs the cost of the order.

#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_COST 4.5

// TODO: Define an enum `coffee_type` that stores the different types of coffees 
// the shop sells. These are: LATTEE, CAPPUCCINO, ESPRESSO, AMERICANO & MATCHA.
enum coffee_type {
    LATTE,       // #define LATTE 0
    CAPPUCCINO,     // #define CAPPUCCINO 1
    ESPRESSO,       // #define ESPRESSO 2
    AMERICANO, 
    MATCHA
};

// TODO: Define a struct `coffee` that stores 
// 1. the coffee   type (an enum)
// 2. the number of sugars 
// 3. the size of a coffee (char)
struct coffee {
    enum coffee_type type;
    int num_sugars;
    char size;
};

int main(void) {
    // TODO: Initalise a variable for the struct
    struct coffee my_order;
    my_order.type = MATCHA;
    my_order.num_sugars = 0;
    my_order.size = 's';
    
    printf("Enter coffee type (0: LATTE, 1: CAPPUCCINO, 2: ESPRESSO, \
            3: AMERICANO, 4: MATCHA): ");
    
    // TODO: take user input type and turn it into a enum
    int input = 0;
    scanf("%d", &input);
    if (input == 0) {
        my_order.type = LATTE;
    } else if (input == 1) {
        my_order.type = CAPPUCCINO;
    } else if (input == 2) {
        my_order.type = ESPRESSO;
    }

    printf("Enter number of sugars: ");
    // TODO: take user input
    scanf("%d", &my_order.num_sugars);
    printf("Enter size (L for Large, R for Regular): ");
    // TODO: take user input
    scanf(" %c", &my_order.size);
    // TODO: Calculate cost of order
    // Base cost + 
    // if large then add added cost
    // each sugar is worth an added cost
    // LATTE, CAPPUCCINO, MATCHA -- added cost
    double cost = 0;
    cost = cost + BASE_COST;

    if (my_order.size == 'l') {
        cost = cost + ADDED_COST;
    }
    cost = cost + (ADDED_COST * my_order.num_sugars);

    if (my_order.type == LATTE || my_order.type == CAPPUCCINO 
    || my_order.type == MATCHA) {
        cost = cost + ADDED_COST;
    }
    printf("Total cost: %.2lf\n", cost);
    return 0;
}
