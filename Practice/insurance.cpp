#include<iostream>
using namespace std;

int main()
{
    int i;
    cin>>i;
    for(int j=0;j<i;j++)
    {
        int X,Y;
        cin>>X>>Y;
        if(Y<=X)
        {
            cout<<Y;
        }
        else
            cout<<X;
    }
}
