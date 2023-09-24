//
// Created by 14806 on 2023/9/20.
//
#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int mid;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=sz-1;
    int k;
    scanf("%d",&k);
    while(left<=right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == k) {
            printf("%d", mid);
            break;
        } else if (arr[mid] > k)
            right = mid - 1;
        else
            left = mid + 1;
    }
    if(left>right)
        printf("NOT FOUND 404");
    return 0;
}
