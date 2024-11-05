#include<stdio.h>
#include<conio.h>
int main(){
    float chemistry,biology,english,average;
    char grade;
    printf("please enter the marks  of chemistry:");
    scanf("%f",&chemistry);
    printf("please enter the marks of biology:");
    scanf("%f",&biology);
    printf("please enter the value of english:");
    scanf("%f",&english);
    average = (chemistry + biology + english)/3;
      
     if(average>75){
          grade='A';
    
    }
    
    else if(average>=50 && average<=75) {
        grade='B';
    }
    
    else  {
        grade='F';
    }
    printf("Average marks;%.2lf", average);
    printf("grade: %c\n",grade);
    getch();
}
