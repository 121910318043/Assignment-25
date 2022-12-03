#include<iostream>
using namespace std;
class LargestNumber{
  private:
  int a,b,c;
  public:
  void Enter3Num(int x,int y,int z){
      a=x;
      b=y;
      c=z;
  }
  void ShowLargest()
  {
      if(a>b && a>c)
      {
          cout<<a;
  }else if(b>c)
  {
      cout<<b;
  }
  else{
      cout<<c;
  }
}};
int main()
{
    LargestNumber L1;
    L1.Enter3Num(29,13,31);
    L1.ShowLargest();
    return 0;
}