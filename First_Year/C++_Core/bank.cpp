#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class admin{
	public:
		string ism;
		string familya;
		bool kredit_mvj;
		long double kredit_miqdor;
		string login;
		string parol;
	void royhatdan_otkaz(){
		ofstream file("file.txt");
		if(!file){
			cout<<"system eror ofstream (file)!"<<endl;
		}
		cout<<"foyidalanuvchining ismi >>> ";cin>>ism;file<<ism<<" ";
		cout<<"foyidalanuvchining familyasi >> ";cin>>familya;file>>familya<<" ";
		cout<<"foyidalanuvchining login (bank tizimi uchun) >> ";cim>>login;file<<login<<" ";
		cout<<"foyidalanuvchining paroli (bank tizimi uchun) >> ";cin>>parol;file<<parol<<" ";
		file<<"\n";
		file.close();
	}
};
int main(){
	string parol="salom1",parol1;
	string login="salom1",login1;
	int tanlov;
	cout<<"assalomu alekum\nadmin panel :(1)\tfoyidalanuvchi :(2)\n";
	cin>>tanlov;
	if(tanlov==1){
		do{
			cout<<"logini kiriting >>> ";cin>>login1;
			cout<<"parolni kiritng >>> ";cin>>parol1;
			if(parol==parol1&&login==login1) break;
			else{
				cout<<"aka patol yoki loginda hatolik mavjud!"<<endl;
				continue;
			}
		}while(true);
		admin admin1;
		tanlov=0;
		admin1.royhatdan_otkaz();
	}
	else if(tanlov==2){
		
	}
	else{
		cout<<"hali boshqa funksiyalar qolgani joq!"<<endl;
		return main();
	}
}
