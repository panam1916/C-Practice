#include<iostream>
using namespace std;

int main()
{
    int i;
    cin>>i;
    for(int j=0;j<i;j++)
    {
        int N,z=0;
        string I,F;
        cin>>N;
        cin>>I>>F;
        for(int l=0;l<N;l++)
        {
            if(I[l]==0&&F[l]==0)
               {
                z++;
               }
            else
                z=0;
        }
        if(z==N)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
}
