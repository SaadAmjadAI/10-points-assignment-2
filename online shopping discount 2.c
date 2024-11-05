#include<stdio.h>
#include<conio.h>
int main(){
    float purchase_amount,final_amount;
    char ismember;
    printf("please enter purchase amount:");
    scanf("%f",&purchase_amount);
    if(purchase_amount>2000){
        printf("Are you a member?(Y/N):");
        scanf(" %c",&ismember);
     if(ismember=='y'|| ismember=='Y'){
        final_amount=purchase_amount * 0.80;
        printf("you are a member 20%% has been apllied.\n");

    } else {
        final_amount=purchase_amount * 0.90;
        printf("you are not a member 10%% has been applied.\n ");
    } } else {
        final_amount=purchase_amount;
        printf("no discount has been applied your amount is less than 2000.\n");
    }
    printf("final amount after discount:%.2f\n",final_amount);
    getch();
}