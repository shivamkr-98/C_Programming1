/*Ramesh’s basic salary is input through the keyboard. His dearness  
allowance is 40% of basic salary, and house rent allowance is 20% of  
basic salary. Write a program to calculate his gross salary*/

#include <stdio.h>

int main()
{
    int salary ;
    float dearness, rent;
    printf("Enter Your Salary :\n");
    scanf("%d",&salary);
    dearness=salary*0.4;
    rent=salary*0.2;
    printf("Your Net Gross Salary Is : %f\n",salary+dearness+rent);
    printf("Your Dearness Allowance Is : %f\n",dearness);
    printf("Your House Rent Allowance Is : %f\n",rent);
    return 0;
}