#include <stdio.h>

#define CHAR_LIMIT 500

int main() {
    char str[CHAR_LIMIT]; //Input String 

    //Input
    printf("Enter in prompt: ");
    fgets(str, CHAR_LIMIT, stdin);

    //Output
    printf("\n\nInputed String: %s", str);
    return 0;

}
