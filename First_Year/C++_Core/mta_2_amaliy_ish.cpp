/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void sortt(int arr[],int N);
bool binar_seach(int arr[], int N,int top,int &sch);
int main(){
	int N;
	cout<<"masivning elementlar sonini kiriting >> ";
	cin>>N;
	int arr[N];
	cout<<"masiv elementlari: ";
	for(int i=0;i<N;i++){
		arr[i]=rand()%100;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sortt(arr,N);
	cout<<"saralangan amsiv elementlari: ";
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int top;
	cout<<"qidirmoqchi bolgan elementni kiriitng >> ";
	cin>>top;
	int sch=0;
	if(binar_seach(arr,N,top,sch)){
		cout<<top<<" element topildi !\n";
		cout<<sch<<"-marta tsikl ishladi\n";
	}
	else{
		cout<<top<<" element topilmadi !\n";
		cout<<sch<<"-,arta tsikil sihladi\n";
	}
	return 0;
}
void sortt(int arr[],int N){
	for(int i=0;i<N-1;i++){
		for(int j=0;j<N-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
bool binar_seach(int arr[],int N,int top,int &sch){
	int chap=0,on=N-1;
	while(chap<=on){
		sch++;
		int qadam=chap+(on-chap)/2;
		if(arr[qadam]==top){
			return true;
		}
		else if(arr[qadam]<top){
			chap=qadam-1;
		}
		else{
			on=qadam+1;
		}
	}
	return false;
}*/
//3-topshiriq
#include <iostream>
#include <string>
using namespace std;
void sortt(string name_arr[],int N,int &a);
int main(){
	int N;
	cout<<"nechat Mers avtomabil haydovchilari bor?>>";
	cin>>N;
	cin.ignore();
	string arr[N];
	for(int i=0;i<N;i++){
		cout<<i+1<<"-haydovchi >>> ";
		getline(cin,arr[i]);
	}
	int a=0;
	sortt(arr,N,a);
	cout<<"saralangan massiv!"<<endl;
	for(int i=0;i<N;i++){
		cout<<arr[i]<<endl;
	}
	cout<<"almashitirishlar soni >>> "<<a;
	return 0;
}
void sortt(string name_arr[],int N,int &a){
	for(int i=0;i<N-1;i++){
		for(int j=0;j<N-i-1;j++){
			if(name_arr[j]>name_arr[j+1]){
				swap(name_arr[j],name_arr[j+1]);
				a++;
			}
		}
	}
}
