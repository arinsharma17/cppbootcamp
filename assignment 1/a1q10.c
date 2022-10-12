#include<stdio.h>
int main()
{ 
    int d,m,y;
    printf("Enter the date: ");
    scanf("%d/%d/%d",&d,&m,&y);
    if(d>31 || d<1)
    {
        printf("Invalid date");
    }
    else if(m<1 || m>12)
    {
        printf("Invalid date");
    }
    else if((m==4 || m==6 || m==9 || m==11 )&& ( d==31))
    {
        printf("Invalid date");
    }
    else if (m==2 && d>28)  /*here code of leap year can be written as days may vary between 27 and 28, however wasn't mentiond abot it int question*/ 
    {
        printf("Invalid date");
    }
    else
    {
      printf("Day - %d, Month - %d, Year - %d",d,m,y);
    }
    return 0; 
}