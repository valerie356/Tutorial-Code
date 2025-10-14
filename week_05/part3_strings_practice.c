#define MAX_CHARS 100

#include <stdio.h>

int is_lowercase(char c);
int is_uppercase(char c);
int is_letter(char c);
char to_lowercase(char c);
char to_uppercase(char c);
int is_vowel(char c);

int count_lowercase(char string[MAX_CHARS]);
void make_vowels_uppercase(char string[MAX_CHARS]);
void delete_following_words(char string[MAX_CHARS]);

int main(void) {
    char my_string[MAX_CHARS] = "Hello World!";

    printf("count_lowercase(my_string) = %d\n", count_lowercase(my_string));
    
    make_vowels_uppercase(my_string);
    printf("make_vowels_uppercase(my_string) = %s\n", my_string);
    
    delete_following_words(my_string);
    printf("delete_following_words(my_string) = %s\n", my_string);

    return 0;
}

// Provided char functions

// Returns : 1 if `c` is a lowercase letter
//         : 0 otherwise.
int is_lowercase(char c) {

    return 'a' <= c && c <= 'z';
}

// Returns : 1 if `c` is an uppercase letter
//         : 0 otherwise.
int is_uppercase(char c) {

    return 'A' <= c && c <= 'Z';
}

// Returns : 1 if `c` is a letter
//         : 0 otherwise.
int is_letter(char c) {

    return is_lowercase(c) || is_uppercase(c);
}

// Returns : `c` converted to lowercase, if it was an uppercase letter
//         : `c` unmodified, otherwise
char to_lowercase(char c) {
    if (is_uppercase(c)) {
        return c - 'A' + 'a';
    }

    return c;
}

// Returns : `c` converted to uppercase, if it was a lowercase letter
//         : `c` unmodified, otherwise
char to_uppercase(char c) {
    if (is_lowercase(c)) {
        return c - 'a' + 'A';
    }

    return c;
}

// Returns : 1 if `c` is an uppercase or lowercase vowel
//         : 0 otherwise.
int is_vowel(char c) {
    char lower_c = to_lowercase(c);

    return lower_c == 'a' 
        || lower_c == 'e'
        || lower_c == 'i' 
        || lower_c == 'o' 
        || lower_c == 'u';
}

// Functions to implement:

// 1. TODO
// returns the number of lowercase letters in the string
int count_lowercase(char string[MAX_CHARS]) {
    int i = 0;
    int num_lowercase = 0;
    while (string[i] != '\0') {
        if (string[i] >= 'a' && string[i] <= 'z') {
            num_lowercase++;
        }
        i++;
    }
    return num_lowercase;
}

// 2. TODO
// modifies the string by converting all its vowels to uppercase
void make_vowels_uppercase(char string[MAX_CHARS]) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' 
        || string[i] == 'o'  || string[i] == 'u') {
            string[i] = string[i] - 32;
        }
        i++;
    }
    return;
}

// 3.. TODO
// shortens a string so that it ends after the first word
// e.g. "This is a sentence" should turn into:
//      "This"
// 
// (hint. what defines when a string ends?)
void delete_following_words(char string[MAX_CHARS]) {
    int i = 0;
    while (string[i] != '\0') {
        if (string[i] == ' ') {
            string[i] = '\0';
        }
        i++;
    }

    return;
}