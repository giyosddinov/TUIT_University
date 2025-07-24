//1.1
/*#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"a ni kirintg\n";
	cin>>a;
	int bosh,ort,oxr;
	bosh=a/100;
	ort=(a/10)%10;
	oxr=a%10;
	cout<<"natija = "<<oxr<<ort<<bosh<<endl;
	return 0;
}*/
//1.2
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int r1,r2,r3;
	cout<<"r1 = ";
	cin>>r1;
	cout<<"r2 = ";
	cin>>r2;
	cout<<"r3 = ";
	cin>>r3;
	float ru;
	ru=pow((1/r1+1/r2+1/r3),-1);
	cout<<"natija >>> "<<ru<<endl;
	return 0;
}*/
//1.3
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1,x2,x3;
	float y1,y2,y3;
	cout<<"x1 = ";
	cin>>x1;
	cout<<"y1 = ";
	cin>>y1;
	cout<<"x2 = ";
	cin>>x2;
	cout<<"y2 = ";
	cin>>y2;
	cout<<"x3 = ";
	cin>>x3;
	cout<<"y3 = ";
	cin>>y3;
	float a,b,c;
	a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	c=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	float yuza,p;
	p=(a+b+c)/2;
	yuza=p*(p-a)*(p-b)*(p-c);
	cout<<"uchburchakni yuzasi >>> "<<sqrt(yuza)<<endl;
	cout<<"uchburchakni peremetiri >>> "<<p*2<<endl;
	return 0;
}*/
//2.1
/*#include <iostream>
using namespace std;
int main()
{
	int a;
	cout<<"sonni kiritng (1-999) >>> ";
	cin>>a;
	switch(a/100){
		case 1: cout<<"yuz "; break;
		case 2: cout<<"ikki yuz "; break;
		case 3: cout<<"uch yuz "; break;
		case 4: cout<<"tort yuz "; break;
		case 5: cout<<"besh yuz "; break;
		case 6: cout<<"olti yuz "; break;
		case 7: cout<<"yetti yuz "; break;
		case 8: cout<<"sakkiz yuz "; break;
		case 9: cout<<"toqiz yuz "; break;
	}
	switch((a/10)%10){
		case 1: cout<<"on "; break;
		case 2: cout<<"yigirma "; break;
		case 3: cout<<"ottiz "; break;
		case 4: cout<<"qirq "; break;
		case 5: cout<<"ellik "; break;
		case 6: cout<<"oltmish "; break;
		case 7: cout<<"yetmish "; break;
		case 8: cout<<"sakson "; break;
		case 9: cout<<"toqson "; break;
	}
	switch(a%10){
		case 1: cout<<"bir "; break;
		case 2: cout<<"ikki "; break;
		case 3: cout<<"uch "; break;
		case 4: cout<<"tort "; break;
		case 5: cout<<"besh "; break;
		case 6: cout<<"oltti "; break;
		case 7: cout<<"yetti "; break;
		case 8: cout<<"sakkiz "; break;
		case 9: cout<<"toqqiz "; break;
	}
	return 0;
}*/
//2.2
/*#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<" ax^2+bx+c "<<endl;
	float a,b,c;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	float d;
	d=pow(b,2)-4*a*c;
	if(d<0){
		cout<<"bosh toplam"<<endl;
	}
	else if(d==0){
		float v;
		cout<<"bitta ildizi bor"<<endl;
		v=-b/(2*a);
		cout<<"ildizi >>> "<<v<<endl;
	}
	else{
		float yechim1,yechim2;
		yechim1=(-b+sqrt(d))/2*a;
		yechim2=(-b-sqrt(d))/2*a;
		cout<<"birinchi ildiz >> "<<yechim1<<endl;
		cout<<"ikkinchi ildiz >> "<<yechim2<<endl;
	}
	return main();
}*/
//2.3
/*#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int a;
	cout<<"qogoz:0 qaychi:1 tosh:2 >>> "<<endl;
	cin>>a;
	int kom;
	kom=rand()%3+0;
	if(a==kom){
		cout<<"durang!!"<<endl;
	}
	else if(a==0&&kom==2){
		cout<<"yutingiz!"<<endl;
	}
	else if(a==1&&kom==0){
		cout<<"yutingiz!"<<endl;
	}
	else if(a==2&&kom==0){
		cout<<"yutingiz!"<<endl;
	}
	else if(3<a){
		cout<<"aka (0-2) oraliqda son tanlang"<<endl;
	}
	else{
		cout<<"maglubiyat!"<<endl;
	}
	return main();
}*/
//3.1
/*#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int x=rand()%100+1;
	cout<<"kompyuter soni oylab boldi"<<endl;
	while(true){
		int a;
		cout<<"oylagan soningizni kiring >>> ";
		cin>>a;
		if(a>x){
			cout<<"katta son oyladingiz"<<endl;
			continue;
		}
		else if(a<x){
			cout<<"kichik son oyladingiz"<<endl;
			continue;
		}
		else{
			cout<<"uraa topdingiz!!"<<endl;
			break;
		}
	}
	return 0;
}*/
//3.2
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string ozbek[5]={"mashina","ayiq","qalam","suv","kuchuk"};
	string eng[5]={"car","bear","pen","water","dog"};
	int tanlov;
	cout<<"tilni tanlang ozb:1 eng:2 >>> ";
	cin>>tanlov;
	if(tanlov==1){
		string soz;
		cout<<"tarjima qilmoqchi bolgan sozingizni kirintg >>> ";
		cin>>soz;
		for(int i=0;i<5;i++){
			if(soz==ozbek[i]){
				cout<<soz<<" sozining tarjimasi >>> "<<eng[i]<<endl;
			}
		}
	}
	else if(tanlov==2){
		string soz;
		cout<<"enter the word you want to translate >>> ";
		cin>>soz;
		for(int i=0;i<5;i++){
			if(soz==eng[i]){
				cout<<"the translation of your word >>> "<<ozbek[i]<<endl;
			}
		}
	}
	else{
		cout<<"aka men bashqa tillarni bilmayman"<<endl;
	}
	return  main();
}*/
//3.3
/*#include <iostream>
using namespace std;
int main()
{
	long int a;
	cout<<"sonni kiritg >>> ";
	cin>>a;
	int count=0;
	do{
		a/=10;
		count+=1;
	}while(a>0);
	cout<<"natija >>> "<<count<<endl;
	return 0;
}*/
//4.1
/*#include <iostream>
using namespace std;
int fibonachi(int n);
int main()
{
	int a;
	cout<<"qaytarmoqchi bolgan haddi kiriting >>> ";
	cin>>a;
	cout<<fibonachi(a)<<endl;
	return main();
}
int fibonachi(int n)
{
	if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else if(n<0){
		cout<<"aka had ham manfiy boladimi";
	}
	else return fibonachi(n-1)+fibonachi(n-2);
}*/
//4.2
/*#include <iostream>
#include <iomanip>
using namespace std;
void funk(int a);
int main()
{
	int a,b;
	cout<<"a = ";
	cin>>a;
	funk(a);
	return 0;
}
void funk(int a)
{
	int** arr = new int*[a];
    for (int i = 0; i < a; i++) {
        arr[i] = new int[a];
    }
	
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cout<<"arr["<<i<<"]["<<j<<"] = ";
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			cout<<setw(4)<<arr[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(i==j||i+j==a-1){
				cout<<arr[i][j]<<" , ";
			}
		}
	}
}*/
//4.3
/*#include <iostream>
using namespace std;
int funk(int n);
int main()
{
	int n;
	cout<<"n ni kriting\n";
	cin>>n;
	cout<<"natija >>> "<<funk(n)<<endl;
}
int funk(int n)
{
	int qadam=1,yegindi;
	while(qadam<n){
		yegindi=yegindi+qadam*qadam;
		qadam+=2;
	}
	return yegindi;
}*/
//5.1
/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a,b;
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	float yegindi=0;
	int olcham=a*b;
	int arr[a][b];
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<"arr["<<i<<"]["<<j<<"] = ";
			cin>>arr[i][j];
			yegindi=yegindi+arr[i][j];
		}
	}
	float arr1[a][b];
	float orta=yegindi/olcham;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(arr[i][j]>orta){
				cout<<"katta >>> "<<arr[i][j]<<"/"<<"2 = "<<arr[i][j]/2<<endl;
				arr1[i][j]=arr[i][j]/2;
			}
			else if(arr[i][j]<orta){
				cout<<"kichik >>> "<<arr[i][j]<<"*"<<"2 = "<<arr[i][j]*2<<endl;
				arr1[i][j]=arr[i][j]*2;
			}
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<setw(4)<<arr1[i][j];
		}
		cout<<endl;
	}
	return 0;
}*/
//5.2
/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a;
	cout<<"masiv hadini kirintg >>> ";
	cin>>a;
	int msv[a];
	int msv1[a];
	for(int i=0;i<a;i++){
		cout<<"msv["<<i<<"] = ";
		cin>>msv[i];
		if(msv[i]>0) msv1[i]=msv[i]*2;
		else if(msv[i]<0){
			msv1[i]=msv[i]*(-1);
		}
		else msv1[i]=1;
	}
	cout<<"kiritgan masivingizga ozgartirishlar kiritldi"<<endl;
	for(int j=0;j<a;j++){
		cout<<setw(4)<<msv1[j];
	}
	return 0;
}*/
//6.1
/*#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"masivni elementlar sonini kirintg >>> ";
	cin>>n;
	int max=0;
	int *arr=new int[n];
	for(int i=0;i<n;i++){
		cout<<"arr["<<i<<"] >> ";
		cin>>*(arr+i);
		//int max=0;
		if(*(arr+i)%2==0&&*(arr+i)>max) max=*(arr+i);
	}
	cout<<"masivdagi eng katta juft son >>> "<<max<<endl;
	return 0;
}*/
/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n;
	cout<<"n ni kiriting >>> ";
	cin>>n;
	int b=0;
	int *arr=new int[n];
	int *arr1=new int[n/2];
	for(int i=0;i<n;i++){
		cout<<"arr["<<i<<"] >>> ";
		cin>>*(arr+i);
		if(i%2==0){
			*(arr1+b)=*(arr+i);
			b++;
		}
	}
	cout<<"masivlar saralandi !"<<endl;
	for(int i=0;i<n;i++){
		cout<<setw(4)<<*(arr+i);
	}
	cout<<endl;
	for(int j=0;j<n/2;j++){
		cout<<setw(4)<<*(arr1+j);
	}
	delete []arr;
	delete []arr1;
	return 0;
}*/
//7.1
/*#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	string matn;
	cout<<"matinni kirintg >>> ";
	getline(cin,matn);
	for(int i=0;i<matn.size();i++){
		if(isupper(matn[i])) matn[i]=tolower(matn[i]);
		else if(islower(matn[i])) matn[i]=toupper(matn[i]);
	}
	cout<<"matninigizga ozgartirish kiritildi >>> "<<matn<<endl;
	return 0;
}*/
//7.2
/*#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
	string raqam;
	string matn;
	cout<<"matinni kirintg >>> ";
	getline(cin,matn);
	for(int i=0;i<matn.size();i++){
		if(isdigit(matn[i])) raqam+=matn[i];
		else if(isupper(matn[i])) matn[i]=tolower(matn[i]);
		else if(islower(matn[i])) matn[i]=toupper(matn[i]);
	}
	cout<<"matinga ozgartirish kiritldi !!"<<endl;
	cout<<"raqamlar >>> "<<raqam<<endl;
	cout<<"harflar >>> "<<matn<<endl;
}*/
/*#include <iostream>
#include <fstream> 
using namespace std;
int main() {
    ofstream yozuvFayli("sonlar.txt");
    if (!yozuvFayli){
        cout<<"Faylni ochishda xatolik yuz berdi!"<<endl;
        return 1;
    }
    cout << "5 ta son kiriting:"<<endl;
    for (int i=0;i<5;i++){
        int son;
        cin>>son;
        yozuvFayli<<son<<endl;
    }
    yozuvFayli.close();
    ifstream oquvFayli("sonlar.txt");
    if(!oquvFayli){
        cout<<"Faylni ochishda xatolik yuz berdi!"<<endl;
        return 1;
	}
    int yigindi=0,son;
    while (oquvFayli>>son) {
        yigindi+=son;
    }
    oquvFayli.close();
    cout<<"Kiritilgan sonlarning yig'indisi >>>  "<<yigindi<<endl;
    return 0;
}
*/
/*#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream yozuvFayli("sonlar.txt");
    if (!yozuvFayli){
        cout<<"Faylni ochishda xatolik yuz berdi!"<<endl;
        return 1;
    }
    int sonlar[7];
    cout<<"7 ta son kiriting:"<<endl;
    for (int i=0;i<7;i++){
        cin>>sonlar[i];
        yozuvFayli<<sonlar[i]<<endl; 
    }
    yozuvFayli.close();
    ifstream oquvFayli("sonlar.txt");
    if(!oquvFayli){
        cout<<"Faylni ochishda xatolik yuz berdi!"<<endl;
        return 1;
    }
    for (int i=0;i<7;i++){
        oquvFayli>>sonlar[i];
    }
    oquvFayli.close(); 
    for (int i=0;i<7-1;i++){
        for (int j=0;j<7-i-1;j++){
            if (sonlar[j]>sonlar[j+1]){
                int temp = sonlar[j];
                sonlar[j]=sonlar[j+1];
                sonlar[j+1]=temp;
            }
        }
    }
    ofstream saralanganFayl("saralangan_sonlar.txt");
    if (!saralanganFayl){
        cout<<"Saralangan faylni ochishda xatolik yuz berdi!"<<endl;
        return 1;
    }
    cout << "Saralangan sonlar:" << endl;
    for (int i=0;i<7;i++){
        cout<<sonlar[i]<< " ";   
        saralanganFayl<<sonlar[i]<<endl; 
    }
    saralanganFayl.close();
    return 0;
}*/
#include <iostream>
#include <string> 
using namespace std;
class Talaba {
private:
    string ism;
    int yosh;
    double baho;
public:
    void setMalumot(string i, int y, double b) {
        ism=i;
        yosh=y;
        baho=b;
    }
    void chiqar()const {
        cout<<"Ism: "<<ism<<", Yosh: "<<yosh<<", Bahosi: "<<baho<<endl;
    }
};
int main() {
    Talaba talaba1, talaba2, talaba3;
    talaba1.setMalumot("Ali", 20, 86.5);
    talaba2.setMalumot("Vali", 21, 92.0);
    talaba3.setMalumot("Dilnoza", 19, 88.3);
    cout << "Talabalar haqida ma'lumot:" << endl;
    talaba1.chiqar();
    talaba2.chiqar();
    talaba3.chiqar();
    return 0;
}
//TUGADI 600 URA!!!!!
