/*#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"sonlarni kirting \n";cin>>a;cin>>b;cin>>c;
	int min=a;
	if(c<a) min=c;
	if(b<a) min=b;
	cout<<"kichik son >>> "<<min;
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
	int yil;
	do{
		cout<<"yilni kiritng >>> ";
		cin>>yil;
		if(yil>0) break;
		else{
			cout<<"aka yil manfiy bolmaydi!\n";
			continue;
		}
	}while(true);
	if(yil%4==0&&yil%100!=0||yil%400==0){
		cout<<yil<<" bu yil kabisa yili"<<endl;
	}
	else{
		cout<<yil<<" bu yil kabisa yili emas!";
	}
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
	float x,y;
	cout<<"x ni kriting >>> ";cin>>x;
	cout<<"y ni kriting >>> ";cin>>y;
	float x1,y1;
	if(x==y){
		x1=x;
		y1=y;
	}
	else if(x>y){
		y1=(x+y)/2;
		x1=x*y*2;
	}
	else{
		y1=(x+y)/2;
		x1=x*y*2;
	}
	cout<<x1<<" "<<y1;
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
	int oy,kun;
	cout<<"kuni kiriting >>> ";cin>>kun;
	cout<<"oyni kiriting >>> ";cin>>oy;
	if(!(kun>0&&kun<32)){
		cout<<"bunday kun yoq"<<endl;
		return main();
	}
	if(!(oy>0&&oy<13)){
		cout<<"bunday oy yoq"<<endl;
		return main();
	}
	if((oy==2&&kun==29)){
		cout<<"kabisa yili bolmagan yil sanasini kriting"<<endl;
		return main();
	}
	int oy_kuni;
	if(oy==1||oy==3||oy==5||oy==7||oy==8||oy==10||oy==12){
		oy_kuni=31;
	}
	if(oy==2||oy==4||oy==5||oy==9||oy==11){
		oy_kuni=30;
	}
	kun++;
	if(kun>oy_kuni){
		kun=1;
		oy++;
		if(oy>12){
			oy=1;
		}
	}
	cout<<kun<<"."<<oy<<endl;
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
	int N;
	cout<<"N ni kiriting >>> ";
	cin>>N;
	for(int i=1;i<N;i++){
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum+=j;
			}
		}
		if(sum==i){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
	int N;
	cout<<"N ni kiriting >> ";cin>>N;
	for(int i=0;i<N;i++){
		if(i%2==1){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}*/
/*#include <iostream>
using namespace std;
int main(){
	float sum,foyiz;
	int oy;
	cout<<"qanday miqdorda pul qoymoqchiisz (sum) >> ";
	cin>>sum;
	do{
		cout<<"foyizni kiriting >>> ";cin>>foyiz;
		if(foyiz>0&&foyiz<13){
			break;
		}
		else{
			cout<<"aka kata foyiz bera olmayman!"<<endl;
			continue;
		}
	}while(true);
	float sum1 = sum*2;
	while(sum1>sum){
		sum=sum+sum*foyiz/100;
		oy++;
	}
	cout<<oy<<" oyda "<<sum<<" so'm boldi "<<endl;
	return 0;
}*/
//9
/*#include <iostream>
using namespace std;
int main(){
	int n;
	do{
		cout<<"n ni kiriting >>> ";cin>>n;
		if(n>0) break;
		else{
			cout<<"aka musbat son kiriting!"<<endl;
			continue;
		}
	}while(true);
	int sch=0,umum=0;
	while(n!=0){
		umum+=n%10;
		n/=10;
		sch++;
	}
	cout<<sch<<" "<<umum;
	return 0;
}*/
//10
/*#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"a ni kiriting >>> ";cin>>a;
	cout<<"b ni kiriting >>> ";cin>>b;
	cout<<"EKUB("<<a<<","<<b<<")";
	while(b!=0){
		int qoldiq=a%b;
		a=b;
		b=qoldiq;
	}
	cout<<" = "<<a<<endl;
	return 0;
}*/
//13
/*#include <iostream>
using namespace std;
int main(){
	int N;
	cout<<"N ni kiriting >>>> ";
	cin>>N;
	if(N<=0){
		cout<<"aka muasbat son kiriting!"<<endl;
		return main();
	}
	int son,min,index;
	cout<<"1-soni kiriting >>> ";
	cin>>son;
	min=son;
	index=1;
	for(int i=1;i<N;i++){
		cout<<i+1<<"-soni kiriting >>> ";
		cin>>son;
		if(son<min) {
			min=son;
			index=i+1;
		}
	}
	cout<<min<<" "<<index;
	return 0;
}*/

