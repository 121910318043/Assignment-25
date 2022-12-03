#include<iostream>
using namespace std;
class ReverseNumber{
    private:
    
    public:
    void DisplayReverse(int n)
    {   
        int rev=0;
        while(n>0)
        {
            rev=rev*10+n%10;
            n=n/10;
        }
        cout<<rev;
    }
};
int main()
{
    ReverseNumber R;
    R.DisplayReverse(99873);
    return 0;
}