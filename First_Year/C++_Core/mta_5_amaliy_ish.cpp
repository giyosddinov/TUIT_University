#include <iostream>
#include <queue>
using namespace std;
int main(){
	queue<int> arr;
	int a,tanlov;
	do{
		cout<<"element qoshihs :1\tchiqish :2\n>>> ";
		cin>>tanlov;
		if(tanlov==1){
			cout<<arr.size()+1<<"-elementni kiriting >> ";
			cin>>a;
			arr.push(a);
			continue;
		}
		else if(tanlov==2) break;
		else cout<<"bunday buyruq mavjud emas!"<<endl;
	}while(true);
	tanlov=0;
	int siz = arr.size();
	int arr1[siz];
	while(!arr.empty()){
		a = arr.front();
		arr.pop();
		arr1[tanlov]=a;
		tanlov++;
	}
	int min = arr1[0];
	for(int i=0;i<siz;i++){
		if(min>arr1[i]) min=arr1[i];
	}
	for(int i=0;i<siz;i++){
		if(arr1[i]==min) arr.push(0);
		else arr.push(arr1[i]);
	}
	cout<<"togirlangan list >>>> ";
	while(!arr.empty()){
		cout<<arr.front()<<" ";
		arr.pop();
	}
	cout<<endl;
	return 0;
}
