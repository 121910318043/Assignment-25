#include <iostream>

using namespace std;
class Complex{
    private:
    int real;
    int img;
    public:
    void inputdata(int x, int y)
    {
        real=x;
        img=y;
    }
    void Display()
    {
        cout<<real<<"+"<<img<<"i";
    }
    Complex add(Complex C)
    {
        Complex Temp;
        Temp.real = real + C.real;
        Temp.img = img + C.img;
        return Temp;
    }
};
int main()
{
    Complex C1,C2,C3;
    C1.inputdata(2,3);
    C2.inputdata(5,4);
    cout<<endl;
    C3=C1.add(C2);
    C3.Display();
    return 0;
}