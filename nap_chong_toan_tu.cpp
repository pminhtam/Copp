#include<iostream>
using namespace std;

class Box{
	public:
		double x;
		double y;
		double z;
	public:
		void operator += (float f){
			this->x = this->x +f;
			this->y = this->y +f;
			this->z = this->z +f;
			
		}
		void operator ++(){
			this->x = this->x +1;
			this->y = this->y +1;
			this->z = this->z +1;
		}
		void operator ++(int){
			this->x = this->x +1;
			this->y = this->y +1;
			this->z = this->z +1;
		}
		Box operator +(Box c){
			Box d;
//			d.x = c.x +this->x;
//			d.y = c.y +this->y;
//			d.z = c.z +this->z;
			d.x = c.x +1;
			d.y = c.y +1;
			d.z = c.z +1;
			return d;
		}
};
int main(){
	Box b;
	b.x = 10;
	b.y = 18;
	b.z = 21;
	Box a;
	b+=1.4;
	cout<<"x "<<b.x<<" y  "<<b.y<<"  y  "<<b.z<<endl;
	b++;
	cout<<"x "<<b.x<<" y  "<<b.y<<"  y  "<<b.z<<endl;
	++b;
	cout<<"x "<<b.x<<" y  "<<b.y<<"  y  "<<b.z<<endl;
	
	Box e;
	e.x = 10;
	e.y = 18;
	e.z = 21;
	a = b+e;
	cout<<"e:x "<<a.x<<" y  "<<a.y<<"  y  "<<a.z<<endl;

	
}
