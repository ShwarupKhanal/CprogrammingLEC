#include<stdio.h>
int pattern0()
{
    int n=5;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("\t");
        }
        for(int k=i;k<=n; k++)
        {
            printf("%d\t",k);
        }
        printf("\n");
    }
}
int main()
{
    pattern0();
}