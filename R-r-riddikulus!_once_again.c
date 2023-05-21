#include<stdio.h>

int main(){

    int n,k;

    scanf("%d%d",&n,&k);

    int arr[n];

    for(int i = 0 ; i < n ; i++){

        scanf("%d",&arr[i]);

    }

    for(int i = k ; i < n ; i++){

        printf("%d ",arr[i]);

    }

    for(int i = 0 ; i < k ; i++){

        printf("%d ",arr[i]);

    }

}