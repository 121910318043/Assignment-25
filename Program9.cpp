#include<iostream>
using namespace std;
class Circle{
    public:
    void Area(int r)
    {
        cout<<3.14*r*r;
    }
};
int main()
{
    Circle C1;
    C1.Area(3);
    return 0;
}