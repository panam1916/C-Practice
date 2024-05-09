#include<iostream>
using namespace std;

class Student{
protected:
    int roll;
public:
    void setnumber(int a)
    {
        roll=a;
    }
    void show()
    {
        cout<<roll;
    }
};
class Test:virtual public Student
{
protected:
    int Maths;
    int Physics;
public:
    void setmarks(int m1,int m2)
    {
        Maths=m1;
        Physics=m2;
    }
    void display()
    {
        cout<<Maths<<Physics;
    }

};
class Sport:virtual public Student
{
protected:
    int score;
public:
    void setscore(int sc)
    {
        score=sc;
    }
    void showsc()
    {
        cout<<score;
    }
};


class Result:public Test,public Sport
{
protected:
    int total;
public:
    void settotal()
    {
        total=Maths+Physics+score;
        cout<<total;
    }

};

int main()
{
    Result r;
    r.setnumber(21);
    r.setmarks(73,71);
    r.setscore(70);
    r.settotal();
    return 0;

}
