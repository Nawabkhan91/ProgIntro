# include<stdio.h>
int main (void)
{
    int n=8;
    int i;
    int a=0;
    int b=1;
    int c=a+b;
    while(c<=n)
    {
        printf("%d",c);
        c=a+b;
        a=b;
        b=c;
    }
}

