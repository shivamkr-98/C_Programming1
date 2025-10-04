#include <stdio.h>

int main(){
    float distance,metre,inch,feet,cm;
    printf("Enter Distance Between Any Of your favourite Cities (in km): ");
    scanf("%f",&distance);
    metre=distance*1000;
    cm=metre*100;
    feet=cm/30;
    inch=cm/2.54;
    printf("The Distance Between your favourite Cities in Metre is %f metre\n",metre);
    printf("The Distance Between your favourite Cities in Feet is %f feet\n",feet);
    printf("The Distance Between your favourite Cities in Inch is %f inch\n",inch);
    printf("The Distance Between your favourite Cities in Cm is %f cm\n",cm);
    return 0;
}