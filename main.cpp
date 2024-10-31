#include <iostream>
#include <sstream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    string s_h,s_m,s_s;
    string e_h,e_m,e_s;

    int is_h=0,is_m=0,is_s=0;
    int ie_h=0,ie_m=0,ie_s=0;

    string start_time,end_time;
    cout<<"start_time:";
    cin>>start_time;
    cout<<"end_time:";
    cin>>end_time;
    cout<<"start time"<<start_time<<endl;
    cout<<"end time"<<end_time<<endl;
   
    stringstream ss_s(start_time),ss_e(end_time);

    getline(ss_s, s_h, ':');
    getline(ss_s, s_m, ':');
    getline(ss_s, s_s, ':');

    getline(ss_e, e_h, ':');
    getline(ss_e, e_m, ':');
    getline(ss_e, e_s, ':');

    is_h=stoi(s_h);
    is_m=stoi(s_m);
    is_s=stoi(s_s);

    ie_h=stoi(e_h);
    ie_m=stoi(e_m);
    ie_s=stoi(e_s);

    int carry_s=0,carry_m=0,carry_h=0;
    int sub_s=0,sub_m=0,sub_h=0;

    
    sub_s=ie_s-is_s;
    if(sub_s<0)
    {
        carry_s=1;
        sub_s=sub_s+60;
    }

    if(carry_s==1)
    {
        ie_m-=1;
    }
    
    sub_m=ie_m-is_m;
    if(sub_m<0)
    {
        carry_m=1;
        sub_m=sub_m+60;
    }

    if(carry_m==1)
    {
        ie_h-=1;
    }

    sub_h=ie_h-is_h;
    if(sub_h<0)
    {
        carry_h=1;
        sub_h+=24;
    }

    printf("%dh%dmin%ds\n",sub_h,sub_m,sub_s);
    system("pause");
    
    return 0;
}
