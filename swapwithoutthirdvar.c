//value after swapping without using thIrd variaBLE:


#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter value number for x and y");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf ("\n Value after swapping : %d",x);
    printf("\n Value of y after swapping: %d",y);
    return 0;
}
