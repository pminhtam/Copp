#include<iostream>

using namespace std;

class Vehicle{
	private: 
		double load;
		double maxLoad;
	public:
		void setLoad(double);
		void setMaxLoad(double);
		double getLoad();
		double getMaxLoad();
		void addBox(double);
};
double Vehicle::getLoad(){
	return load;
}
double Vehicle::getMaxLoad(){
	return maxLoad;
}
void Vehicle::setLoad(double load){
	load =  load;
}
void Vehicle::setMaxLoad(double maxLoad){
	Vehicle::maxLoad = maxLoad;
}
void Vehicle::addBox(double box){
	double newload=load+box;
	if(newload > maxLoad){
		cout<<"Khong them duoc"<<endl;
		return;
	}
	load = newload;
	cout<<"Vua them "<<box<<" Tong la : "<<load<<endl;
}
int main(){
	Vehicle v;
	v.setMaxLoad(10000);
	cout<<"Max load la "<<v.getMaxLoad()<<endl;
	v.addBox(200);
	v.addBox(5000);
	v.addBox(500);
	v.addBox(4000);
	v.addBox(1000);
}
