#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c[a],b[a],i;
    int ca=0,ba=0,res;
    for (i=0; i<a ;i++)
    {
        scanf("%d",&c[i]);
    }
    for (i=0; i<a ;i++)
    {
        scanf("%d",&b[i]);
    }
    for (i=0; i<a ;i++)
    {
        ca+=c[i];
        ba+=b[i];
    }
    res=ba-ca;
    if (res<0)
    {
        printf("0");
    }
    else
    {
        printf("%d",res);
    }
    return 0;
}