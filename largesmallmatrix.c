#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,row,col,small,large;
    printf("Enter the order of the matrix:");
    scanf("%d %d",&row,&col);
    printf("\nEnter the elements of the matrix:\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    large=a[0][0];
    small=a[0][0];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]<small)
            small=a[i][j];
            if(a[i][j]>large)
            large=a[i][j];
        }
    }
    printf("\nThe smallest element in the matrix is:%d\n\n",small);
    printf("The largest element in the matrix is:%d",large);
    return 0;
}