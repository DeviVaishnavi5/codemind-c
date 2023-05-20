#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int arr[n],c=0,s=0;
        for(int i = 0 ; i < n ; i++)
        {
        
            scanf("%d",&arr[i]);
        }
        for(int i = 0 ; i < n ; i++)
        {
            s = 0;
            for(int j = i ; j < n ; j++){
                s += arr[j];
                if(s==k)
                {
                    printf("%d %d
",i+1,j+1);
                    c++;
                    break;
                }
            }
            if(s==k)
            {
                break;
            }
        }
        if(c==0){
            printf("-1
");
        }
    }
}