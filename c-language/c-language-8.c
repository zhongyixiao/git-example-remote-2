//
// Created by 14806 on 2023/9/24.
//
#include<stdio.h>
int main(void)
{
    int profile,reward;
    scanf("%d",&profile);
    if(profile<=100000)
    {
        reward=profile*0.1;
        printf("%d",reward);
    }
    else if(profile>100000 && profile<=200000)
    {
        reward=10000+(profile-100000)*0.075;
        printf("%d",reward);
    }
    else if(profile>200000 && profile<=400000)
    {
        reward=17500+(profile-200000)*0.05;
        printf("%d",reward);
    }
    else if(profile>400000 && profile<=600000)
    {
        reward=27500+(profile-400000)*0.03;
        printf("%d",reward);
    }
    else if(profile>600000 && profile<=1000000)
    {
        reward=33500+(profile-600000)*0.015;
        printf("%d",reward);
    }
    else
    {
        reward=39500+(profile-1000000)*0.01;
        printf("%d",reward);
    }
    return 0;
}