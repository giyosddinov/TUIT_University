//1-topshiriq
/*#include <iostream>
using namespace std;
int main()
{
	int muddat = 2;
	long double summa = 10;
	float foyiz = 0.12;
	for(int i=0;i<muddat;i++){
		summa +=summa*foyiz;
	}
	cout<<"oradan ikki yil otdi "<<endl;
	cout<<"siz tolaydigan summa >>> "<<summa<<"mln";
}*/
//2-topshiriq
/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float x=-2.3,y = 2.7;
	float A,B;
	A = (x+y/(pow(x,2)+4))/(exp(-x-2)+sqrt(pow(x,2)+4))*(1+y);
	cout<<"natija >>> "<<A<<endl;
	B = (1+tan(A*M_PI/2))*pow(pow(x,2)+4,1/5);
	cout<<"natija 2 >>> "<<B;
	return 0;
}*/
//3-topshiriq
/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float z,x,a,b;
	cout<<"x ni kiriting >>> ";cin>>x;
	cout<<"a ni kiriting >>> ";cin>>a;
	cout<<"b ni kiriting >>> ";cin>>b;
	if(a>=0){
		z = 7*pow(x,2)-3*a*b+-5*a*b;
	}
	else{
		z = 15*a-7*b;
	}
	cout<<"natija >>> "<<z<<endl;
	return 0;
}*/
//2-jadval
/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a = M_PI/3,b =2*M_PI/3;
	float n = (b-a)/10;
	int v = 0;
	while(a<b){
		cout<<v+1<<"-qadam >>> "<<-cos(2*a)<<endl;
		v+=1;
		a+=n;
	}
}*/
//2-topshiriq
/*#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double sumA=0;
    for(int n=1;n<=20;n++){
        sumA+=3.0/pow(2*n+1,3);
    }
    double sumB=0;
    for(int R=1;R<=17;R++){
        sumB+=(R+1)/(sin(R)+exp(-R)+1);
    }
    double productC=1;
    for(int R=1; R<=16;R++) {
        double innerSum=0;
        for(int i=1;i<=6;i++){
            innerSum+=(R+3)/(pow(R,3)+3*R+pow(i,3));
        }
        productC*=innerSum;
    }
    cout<<sumA<<endl;
    cout<<sumB<<endl;
    cout<<productC<<endl;
    return 0;
}*/
//3-topshiriq
/*#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cout<<"xadlar sonini n ni kiritng >>> ";cin>>n;
	float s,x,y;
	A: cout<<"x ni qiymatini kiritng >>> ";cin>>x;
	if(!(x>=0.1&&1>=x)){
		 cout<<"[0.1;1] oraliqda son kiriting!"<<endl;
		 goto A;
	}
	float a=1;
	int i=0;
	while(i<n){
		a*=(2*i+1);
		s+=pow(-1,i)*(pow(x,2*i+1)/a);
		i+=1;
	}
	int g = 0;
	float r = 0.1;
	float v = 0.9/40.0;
	while(r<1){
		cout<<setw(18)<<"|"<<g+1<<"-had qiymati >>> "<<sin(r)<<"|";
		if(g%2==0){
			cout<<endl;
		}
		r+=v;
		g+=1;
	}
	cout<<endl;
	cout<<"qatorning yegindisi >>> "<<s;
}*/
#include <iostream>
using namespace std;
int main(){
	
}









