#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int x) 
{
    long long answer=0;
    int tmp=x;
    while(tmp>0)
    {
        answer=answer*10+tmp%10;
        tmp=tmp/10;
    }
    if(x==answer)
    {
        return true;
    }
    else
    {
        return false;
    }
}
