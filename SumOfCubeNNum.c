#include<stdio.h>
int main()
{
    int sum=0,n,i;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
    }
    printf("%d",sum);
}



