#include<stdio.h>
void main()
{
    int num,flag=1,dig;
    printf("Enter number\n");
    scanf("%d",&num);
    int n=num;
    while(n!=0)
    {
        dig=n%10;
        if(num%dig!=0)
        {
            flag=0;
            break;
        }
        n=n/10;
    }
    if(flag==1)
        printf("%d is Self Dividing Number",num);
    else
        printf("%d is not Self Dividing Number",num);
}
