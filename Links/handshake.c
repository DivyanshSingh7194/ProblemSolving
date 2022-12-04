#include<stdio.h>
void main()
{
    int n,i,j,k,sum=0,t;
    printf("Tests\n");
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    printf("Enter the number of attendees\n");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(k=j+1;k<=n;k++)
        {
            sum++;
        }
        printf("\n");
    }
    printf("%d handshakes\n",sum);
    sum=0;
    }
}
