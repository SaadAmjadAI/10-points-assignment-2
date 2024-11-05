#include<stdio.h>
#include<conio.h>

int main() {
    
    int day;
    printf("Please enter the number from(1to7):");
    scanf("%d",&day);
    if (day<1|| day>7){
        printf("invalid input");
    } 
        switch (day){
            case 1:
            printf("monday");
            break;
            case 2:
            printf("tuesday");
            break;
            case 3:
            printf("wednesday");
            break;
            case 4:
            printf("thursday");
            break;
            case 5:
            printf("friday");
            break;
            case 6:
            printf("saturday");
            break;
            case 7:
            printf("sunday");
            break;
        }
        getch();

        
          
}