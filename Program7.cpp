#include<iostream>
using namespace std;
class Greatest{
    private:
    int a,b,c;
    public:
    void Enter3Num(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    void ShowGreatest()
    {
        if(a>b && a>c)
        {
            cout<<a;
        }else if(b>c)
        {
            cout<<b;
        }else 
        {
            cout<<c;
        }
    }
};
int main()
{
    Greatest G1;
    G1.Enter3Num(23,12,42);
    G1.ShowGreatest();
    return 0;
}