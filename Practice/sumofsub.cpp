#include<iostream>
using namespace std;

int main()
{
    int i;
    cin>>i;
    for(int j=0;j<i;j++)
    {
        int l,g,b=0;
        char a[l];
        cin>>l>>a;
        for(int k=0;k<l;k++)
        {
            for(int h=k;h<l;h++)
            {
                g=a[h]*a[k];
                if(g==1)
                   {
                    b++;
                   }
            }
        }
        cout<<b;
    }
}
