#include<stdio.h>

int main()

{

    int n,d,i,k,rev=0,revk=0,num;

    scanf("%d",&n);

    k=n*n;

    num=n;

    while(n)

    {

        d=n%10;

        rev=rev*10+d;

        n/=10;

    }

    i=rev*rev;

    while(k)

    {

        d=k%10;

        revk=revk*10+d;

        k/=10;

    }

    if(num%10)

    {

    if(revk==i)

    printf("True");

    else

    printf("False");

    }

    else

    printf("False");

}