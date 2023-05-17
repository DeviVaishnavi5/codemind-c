#include<stdio.h>

void sort(int *v,int n)

{

    int k,r[2004],j,t;

    for(k=0;k<n;k++)

    {

        r[k]=v[k];

    }

    for(j=0;j<n-1;j++)

    {

        for(k=0;k<n-1;k++)

        {

            if(v[k]>v[k+1])

        	{

            	t=v[k+1];

            	v[k+1]=v[k];

            	v[k]=t;

        	}

        }

    }

}

int main()

{

    int n,k,v[2004];

    scanf("%d",&n);

    for(k=0;k<n;k++)

    {

        scanf("%d",&v[k]);

    }

    sort(v,n);

    for(k=0;k<n;k++){

        printf("%d ",v[k]);

    }

}