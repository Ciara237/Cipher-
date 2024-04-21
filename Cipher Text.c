#include <stdio.h>
#include <string.h>

//function to reverse the content of a string.
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char myString[100]="I Love Code";
    printf("Original string: %s\n",myString);
    //Displays ciphered text
    reverseString(myString);
    printf("Reversed string: %s\n",myString);

    return 0;
}

