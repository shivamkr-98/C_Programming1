// #include <stdio.h>

// int main(){
//     float a,b,c,d,e,sum,percent;
//     printf("Enter Your Subject Marks Out of 100 : \n");
//     printf("Physics : ");
//     scanf("%f",&a);
//     printf("Chemistry : ");
//     scanf("%f",&b);
//     printf("Maths : ");
//     scanf("%f",&c);
//     printf("English : ");
//     scanf("%f",&d);
//     printf("Computer : ");
//     scanf("%f",&e);
//     sum=(a+b+c+d+e);
//     percent=((sum)*100)/500;
//     printf("Your Aggregate Marks is %f and Your percentage is %f",sum,percent);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);
    if (marks <= 30)
    {
        printf("fail");
    }
    else
        ;
    {
        printf("pass");
    }
    return 0;
}