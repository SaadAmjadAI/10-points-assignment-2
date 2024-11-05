#include<stdio.h>
#include<conio.h>
int main(){
    int age;
    char serious_illness;

    printf("enter your age");
    scanf("%d",&age);

    if(age>=18){

        if(age>45){
            printf("if you have any serious illness (Y/N):");
            scanf(" %c",&serious_illness);

        if(serious_illness == 'y'|| serious_illness == 'Y'){
            printf("you are not eligible for health insurence");
        }
        else{
           printf("you are eligible for health insurance");
        }
        
         } else {
            printf("you are eligible for health insurance");
        } 
          } else {
            printf("you are not eligible for health insurance");
        }
        
        getch();
}