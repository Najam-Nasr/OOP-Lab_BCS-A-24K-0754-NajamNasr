#include<iostream>
using namespace std;

class PropertyDeed{
	int *ownerid;
	public:
		PropertyDeed(){
			ownerid=new int;
			*ownerid=5;
		}
		PropertyDeed(const PropertyDeed&other,bool shallow){
			if (shallow){
				this->ownerid=other.ownerid;
			}
			else
			{
				this->ownerid=new int(*other.ownerid);
			}
		}
		PropertyDeed(const PropertyDeed&other){
			ownerid=new int(*other.ownerid);
		}
		void setOwnerId(int id){
			*ownerid=id;
		}
		void display(){
			cout<<"Owner id is "<<*ownerid<<endl;
		}
		~PropertyDeed(){
			delete ownerid;
		}
};
int main(){
	PropertyDeed d1;
	cout<<"For Object d1 :"<<endl;
	d1.display();
	PropertyDeed d2(d1,true);		//shallow copy
	PropertyDeed d3(d1);       		//deep copy
	d1.setOwnerId(4);
	
	cout<<"After Modification"<<endl;
		cout<<"For Object d1 :"<<endl;
	d1.display();
		cout<<"For Object d2 :"<<endl;
	d2.display();
		cout<<"For Object d3 :"<<endl;
	d3.display();
	
}
