
#include<iostream>
using namespace std;

class matrix
{
    int **p;
    int d1,d2;
public:
    matrix(int x,int y);
    void get element(int i,int j,int value)
    {
        p[i][j]=value;
    }
    void put element(int i,int j)
    {
        return p[i][j];
    }
};
matrix::matrix(int x,int y)
{
    d1=x;
    d2=y;
    p=new int *[d1];
    for(int i=0;i<d1;i++)
    {
        p[i]=new int [d2];
    }
}
int main()
{
    int m,n;
    cout<<"enter size of matrix:";
    cin>>m>>n;
    matrix A(m,n);
    cout<<"enter matrix element row";
    int i,j,value;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        cin>>value;
        A.get_element(i,j,value);
    }
cout<<A.put_element(2,0);
return 0;
}
