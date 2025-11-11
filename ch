#include <stdio.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age<18){
        printf("you are not adult\n");
      printf("you can't drive\n");
      printf("you can't vote\n");
    }
else
{
        printf("you are an adult.\n");
printf("you can drive\n");
  printf("you can vote");
}
    
    
    return 0;
}
