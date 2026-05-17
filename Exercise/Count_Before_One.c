#include<stdio.h>

int count_before_one(int arr[], int n){
    int count=0;
    for(int i=1; i<=n; i++){
        if(arr[i]==1){
            break;
        }
        count++;
    }
    return count;
}

    int main()
    {
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=1; i<=n; i++){
       scanf("%d",&A[i]);
    }
    int r=count_before_one(A,n);
    printf("%d",r);
    return 0;
}