#include<stdio.h>
int main()
{
    int n;
    printf("Enter the nunber you wants its table : ");
    scanf("%d",&n);
    pirntf("Table of %d is as follow : ",n);
    for (int i=0;i<n;i++)
    {
        printf("%d x %d = %d",n,i,n*i);
    }
    return 0;
}