#include<iostream>
using namespace std;

int main()
{
    int i;
    cin>>i;
    for(int j=0;j<i;j++)
    {
        int a,b,c,d,k,h;
        cin>>a>>b>>c>>d;
        if(a>=b)
            k=a;
        else
            k=b;
        if(c>=d)
            h=c;
        else
            h=d;
        cout<<k+h<<endl;
    }
}
