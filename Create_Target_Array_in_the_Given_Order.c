#include<stdio.h>

int main(){

    int n;

    scanf("%d",&n);

    int arr[n],i;

    for (i=0; i<n; i++){

        scanf("%d",&arr[i]);

    }

    int n1;

    scanf("%d",&n1);

    int brr[n1],j;

    for (j=0; j<n1; j++){

        scanf("%d",&brr[j]);

    }

    int res[n];

    for (i=0; i<n; i++){

        res[i]=-1;

    }

    for (i=0; i<n; i++){

        if (res[brr[i]]==-1){

            res[brr[i]]=arr[i];

        }

        else{

            int temp=res[brr[i]];

            res[brr[i]]=arr[i];

            for (j=brr[i]+1; j<n1; j++){

                int t2=res[j];

                res[j]=temp;

                temp=t2;

            }

        }

    }

    for (i=0; i<n; i++){

        printf("%d ",res[i]);

    }

    return 0;

}