#include<stdio.h>
int main(){
    int num_1;
    int num_2;
    printf("Enter Number 1:");
    scanf("%d", &num_1);
    printf("Enter Number 2:");
    scanf("%d", &num_2);
    printf("The Sum of numbers is:%d \n", num_1 + num_2);
    printf("The Diffrence of numbers is:%d \n", num_1 - num_2);
    printf("The Product of numbers is:%d \n", num_1*num_2);
    printf("The Quotient of numbers is:%d \n", num_1/num_2);
    return 0;
}