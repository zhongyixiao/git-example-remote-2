//
// Created by 14806 on 2023/9/26.
//
#include<stdio.h>
int main(void)
{
    int n;
    int i,j,k;
    int sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0 && j!=i)
                sum+=j;
        }
        if(sum==i)
        {
            printf("%d its factors are ",sum);
            for(k=1;k<=i;k++)
            {
                if (i % k == 0 && k != i)
                    printf("%d ", k);
            }
            printf("\n");
        }
    }
    return 0;
}