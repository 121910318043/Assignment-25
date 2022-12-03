#include<iostream>
using namespace std;
class Factorial{
public:
int Fact=1;
public:
int Facto(int n);
};
int Factorial::Facto(int n)
{
    while(n>1)
    {
        Fact=Fact*n;
        n--;
    }
    return Fact;
}
int main()
{
Factorial F1;
cout<<F1.Facto(3);
return 0;
}