#include<stdio.h>
int main()
{
   int a[19],i,j,n,temp=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
  	 scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       a[i]=a[i]*a[i];
   }
   for(i=1;i<n;i++)
   {
   	temp=a[i];
   	for(j=i-1;j>=0;j--)
   	{
   		if(temp>a[j])
   		{
   		   	a[j+1]=temp;
   		   	break;
		}
		else
		{
			a[j+1]=a[j];
		}
	}
	if(j==-1)
	{
		a[0]=temp;
	}
   }
   for(i=0;i<n;i++)
   {
   	printf("%d ",a[i]);
   }
}