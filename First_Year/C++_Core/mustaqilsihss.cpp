#include <iostream>
using namespace std;
int main(){
	int n,max,min,s;
	int arr[n];
	cout<<"massivga nechta element yozasiz >>> ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"arr["<<i<<"] = ";
		cin>>arr[i];
		s+=arr[i];
	}
	max=arr[0];min=arr[0];
	for(int i=0;i<n;i++){
		if(max<arr[i]) max = arr[i];
		if(min>arr[i]) min=arr[i];
	}
	for(int i=1;i<=n;i++){
		cout<<"arr["<<i<<"] = "<<arr[i]<<", ";
		if(i%5==0) cout<<endl;
	}
	cout<<endl;
	cout<<"massiv yegindisi >>> "<<s<<endl;
	cout<<"eng katta son >>> "<<max<<endl;
	cout<<"eng kichik son >>> "<<min<<endl;
}
