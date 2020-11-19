#include <bits/stdc++.h>
#include <cmath>
#define pi 3.14

using namespace std;
int main() {
	int x,y;
    cin>>x>>y;
    double leng=sqrt((double)x*x+y*y);
    int angle;
    cin>>angle;
    double arc=acos((double)x/y);
    int rad=arc*180/pi;

    double newAngle=rad+angle;
    newAngle=(newAngle)*pi/180;
    cout<<cos(newAngle);
    int x1=leng*cos(newAngle);
    cout<<x1;
    
    
}