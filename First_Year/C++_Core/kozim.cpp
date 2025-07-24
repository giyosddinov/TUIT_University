#include <iostream>
using namespace std;
class compyuter
{
	public:
		~compyuter(){
			cout<<"kompyuter ishladi";
		};
};
class laptop:public compyuter{
	~laptop(){
		cout<<"laptop ishladi";
	}	
};
int main()
{
	compyuter * lenovo = new laptop;
	delete lenovo;
	return 0;
}
