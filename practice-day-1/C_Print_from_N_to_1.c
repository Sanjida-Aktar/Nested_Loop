#include<stdio.h>
void printnumbers(int n){
    if(n!=0){
        printf("%d ",n);
        printnumbers(n-1);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printnumbers(n);
    return 0;
}