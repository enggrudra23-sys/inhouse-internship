#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    char str2[100];
    char sub[4];

    printf("Enter a string: ");
    scanf("%s", str);
    //substring
    sub[0] = str[1];
    sub[1] = str[2];
    sub[2] = str[3];
    sub[3] = '\0'; // Null-terminate the substring
    printf("Substring: %s\n", sub);
    //length of string
    strlen(str);
    printf("Length of the string: %d\n", strlen(str)); 
    //join two strings
    printf("Enter another string: ");
    scanf("%s", str2);
    strcat(str, str2);
    printf("joined string: %s\n", str); 

    return 0;

}