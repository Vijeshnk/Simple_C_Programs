#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number:\n");
    scanf("%d",&n);
    int sum =(n+1)*(n/2);
    printf("Sum of %d Natural Numbers is : %d ",n,sum);
}