//value after swapping using thIrd variaBLE:


#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter value number for x and y");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf ("\n Value after swapping : %d",x);
    printf("\n Value of y after swapping: %d",y);
    return 0;
}
