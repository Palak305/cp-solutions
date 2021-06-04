#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,fsum,sum;
    fsum=sum=0;
    printf("enter n");
    scanf("%d",&n);
    int a[n];
    printf("enter elements for A");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum>fsum)
            fsum=sum;
        else if(sum<0)
            sum=0;
    }
    printf("%d",fsum);
}
