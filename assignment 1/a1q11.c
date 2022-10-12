#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter time: ");
    scanf("%d:%d",&h,&m);
    if(h<0 || h>24 || m<0 || m>59)
    printf("Invalid time");
    else
    printf("%d Hour and %d Minute",h,m);
    return 0;
}