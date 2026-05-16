#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long x, a,b,c;
        scanf("%lld %lld %lld %lld",&x,&a,&b,&c);

        if(x==0){
            printf("0\n");
            continue;
        }
        long long product=a*b*c;
        if(product!=0 && x%product==0){
            printf("%lld\n",x/product);
        }
        else{
            printf("-1\n");
        }


    }
    
    return 0;
}