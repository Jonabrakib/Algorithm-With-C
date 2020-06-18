#include <stdio.h>

char b[100] [100];
int i,j,m, n;
int c[100] [100];
int LCS_Length(char x[],char y[],int m,int n)
{


    for(i=0 ; i<m ; i++)
    {
        c[i] [0] = 0;
    }
    for(j=1 ; j<n ; j++)
    {
        c[0] [j] = 0;
    }

    for(i=1 ; i<=m ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if(x[i-1] == y[j-1])
            {
                c[i] [j] = c[i-1] [j-1]+1;
                b[i] [j] = 'c';
            }
            else if(c[i-1] [j] >= c[i] [j-1])
            {
                c[i] [j] = c[i-1] [j];
                b[i][j] = 'u';
            }
            else
            {
                c[i][j] = c[i][j-1];
                b[i][j] = 'l';
            }
        }
    }

   return c,b;
}

void Print_LCS(char b[100][100],char x[],int i,int j)
{
    if(i==0 || j==0)
    {
        return  0;
    }

    if(b[i][j] == 'c')
    {
        Print_LCS(b,x,i-1,j-1);
        printf("%c\t",x[i-1]);

    }
    else if(b[i][j] == 'u')
    {
        Print_LCS(b,x,i-1,j);
    }
    else
    {
        Print_LCS(b,x,i,j-1);
    }

}


int main()
{

    char x[100];
    char y[100];



    printf("Enter the first array's element : ");
    scanf("%s",x);

    printf("Enter the second array's element : ");
    scanf("%s",y);

    m = strlen(x);
    n = strlen(y);

    LCS_Length(x,y,m,n);
    Print_LCS(b,x,m,n);
}
