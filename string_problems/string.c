#include<stdio.h>
int main(){
    char arr[] = "college wallah is best beta \0";
    printf("%s\n",arr);
    puts(arr);

    // int i=0;
    // while(arr[i] !='\0'){
    //     printf("%c",arr[i]);
    //     i++;
    // }
    return 0;
}