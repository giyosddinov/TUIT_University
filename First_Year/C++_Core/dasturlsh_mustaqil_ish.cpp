/*
Stek o'rtasidagi element o'chirib tashlansin.
Agar stek elementi toq bo'lsa, 
bitta element, aks holda ikkita element o'chirilsin.
*/
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
	stack<int> arr;
	int tanlov,a;
	do{
		cout<<"element qoshish :1\tchiqish :2\n";
		cin>>tanlov;
		if(tanlov==1){
			cout<<arr.size()+1<<"-elementni kiriting >>> ";
			cin>>a;
			arr.push(a);
		}
		else if(tanlov==2) break;
		else cout<<"boshqa operatorlar mavjud emas!\n";
	}while(true);
	queue<int> arr1;
	int siz = arr.size();
	int qadam = siz/2;
	while(!arr.empty()){
		a=arr.top();
		arr.pop();
		arr1.push(a);
	}
	for(int i=0;i<siz;i++){
		a = arr1.front();
		arr1.pop();
		if((siz%2==1&&i==qadam)||(siz%2==0&&(i==qadam||i==qadam-1))){
			continue;
		}
		arr.push(a);
	}
	cout<<"saralangan list >>> ";
	while(!arr.empty()){
		cout<<arr.top()<<" ";
		arr.pop();
	}
	cout<<endl;
	return 0;
}

