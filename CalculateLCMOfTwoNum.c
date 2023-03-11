#include<stdio.h>
int main()
{
    int num1,num2,max;

    printf("Enter two Numbers ::");
    scanf("%d%d",&num1,&num2);

    max=(num1>num2)?num1:num2;  //7>9  max=9

    while(1)
    {
        if(max%num1==0 && max%num2==0) //9%7 //10%7 //63%7 && 63%9
        {
            printf("LCM of %d and %d is %d",num1,num2,max);
            break;
        }

        max++; //10  11

    }
    return 0;
}
