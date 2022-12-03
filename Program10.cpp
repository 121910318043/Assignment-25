#include<iostream>
using namespace std;
class Area{
    public:
    void square(int s)
    {
        cout<<s*s;
    }
    void rectangle(int l,int b)
    {
        cout<<l*b;
    }
    void circle(int r)
    {
        cout<<3.14*r*r;
    }
};
int main()
{
    Area A1;
    A1.square(5);
    cout<<endl;
    A1.rectangle(3,2);
    cout<<endl;
    A1.circle(4);
    cout<<endl;
    return 0;
}