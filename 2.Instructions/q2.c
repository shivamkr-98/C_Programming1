#include <stdio.h>

int main(){
    int num,a,b,c,d,f,e,g,h,val;
    printf("enter a five digit number : \n");
    scanf("%d",&num);
    a=num%10;
    b=num/10;
    c=b%10;
    d=b/10;
    e=d%10;
    f=d/10;
    g=f%10;
    h=f/10;
    val=a*10000+c*1000+e*100+g*10+h;
    printf("Your entered five digit number : %d\n",num);
    printf("Your reversed five digit number : %d\n",val);
    return 0;
}