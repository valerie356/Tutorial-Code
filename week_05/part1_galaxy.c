// Space Exploration
// part1_galaxy.c
//
// This program was written by YOUR-NAME-HERE (zXXXXXXX)
// on INSERT-DATE-HERE
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

#define QUIT_COMMAND 'q'
#define ADD_PLAENT 'p'
#define ADD_NEBULA 'n'

#define FIRST_ROW_COL 0
#define LAST_ROW_COL 4

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);

int check_coord(struct celestial_body galaxy[SIZE][SIZE], int row, int col);
void initialize_map(struct celestial_body galaxy[SIZE][SIZE]);
void place_planets_nebula(struct celestial_body galaxy[SIZE][SIZE]);
void place_player(struct celestial_body galaxy[SIZE][SIZE]);
void place_stars(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    initialize_map(galaxy);
    place_planets_nebula(galaxy);
    
    // TODO: Place the planets and nebulae in the galaxy
    // printf("Enter planets and nebulae:\n");

    // TODO: Place the player (player is just spaceship) in the galaxy until the user types 'q'
    place_player(galaxy);

    // Check if coords entered are valid
    // Planets are added with p [row] [col] [points]
    // Nebulae are added with n [row] [col]

    // TODO: Place the stars in the galaxy
    place_stars(galaxy);

    // TODO: Print the map
    print_map(galaxy);
    return 0;
}
// 0 - invalid
// 1 - valid
int check_coord(struct celestial_body galaxy[SIZE][SIZE], int row, int col) {
    if (row >= FIRST_ROW_COL && col >= FIRST_ROW_COL 
    && row <= LAST_ROW_COL && col <= LAST_ROW_COL) {
        return 1;
    }
    return 0;
}

// Will initialise every coord to empty 
void initialize_map(struct celestial_body galaxy[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            galaxy[i][j].entity = EMPTY;
            galaxy[i][j].points = 0;
        }
    }

}

void place_planets_nebula(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter planets and nebulae:\n");
    char input = ' ';
    scanf(" %c", &input);
    while (input != QUIT_COMMAND) {
        int row;
        int col;
        scanf("%d %d", &row, &col);
        if (input == ADD_PLAENT) {
            // scanf row, col, points
            int points;
            scanf("%d", &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (input == ADD_NEBULA) {
            // scanf row, col 
            galaxy[row][col].entity = NEBULA;
            galaxy[row][col].points = NEBULA_POINTS;
            
        }

        scanf(" %c", &input);
    }

}

void place_player(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the starting position of the player: ");
    int player_row;
    int player_col;
    scanf("%d %d", &player_row, &player_col);
    while (check_coord(galaxy, player_row, player_col) == 0) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position:\n");
        scanf("%d %d", &player_row, &player_col);
    }

    galaxy[player_row][player_col].entity = SPACESHIP;
}

void place_stars(struct celestial_body galaxy[SIZE][SIZE]) {
     printf("Enter the position and points of the star(s):\n");
    int star_row;
    int star_col;
    int star_points;
    while (scanf("%d %d %d", &star_row, &star_col, &star_points) == 3) {
        if (check_coord(galaxy, star_row, star_col)) {
            galaxy[star_row][star_col].entity = STAR;
            galaxy[star_row][star_col].points = star_points;
        }
        
    }
}
// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}