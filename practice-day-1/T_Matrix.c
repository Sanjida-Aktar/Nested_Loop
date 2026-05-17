#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    int primarys_sum= 0 , secondary_sum=0; 
    for(int i=0; i<n; i++){
        primarys_sum+=a[i][i];
        secondary_sum+=a[i][n-1-i];
    }
    printf("%d", abs(primarys_sum-secondary_sum));
    return 0;
}