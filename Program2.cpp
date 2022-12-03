#include<iostream>
using namespace std;
class Time{
private:
int hour;
int minute;
int sec;
public:
void inputTime(int h,int m,int s){
hour = h;
minute = m;
sec = s;
}
void ShowTime()
{
cout<<hour<<" hr "<<minute<<" min "<<sec<<" sec ";
}
};
int main()
{
Time T1;
T1.inputTime(12,30,10);
T1.ShowTime();
return 0;
}