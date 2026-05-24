#include <stdio.h>

/*
    - A string isn't a built-in type in C.
    - It's just an array of characters.
    - An array in C is a collection of similar items stored in contigous memory locations.
    - An array is a list of pointers to characters.
    - This array of characters have a null character (terminator) '\0' marking the end of the string.

    - References:
        - https://www.geeksforgeeks.org/c/strings-in-c/
 */

int main() {
    char name[] = "Cherry";
    printf("%s", name);

    return 0;
}
