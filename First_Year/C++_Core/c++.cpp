#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int binar(int arr[],int N,int top);
void sarala(int arr[],int N);
int main(){
	int a;
	srand(time(NULL));
	cout<<"masiv ga nechta element yozoqchisz >>> ";
	cin>>a;int arr[a];
	for(int i=0;i<a;i++){
		arr[i]=rand()%100;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sarala(arr,a);
	for(int i=0;i<a;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int top;
	cout<<"quyadagi massivdan qaysi birini binar seach qilib topay >>> ";
	cin>>top;
	cout<<binar(arr,a,top)<<"-urinishta topildi";
	cout<<endl;
	return 0;
}
int binar(int arr[],int N,int top){
	int left=0,right=N-1,avg;
	while(left<=right){
		avg+=1;
		int orta = (left+right)/2;
		if(arr[orta]==top){
			return avg; 
		}
		if(arr[orta]<top){
			orta = left-1;
		}
		else{
			orta=right-1;
		}
	}
	return -1;
}
void sarala(int arr[],int N){
	for(int i=0;i<N-1;i++){
		for(int j=0;j<N-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
