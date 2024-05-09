#include<iostream>
using namespace std;

class A{
char *arr[100];
int count;
public:
    void reverse(char *arr,int count)
    {
        for(int i=count-1;i>=0;i--)
        {
            cout<<arr[i];
        }
    }



};
int main()
{
    A a;
    char s[100];
    int c;
    cin>>s>>c;
    a.reverse(s,c);
    return 0;
}

