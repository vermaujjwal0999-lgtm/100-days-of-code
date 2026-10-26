#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to find: ");
    scanf(" %c", &ch);  // Note the space before %c to consume any leading whitespace

    while(str[i] != '\0') {
        if(str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("Frequency of %c = %d\n", ch, count);

    return 0;
}