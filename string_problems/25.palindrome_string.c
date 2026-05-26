#include<stdio.h>
#include<string.h>
int main(){

    // Que -> Check if a string is palindrome.
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    char rev[100];

    strcpy(rev , str);
    strrev(rev);

    if(strcmp(rev,str) == 0){
        printf("The string was palindrome");
    }
    else{
        printf("The string was not palindrome");
    }

    return 0;
}