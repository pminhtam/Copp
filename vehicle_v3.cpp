#include<iostream>

using namespace std;

class Vehicle{
	private: 
		double load;
		double maxLoad;
		double kton(double);
		double ntok(double);
	public:
		void setLoad(double);
		void setMaxLoad(double);
		double getLoad();
		double getMaxLoad();
		void addBox(double);

};
double Vehicle::kton(double k){
	return k*9.8;
}
double Vehicle::ntok(double n){
	return n/9.8;
}
double Vehicle::getLoad(){
	return ntok(load);
}
double Vehicle::getMaxLoad(){
	return ntok(maxLoad);
}
void Vehicle::setLoad(double load){
	Vehicle::load =  kton(load);
}
void Vehicle::setMaxLoad(double maxLoad){
	Vehicle::maxLoad = kton(maxLoad);
}
void Vehicle::addBox(double box){
	double nbox  = kton(box);
	double newload=load+nbox;
	if(newload > maxLoad){
		cout<<"Khong them duoc"<<endl;
		return;
	}
	load = newload;
	cout<<"Vua them "<<box<<" Tong la : "<<ntok(load)<<endl;
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
