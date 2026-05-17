#include<stdio.h>
int is_palindrome(char str[])
{
    int n=0;
    while(str[n]!='\0')
    {
        n++;
    }
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-1-i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[1000];
    scanf("%s",str);
    int result = is_palindrome(str);
    if(result==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}