#include<stdio.h>
int main()
{
    int n=4,i,j,k,l=0,l2=0;
    for(i=1;i<=n;i++,l++)
    {
        {
            for(j=1;j<=n;j++)
            {
                if(j>=n-l+1)
                    printf("  ");
                else printf("%c ",64+j);
            }
            for(j=n-1;j>=1;j--)
            {
                if(j>=n-l+1)
                    printf("  ");
                else printf("%c ",64+j);
            }
        }
        printf("\n");
    }

    for(i=1;i<n;i++,l2++)
    {
        {
            for(j=1;j<=n;j++)
            {
                if(j<=n-l2+1)
                    printf("  ");
                else printf("%c ",64+j);
            }
            for(j=n-1;j>=1;j--)
            {
                if(j>=n-l2+1)
                    printf("  ");
                else printf("%c ",64+j);
            }
        }
        printf("\n");
    }
}


