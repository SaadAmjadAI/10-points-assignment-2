#include<stdio.h>
#include<conio.h>
int main(){
    int units,bill;
    printf("enter the units:");
    scanf("%d",&units);

    if(units<=100){
        bill=0;
    }else if(units<=200){
        bill=(units*5);
    }else if(units<=300){
        bill=(units*8);
    }else if(units>=300){
        bill=(units*10);
    }
    printf("the electricity bill is: %d rupees",bill);
    getch();
}