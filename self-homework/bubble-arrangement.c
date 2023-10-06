//
// Created by 14806 on 2023/10/4.
//
//冒泡排序
#include<stdio.h>
#include <string.h>
int n;
int arrange(int arr[],int l,int r)
{
    if(l<r)
    {
        int i;
        for(i=0;i<n;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int mid=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=mid;
            }
        }
        arrange(arr,l,r-1);//每次冒泡排序后本次扫描的最右边的都是已经排序好了的，所以下一次只要再次缩小右边界
    }
}
int main(void)
{
    int arr[200];
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    arrange(arr,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
