
#include<stdio.h>
void main()
{
    int b[10],i,n,k,sum=0;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+b[i];
    }
    k=sum/n;
    printf("%d",k);
    
}
