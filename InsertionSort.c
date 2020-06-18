#include<stdio.h>

int main()
{
    int a[100],k,i,j,n,key;
    printf("Enter the how many number u want to enter: \n");
    scanf("%d",&n);

    printf("Enter the value: \n");

    for(k=0;k<n;k++)
    {
        scanf("%d",&a[k]);
    }
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
    for(k=0;k<n;k++)
    {
        printf("%d",a[k]);
    }

}
