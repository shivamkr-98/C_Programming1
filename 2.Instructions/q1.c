#include <stdio.h>
#include <math.h>
int main(){
    float s,val,val1,val2,val3;
    float a,b,c;
    printf("Enter first side of a triangle : \n");
    scanf("%f",&a);
    printf("Enter second side of a triangle : \n");
    scanf("%f",&b);
    printf("Enter third side of a triangle : \n");
    scanf("%f",&c);
    s=(a+b+c)/2;
    printf("value of s is %f",s);
    val1= s-a ;
    val2 = s-b;
    val3= s-c;
    val=s*val1*val2*val3;
    printf("Area of the triangle is %f",sqrt(val));
    return 0;

}