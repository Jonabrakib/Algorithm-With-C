#include<stdio.h>

void MergeSort(int array[],int left,int right)
{
    int mid;
    mid=(left+right)/2;
    if(left<right)
    {
        MergeSort(array,left,mid);
        MergeSort(array,mid+1,right);
        Merge(array,left,right,mid);
    }

}

void Merge(int array[],int left,int right,int mid)
{
    int n1=(mid-left)+1;
    int n2=right-mid;

    int l[n1];
    int r[n2];
    int i,j;

    for(i=0;i<n1;i++)
    {
        l[i]=array[left+i];
    }
    for(j=0;j<n2;j++)
    {
        r[j]=array[(mid+1)+j];
    }
    i=j=0;
    int k=left;

    while(i<n1 && j<n2)
    {
        if(l[i]<=r[j])
        {
            array[k]=l[i];
            i++;
        }
        else
        {
            array[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        array[k]=l[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        array[k]=r[j];
        j++;
        k++;
    }
}

int main()
{
    int a[5]={1,6,2,3,5},left,right,mid,l;
    mid=(left+right)/2;
    left=0;
    right=4;

    MergeSort(a,left,right);

    for(l=0;l<5,l++)
    {
        printf("%d",a[l]);
    }
    return 0;
}
