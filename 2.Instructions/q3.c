#include <stdio.h>

int main (){
    int num,a,b,c,d,e,f,g,h,i,j,k,l,notes;
    printf("enter value : ");
    scanf("%d",&num);
    a=num%100;
    b=num/100;
    c=a%50;
    d=a/50;
    e=c%10;
    f=c/10;
    g=e%5;
    h=e/5;
    i=g%2;
    j=g/2;
    k=i%1;
    l=i/1;
    notes=b+d+f+h+j+l;
    printf("100 rupees notes is %d\n",b);
    printf("50 rupees notes is %d\n",d);
    printf("10 rupees notes is %d\n",f);
    printf("5 rupees notes is %d\n",h);
    printf("2 rupees notes is %d\n",j);
    printf("1 rupees notes is %d\n",l);
    printf("Tptal notes is %d\n",notes);
    return 0;
}
