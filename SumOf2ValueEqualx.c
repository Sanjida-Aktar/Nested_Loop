#include<stdio.h>
int main()
{
    int n,target;
    scanf("%d",&n);
    scanf("%d",&target);
    int flag=0;
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1; i<n-1; i++){
        for(int j=i+1; j<n;j++){
            if(arr[i]+arr[j]==target){
                flag=1;
                printf("value exit\n");
            }
        }
    }
    if(flag==0){
        printf("value is not exit");
    }
    return 0;
}