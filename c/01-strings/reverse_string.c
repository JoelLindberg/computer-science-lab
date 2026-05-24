#include <stdio.h>
#include <string.h>

/*
    - This elegantly reverses the string by switching places from the outside in.
    - This explains why the for loop is so short (length/2).
    - Is is a destructive function.
    - It is an example of a 0(n) time complexity (linear) algorithm.
        - It's linear because it grows in direct proportion to the length of the input string.
        - Even though we iterate only length/2 Big O notation ignores constant factors. It doesn't matter whether you do $n$ or $n/2$ operations as the growth is still linear.
        - The operations in the swap itself are also constant as they always happen $n/2$ times.

    - Followed and studied:
        - Jacob Sorber: https://youtu.be/dcBcgPGIMpo?t=219
*/

void reverse0(char *str) {
    int length = strlen(str);

    for (int i=0; i < length/2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    printf("%s\n", str);
}

int main() {
    char c[] = "cherry";
    reverse0(c);

    return 0;
}
