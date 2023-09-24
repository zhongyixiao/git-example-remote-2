//
// Created by 14806 on 2023/9/20.
//
//判断素数
#include<stdio.h>
#include <math.h>

int main()
{
    int i,j,sum=0;
    for(i=101;i<=200;i+=2)//二次优化，因为偶数一定不是素数，所以只要在奇数中寻找即可
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
                break;
        }
        if(j>sqrt(i))
        {
            printf("%d ",i);
            sum++;
        }
    }
    printf("\n%d",sum);
    return 0;
}