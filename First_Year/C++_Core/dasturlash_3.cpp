#include <iostream>
#include <queue>
#include <stack>
#include <string>
using namespace std;
int main(){
	string a;queue<string> arr;
	do{
		cout<<"element qoshish :1\tchiqish :2\n";
		cin>>a;
		if(a=="1"){
			cout<<arr.size()+1<<"-mijoz >>> ";
			cin>>a;
			arr.push(a);
		}
		else if(a=="2") break;
		else cout<<"boshqa operatorlarni bilmayman \n";
	}while(true);
	stack<string> arr1;
	while(!arr.empty()){
		arr1.push(arr.front());
		arr.pop();
	}
	cout<<"1-mijoz >>> "<<arr1.top()<<endl;
	arr1.pop();
	cout<<"2-mijoz >>> "<<arr1.top()<<endl;
	arr1.pop();
	cout<<"3-mijoz >>> "<<arr1.top()<<endl;
	arr1.pop();
	return 0;
}

