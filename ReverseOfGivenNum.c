#include<stdio.h>

int main()
{
    int rev=0,n,rem;

    printf("Enter any one Number");
    scanf("%d",&n);

    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    printf("Reverse of this Number is : %d",rev);
}
