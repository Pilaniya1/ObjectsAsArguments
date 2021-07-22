#include<bits/stdc++.h>
using namespace std;
class Time 
{
    int hours;
    int minutes;
    public:
    void getTime(int h,int m)
    {
        hours =h;
        minutes=m;
    }
    void putTime(void)
    {
        cout<<hours<<"hours and";
        cout<<minutes<<"minutes "<<"\n";
    }
    void sum(Time,Time);//declaration with objects as arguments
};
    void Time:: sum (Time t1,Time t2)//t1,t2 are objects
    {
        minutes=t1.minutes+t2.minutes;
        hours=minutes/60;
        minutes=minutes%60;
        hours=hours+t1.hours+t2.hours;
    }
    int main()
    {
        Time time1;
        Time time2;
        Time time3;
        time1.getTime(2,45);//get T1
        time2.getTime(3,30);//get T2

        time3.sum(time1,time2);//T3=T1+T2
        cout<<"time1 =";time1.putTime();// display T1
        cout<<"time2 =";time2.putTime();//display T2
        cout<<"time3 =";time3.putTime();//display T3
        return 0;
    }
