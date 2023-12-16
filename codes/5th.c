#include<stdio.h>

int factors(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    return c;
}
int prime_check(int c)
{
    if(c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,c,f;
    printf("Enter the number:");
    scanf("%d",&n);
    c=factors(n);
    f=prime_check(c);
    if(f==1)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is not prime");
    }
}
