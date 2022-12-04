#include<stdio.h>
void main()
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    printf("%d",((n/5)+(n/25)+(n/125)+(n/625)+(n/3125)));
}
