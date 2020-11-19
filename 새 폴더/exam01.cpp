#include <iostream>
using namespace std;
int main() {
	int x1_first,y1_first,x2_first,y2_first;
	int x1_second,y1_second,x2_second,y2_second;
	
	cin>>x1_first>>y1_first>>x2_first>>y2_first;
	cin>>x1_second>>y1_second>>x2_second>>y2_second;
	
    int angle1=(y2_first-y1_first)/(x2_first-x1_first);
    int angle2=(y2_second-y1_first)/(x2_second-x1_second);
    angle1=2;
    angle2=2;
	if(angle1==angle2){
        cout<<"0"<<","<<"0";
    }else{

    }
}