#include <bits/stdc++.h>
#include <cmath>
#define pi 3.14
using namespace std;


string str;
int main() {
    cin>>str;
    int x=str[0]-'0';
    int y=str[2]-'0';
    double leng=sqrt((double)x*x+y*y);
    int angle;
    cin>>angle;
    double arc=acos((double)x/y);
    int rad=arc*180/pi;

    double newAngle=rad+angle;
    newAngle=(newAngle)*pi/180;
    double x1=leng*(double)cos(newAngle);
    double y1=leng*(double)sin(newAngle);
    cout<<x1<<","<<y1<<"\n";
}