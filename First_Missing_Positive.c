#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int x = 1;
    while(1){
        int c= 0 ;
        for(int i = 0 ; i < n; i++){
            if(x==arr[i]){
                c++;
                break;
            }
        }
        if(c==0){
            printf("%d",x);
            break;
        }
        x++;
    }

}