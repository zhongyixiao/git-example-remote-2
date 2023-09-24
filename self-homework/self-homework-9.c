//
// Created by 14806 on 2023/9/20.
//
//输出十个数中的最大值
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int max=arr[0];
    int i;
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<sz;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("%d",max);
    return 0;
}