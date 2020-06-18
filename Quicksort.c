#include<stdio.h>
int p;

void QuickSort(int array[],int left,int right)
{
    if(left<right)
        {
            p=partition(array,left,right);
            QuickSort(array,left,p-1);
            QuickSort(array,p+1,right);
        }
}
int partition(int array[],int left,int right)
{
     p = array[left];

    while(left != right)
    {
        if(p == array[left])
        {
            if(array[right] >= p)
            {
                right--;
            }
            else if(array[right] < p)
            {
                Swap(&array[left],&array[right]);
                p = array[right];
                left++;
            }
        }
        else if(p == array[right])
        {
            if(array[left] <= p)
            {
                left++;
            }
            else if(array[left] > p)
            {
                Swap(&array[left],&array[right]);
                p = array[left];
                right--;
            }
        }
    }

    return left;
}
void Swap(int *a, int *b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}
void display(int array[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d \n",array[i]);
    }
}

int main()
{
    int array[100],n,i,left,right;
    printf("Enter the array size: \n");
    scanf("%d",&n);
    printf("Enter element: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
    left=0;
    right=n-1;
    QuickSort(array,left,right);
    display(array,n);
}

