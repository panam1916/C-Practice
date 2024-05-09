#include<iostream>
using namespace std;

class x{
        int a,b,c;
    public:
        void setdata(int a,int b,int c)
        {
            this->a=a;
            this->b=b;
            this->c=c;

        }
        void getdata()
        {
            cout<<"number:"<<a<<endl<<b<<endl<<c;;
        }

};
int main()
{
    x X;
    X.setdata(3,4,5);
    X.getdata();
    return 0;
}
