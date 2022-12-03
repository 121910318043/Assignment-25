#include<iostream>
using namespace std;
class Rectangle{
    public:
    void Area(int l,int b)
    {
        cout<<l*b;
    }
};
int main()
{
    Rectangle R1;
    R1.Area(2,3);
    return 0;
}