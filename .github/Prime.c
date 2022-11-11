#include <stdio.h>

void main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
        if (i%2==0)
        {
            printf("Prime");
        }
        
    }
}