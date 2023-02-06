#include<stdio.h>
int main()
{
    int a[15],i,n,largest;

    printf("Enter the number of elements\n");
    scanf("%d",&n);

    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    printf("The largest Element in array is:%d",largest);
    return 0;
}