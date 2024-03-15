
#include <cmath>

#include <iostream>

using namespace std;

int main(){
	
	cout<<"enter height in inches:"<<endl;
	
	int height =0;
	
	cin>>height;
	
	cout<<"enter distance  in inches:"<<endl;
	
	int distance =0;
	
	cin>>distance;
	
	
	cout<< "enter distance in feet from person to tree :"<<endl;
	
	int distance_feet =0;
	
	cin>>distance_feet;
	
	cout<<"enter the angle of a tree:"<<endl;
double angle_1 =0;
	cin>>angle_1;
	
	int final_height = height + distance * ( tan( angle_1));
		int final_height1 = height + distance_feet * ( tan( angle_1));

cout<<final_height <<""<<"the height in inches " <<" when distance"<<distance<<""<<"is in inches"<<endl;
cout<<final_height1<<""<< "the height when distance "<< distance_feet<<""<< "is in feet"<<endl;
	
}