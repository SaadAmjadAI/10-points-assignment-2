#include<stdio.h>
#include<conio.h>
int main(){
    float math,science;
    printf("Enter the marks of math(out of 100):");
    scanf("%f",&math);
    printf("enter the marks of science (out of 100):");
    scanf("%f",&science);
    if(math>=50 && science>=50){
        printf("you are eligible for admission.\n");
        }else {
            printf("you are not eligible for admission.\n ");
        }
        if (math>=80 && science>=80){
            printf("you are eligible for scholarship");
        }else {
            printf("you are not eligible for scholarship");
        }
        
    
    
    getch();
}