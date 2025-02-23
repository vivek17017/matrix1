#include<stdio.h>
/*
int main1()
{
    int a[3][3],b[3][3];
    printf("Enter elements of first 3x3 matrices\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second 3x3 matrices\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of two matrices will be\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
}


int main2()
{
    int a[3][3],b[3][3];
    printf("Enter elements of first 3x3 matrices\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of second 3x3 matrices\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum=a[i][j]*b[j][i]+sum;
        }
        c[i][i]=sum;

    }
    for(int i=0;i<3;i++)
    {
        int k=1;
        if(i==2)
        k=2;
        int sum=0;
        for(int j=2;j>=0;j--)
        {
            sum=sum+a[i][j]*b[j][k-i];
        }
        c[i][k-i]=sum;
    }
    for(int i=2;i>=0;i--)
    {
        int k=1;
        if(i<2)
        k+=1;
        int sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+a[i][j]*b[j][k];
        }
        c[i][k]=sum;
    }
    printf("product of two matrices will be\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
}
int main3()
{
    int m,n;
    printf("Enter order of matrix\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter %d elements of matrix\n",m*n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    int b[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            b[i][j]=a[j][i];
        }
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
        
    }
}
void update_Score_board(int p1,int p2,int result,int score_board[])
{
    score_board[p1][p2]=result
}
void f4()
{
    int score_board[4][4]={0};
}
int main()
{

}

*/

int main1()
{
    int a[3][3],b[3][3];
    printf("Enter elements of 1st matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("sum of two matrices will be\n");
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                printf("%d ",a[i][j]+b[i][j]);
            }
            printf("\n");
        }
    }
}



int main()
{
    int a[3][3],b[3][3],c[3][3];
    printf("Enter elements of 1st matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        int sum=0,j;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j]*b[j][i];
        }
        c[i][i]=sum;
    }
    for(int i=2,k=1;i>0;i--)
    {
        
        int sum=0,j;
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j]*b[j][k];
        }
        c[i][k]=sum;
        if(k==1)
            {
                k=0;
                i++;
            }
    }
    for(int i=0,k=2,h=0;h<3;i++,h++)
    {
        int sum=0,j;
        for(j=2;j>=0;j--)
        {
            sum=sum+a[i][j]*b[j][k];
        }
        c[i][k]=sum;
        if(i==1)
        {
            i=-1;
            k=1;
        }
    }
    printf("product of two matrices will be\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    



}


