//
// Created by 14806 on 2023/10/5.
//
#include<stdio.h>
int main(void)
{
    int sum;
    scanf("%d",&sum);
    int a,b;
    int i;
    int max=0;
    for(i=2;i<=sum;i++)
    {
        int j;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
        {
            int k;
            for(k=2;k<(sum-i);k++)
            {
                if((sum-i)%k==0)
                    break;
            }
            if(k==(sum-i)  && max<i*(sum-i))
                max=i*(sum-i);
        }
    }
    printf("%d",max);
    return 0;
}