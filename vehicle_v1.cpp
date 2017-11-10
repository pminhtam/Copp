#include<iostream>

using namespace std;

class Vehicle{
	public: 
		double load;
		double maxLoad;
		void addBox(double);
};

void Vehicle::addBox(double box){
	load+=box;
	cout<<"Vua them "<<box<<" Tong la : "<<load<<endl;
}
int main(){
	Vehicle v;
	v.load = 0;
	v.maxLoad = 1000;
	v.addBox(200);
	v.addBox(400);
}
