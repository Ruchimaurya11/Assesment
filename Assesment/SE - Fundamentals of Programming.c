#include <stdio.h>
int main()
{
    int num1[2][2],num2[2][2],multi[2][2],i,j,k,r,s;
    int m,n;
    printf("Enter the first matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the second matrix\n");
    scanf("%d%d",&r,&s);
    if(m!=r)
    printf("\n The matrix cannot multiplied");
    else
    {
    printf("\n Enter the elements of first matrix ");
    for(i= 0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("\t%d",&num1[i][j]);
        }
        printf("\n Enetr the elements of second matrix ");
        for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                scanf("\t%d",&num2[i][j]);
            }
        printf("\n The element of first matrix is");
        for(i=0;i<m;i++)
        {
		printf("\n");
        for(j=0;j<n;j++)
        printf("\t%d",num1[i][j]);
        }
        printf("\n The element of second matrix is");
        for(i=0;i<m;i++)
        {   
	    printf("\n");
        for(j=0;j<n;j++)
        printf("\t%d",num2[i][j]);
        }
        for(i=0;i<m;i++)
        {
        printf("\n");
        for(j=0;j<n;j++)
        {
        multi[i][j]=0;
        for(k=0;k<m;k++)
        multi[i][j]=multi[i][j]+num1[i][k]*num2[k][j];
        }
    }
}
printf("\n Multiplication of two matrix is");
    for(i=0;i<m;i++)
        {
            printf("\n");
            for(j=0;j<n;j++)
            printf("\t%d",multi[i][j]);
        }
        return 0;
}

