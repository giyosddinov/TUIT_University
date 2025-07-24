/*#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char matn[100];
	cout<<"matini kiriting >>> ";
	cin.getline(matn,100);
	char ochir;
	cout<<"matnda qaysi element ochirilsin >>> ";
	cin>>ochir;
	char newmatn[100];
	int k=0;
	for(int i=0;i<100;i++){
		if(matn[i]!=ochir){
			newmatn[k++]=matn[i];
		}
	}
	cout<<"matn saralandi!"<<endl;
	cout<<newmatn<<endl;
	return 0;
}*/
/*#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char matn[100];
	cout<<"matinni kirting >>> ";
	cin.getline(matn,100);
	cout<<"matn saralandi!"<<endl;
	char newmatn[100];
	int k=0;
	for(int i=0;i<100;i++){
		if(!(matn[i]=='0'||matn[i]=='1'||matn[i]=='2'||matn[i]=='3'||matn[i]=='4'||matn[i]=='5'||matn[i]=='6'||matn[i]=='7'||matn[i]=='8'||matn[i]=='9')){
			newmatn[k++]=matn[i];
		}
	}
	cout<<"natija = "<<newmatn<<endl;
	return 0;
}*/
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string satr;
	cout<<"satirni kirting >>> ";
	getline(cin,satr);
	int uzunlik=satr.size();
	int arr[uzunlik];
	for(int i=0;i<uzunlik;i++){
		arr[i]=(int)satr[i];
	}
	int a,b;
	cout<<"intrevalni kiritng!"<<endl;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	if(a>=0&&b<uzunlik&&a<b){
		for(int i=a+1;i<=b;i++){
		cout<<arr[i]<<" ";
		}
	}
	else{
		cout<<"binday elementlar joq bgat!"<<endl;
	}	
	return 0;
}*/
/*#include <iostream>
using namespace std;

int get(int n)
{
	return n<2?:get(n-1)+get(n-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<get(n);
	return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    unsigned char A = 0x00; // MVI A, 00h
    A &= 0x12;             // ANI 12h
    A += 0x02;             // ADI 02h
    
    cout << "Akkumulyator qiymati (16-tizimda): " << hex << (int)A << endl;
    return 0;
}






















