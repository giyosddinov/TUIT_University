#include <iostream>
#include <list>
using namespace std;
int main(){
	int N;
	cout<<"listga enchta element yozasiz >>> ";
	cin>>N;
	int a;
	list<int> arr;
	for(int i=0;i<N;i++){
		cout<<i+1<<"-elementni kiriting >>> ";
		cin>>a;
		arr.push_back(a);
	}
	cout<<"-------sizning listingiz---------\n";
	for(int son:arr){
		cout<<son<<" ";
	}
	cout<<endl;
	do{
		cout<<"ochirmoqchi bolgan element ";
		cout<<"indexni kiriting >>> ";
		cin>>a;
		if(a>N||a<0){
			cout<<"bunday index mavjud emas!";
			cout<<endl;
			continue;
		}
		else{
			break;
		}
	}while(true);
	auto it=arr.begin();
	advance(it,a);
	arr.erase(it);
	cout<<"-----------listdan elemrnt ochirildi-------------\n";
	for(int f:arr){
		cout<<f<<" ";
	}
	cout<<endl;
	return 0;
}
