#include <iostream>
#include <stack>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main(){
	int N;
	cout<<"nechta elent stackga yozasiz >>> ";
	cin>>N;
	stack<int> arr;
	int a;
	for(int i=0;i<N;i++){
		a=rand()%11;
		arr.push(a);
		cout<<arr.top()<<" ";
	}
	cout<<endl;
	stack<int> arr1;int min=100,index;
	while(!arr.empty()){
		if(arr<min){
			min=arr;
		}
		else{
			index++;
		}
	}
	while()
}
