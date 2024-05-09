#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int i;
    scanf("%d",&i);
    while(i--)
    {   int A,B,N;
        scanf("%d%d%d",&A,&B,&N);
        if(A==B)
            printf("-1");
        else
        {
        while(N%A!=0||N%B==0)
        N++;
        printf("%d",N);
        }
    }
}
