#include<iostream>
using namespace std;
class Square{
    private:
    int count=0;
    public:
    void showSq(int n)
    {
        count++;
        cout<<n*n;
    }
    void showSq(double n)
    {
        count++;
        cout<<n*n;
    }
    void ShowCount()
    {
        cout<<count;
    }
};
int main()
{
    Square S1;
    S1.showSq(2);
    cout<<endl;
    S1.showSq(2.5);
    cout<<endl;
    S1.showSq(2.5);
    cout<<endl;
    S1.ShowCount();
    return 0;
}
