#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void sarala(string ism[],int gpa[],int a);
int main()
{
	ofstream talabalar("talabalar.txt");
	if(!talabalar.is_open()){
		cout<<"fayl ochishda xatolik bor!"<<endl;
		return 0;
	}
	int a;
	cout<<"nechta talabani royhatdan otkazasi >>> ";
	cin>>a;
	int gpa[a];
	string ism[a];
	for(int i=0;i<a;i++){
		cout<<i+1<<"-talabani ismi >> ";
		cin>>ism[i];
		cout<<"talabaning gpa bali >> ";
		cin>>gpa[i];
	}
	talabalar.close();
	sarala(ism,gpa,a);
}
void sarala(stirng ism[a\],int gpa[a])
{
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j-1]>arr[j]){
				int kosa=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=kosa;
				string pela=ism[j-1];
				ism[j]=ism[j-1];
				ism[j-1]=pela;
			}
		}
	}
}


