#include<iostream>
using namespace std;

class smartgeyser{
	public:
		void switchon()
		{
			cout <<"smart geyser is switched on"<<endl;
		}
	
};
class envisensor: public smartgeyser{
	public:
		void controlenvironment()
		{
			cout<<"sensor controling temprature and humidity"<<endl;
		}
};
class waterheater: public smartgeyser{
	public:
		void heatwater()
		{
			cout<<"The heater heating the water"<<endl;
		}
};
class homeowner{
	public:
		void getoutofbed()
		{
			cout<<"gets out of bed"<<endl;
		}
};

