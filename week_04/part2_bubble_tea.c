// bubble_tea.c
//
// Written by Valerie (YOUR-ZID) on TODAYS-DATE
//
// This program will calcualte the price of bubble tea for customers
#include <stdio.h>

#define LARGE 'L'
#define REGULAR 'R'
#define ADDED_COST 0.5
#define BASE_TEA 10
#define BASE_TOPPINGS 5
#define BASE_COST 6.5

// enum definitions
enum bubble_tea_type {
    MILK_TEA,
    FRUIT_TEA,
    TARO_MILK,
    MATCHA_LATTE,
};

enum topping_types {
    TAPIOCA_PEARLS,
    JELLY,
    POPPING_PEARLS,
    ALOE_VERA,
};

// struct definitions
struct bubble_tea {
    enum bubble_tea_type type;
    enum topping_types topping;
    int topping_qty;
    char size;
};

struct inventory {
    int tea;
    int toppings;
};

////////////////////////////////////////////////////////////////////////////////
////////////////////////////// FUNCTION PROTOTYPES /////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// TODO: Add functions prototypes here

////////////////////////////////////////////////////////////////////////////////
////////////////////////////// MAIN FUNCTION ///////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

struct bubble_tea take_order(int type, struct bubble_tea order, int testing, 
int testing2);
int check_stock(struct inventory inventory, struct bubble_tea order);

int main(void) {
    // Step 1: Scan user's bubble tea order
    // struct bubble_tea order = scan_order();
    // Step 2: Check available stock
    // Step 3: Calculate the cost
    // Step 4: Print the final order and cost
    // Step 5: Update the stock after fulfilling the order
    // Step 6: print the remining inventory
    int varaibe = 0;

    int varaibel, variable2, variable3;
    int varaibel, variable2, variable3 = 0;

    // SAFEST!
    int variabel = 0;
    int variable2 = 0;
    int vairbale3 = 0;

    struct inventory inventory;
    inventory.tea = BASE_TEA;
    inventory.toppings = BASE_TOPPINGS;

    // Take the user's bubble tea order
    struct bubble_tea order;
    int type;

    // Will need type, order
    order = take_order(type, order);
    

    
    printf("Enter topping qty: ");
    scanf("%d", &order.topping_qty);

    printf("Enter size (L for Large, R for Regular): ");
    scanf(" %c", &order.size);

    // Check available stock and end the program if insufficient stock
    // Will need inventory, order
    int valid_stock = check_stock(inventory, order);
    if (valid_stock == 0) {
        return 0;
    }
    

    // Calculate the cost
    double total_cost = BASE_COST;

    if (order.size == LARGE) {
        total_cost += ADDED_COST;
    }

    if (order.type == MILK_TEA ||
        order.type == TARO_MILK ||
        order.type == MATCHA_LATTE) {
        total_cost += ADDED_COST;
    }

    int count = 0;
    while (count < order.topping_qty) {
        total_cost += ADDED_COST;
        count++;
    }

    // Print the final order and cost
    printf("Order:\n");
    printf("Type: %d\n", order.type);
    printf("Topping Qty: %d\n", order.topping_qty);
    printf("Size: %c\n", order.size);
    printf("Total Cost: %.2lf\n", total_cost);

    // Update the stock after fulfilling the order
    if (order.size == LARGE) {
        inventory.tea -= 2;
    } else {
        inventory.tea -= 1;
    }
            
    inventory.toppings -= order.topping_qty;

    // Step 6: print the remaining inventory
    printf("The current inventory is: ");
    printf("Bubble tea(s): %d\n", inventory.tea);
    printf("Topping(s): %d\n", inventory.toppings);


    return 0;
}

////////////////////////////////////////////////////////////////////////////////
///////////////////////////// FUNCTION DEFINITIONS /////////////////////////////
////////////////////////////////////////////////////////////////////////////////

// TODO: Write function definitions here

struct bubble_tea take_order(int type, struct bubble_tea order) {
    printf("Enter bubble tea type (0: MILK TEA, 1: FRUIT TEA, 2: TARO MILK, "
            "3: MATCHA LATTE): ");
    scanf("%d", &type);
    if (type == 0) {
        order.type = MILK_TEA;
    } else if (type == 1) {
        order.type = FRUIT_TEA;
    } else if (type == 2) {
        order.type = TARO_MILK;
    } else if (type == 3) {
        order.type = MATCHA_LATTE;
    }

    printf("Enter topping (0: TAPIOCA PEARLS, 1: JELLY, 2: POPPING PEARLS, "
            "3: ALOE VERA): ");
    scanf("%d", &type);
    if (type == 0) {
        order.topping = TAPIOCA_PEARLS;
    } else if (type == 1) {
        order.topping = JELLY;
    } else if (type == 2) {
        order.topping = POPPING_PEARLS;
    } else if (type == 3) {
        order.topping = ALOE_VERA;
    }

    return order;
}

int check_stock(struct inventory inventory, struct bubble_tea order) {
    if (inventory.tea - 1 <= 0 ||
        inventory.toppings - order.topping_qty <= 0) {
        printf("Sorry, we cannot fulfill your bubble tea order due to "
                "insufficient stock.\n");
        return 0; 
    }
    // Stock is avaliable
    return 1;
}