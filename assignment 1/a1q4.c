#include<stdio.h>
int main()
{
    float p=3.14,r;
    printf("Enter the radius: ");
    scanf("%f",&r);
    printf("Area of circle is %0.3f having the radius %0.3f",p*r*r,r);
    return 0;
}