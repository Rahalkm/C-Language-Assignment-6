
#include<stdio.h>
int main()
{
    int sum=0,n,i;

    printf("Enter a number :");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}


