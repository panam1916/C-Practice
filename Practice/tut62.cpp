#include<iostream>

using namespace std;
class cop
{
    int a,b,c;
public:
    void getdata()
    {
        cout<<a<<endl<<b<<endl<<c;;

    }
    void setdata(int x,int y,int z)
    {
        a=x;
        b=y;
        c=z;
    }
};

int main()
{
    cop *ptr=new cop;
    ptr->setdata(1,4,6);
    ptr->getdata();
    return 0;
}
