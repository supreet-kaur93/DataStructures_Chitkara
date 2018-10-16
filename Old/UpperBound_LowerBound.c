#include<stdio.h>

int lowerbound(int *a,int n,int num)
{
    int l=0;
    int r=n-1;
    int mid;
    while(l<r)
    {
        mid=(l+r)/2;
        if(num<=a[mid])
            r=mid;
        else
            l=mid+1;
    }
    return l;
}
int upperbound(int *a,int n,int num)
{
    int l=0;
    int r=n-1;
    int mid;
    while(l<r)
    {
        mid=(l+r)/2;
        if(num>=a[mid])
            l=mid+1;
        else
            r=mid;
    }
    return r;
}
int main()
{
    int a[20];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d=",i);
        scanf("%d",&a[i]);
    }
    int num;
    scanf("%d",&num);
    int r=lowerbound(a,n,num);
    int r2=upperbound(a,n,num);
    printf("Lower Bound is %d and Upper Bound is %d",r,r2);
    return 0;
}
