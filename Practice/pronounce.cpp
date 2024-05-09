#include<iostream>
using namespace std;

int main()
{
    int i,n=0;
    cin>>i;
    for(int j=0;j<i;j++)
    {
        int l,k,b=0;
        char a,e,i,o,u;
        string s;
        cin>>s>>l;
        /*for(k=0;k<l;k++)
        {
            cin>>s[k];
        }*/

        for(int k=0;k<l;k++)
        {
            if(s[k]=='a'||s[k]=='e'||s[k]=='i'||s[k]=='o'||s[k]=='u')
               n++;
               else
                b++;

        }
        if(b>4)
            cout<<"YES"<<endl<<b;
        else
            cout<<"NO"<<endl<<b;
    }
}
