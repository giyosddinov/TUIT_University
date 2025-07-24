#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
class admin{
	public:
		string login;
		string parol;
	void login_oyna_admin(){
		cout<<"admin panelga kirish uchun login va parolni kieiring"<<endl;
		cout<<"login >>> "; cin>>login;
		cout<<"parol >>> "; cin>>parol;
	}
};
class admin_royhat{
		public:
			string login_mijoz;
			string parol_mijoz;
			string id_mijoz;
		void mijoz_royhatdan_otkazish(){
		bool nimadir=true;
		ofstream file1("loginlar.txt");
		if(!file1){
			cout<<"sysytem (loginlar.txt) eror!";
			nimadir=false;		
		}
		ofstream file2("parollar.txt");
		if(!file1){
			cout<<"sysytem (parollar.txt) eror!";
			nimadir=false;		
		}
		ofstream file3("pasportlar.txt");
		if(!file1){
			cout<<"sysytem (pasportlar.txt) eror!";
			nimadir=false;		
		}
		cout<<"mijozning logini >>> "; cin>>login_mijoz;
		file1<<login_mijoz<<endl;
		cout<<"paroli >>>> "; cin>>parol_mijoz;
		file2<<parol_mijoz<<endl;
		cout<<"pasport id >>> ";cin>>id_mijoz;
		file3<<id_mijoz<<endl;
		file1.close();file2.close();file3.close();
	}
};
class mijoz{
	
};
int main(){
	int tanlov;
	cout<<"assalomu alekum bankimizga xush kelibsiz\nmijoz :(1)\tadminpanel :(2)\n>>>";
	cin>>tanlov;
	if(tanlov==2){
		string login1="123qwe",parol1="12344123";
		admin admin1;
		admin1.login_oyna_admin();
		if(login1!=admin1.login||parol1!=admin1.parol){
			cout<<"login yoki parolda hatolik mavjud!"<<endl;
			return main();
		}
		tanlov = 0;
		cout<<"admin paneliga muvafiqiyatli kirildi!"<<endl;
		cout<<"mijozlar royhatdan otkazish :(1)\n>>>";
		cin>>tanlov;
		if(tanlov==1){
			int son;
			admin_royhat mijozlar1[son];
			cout<<"nechta mijozni royhatdan otkazasiz >>> ";
			cin>>son;
			for(int i=0;i<son;i++){
				mijozlar1[i].mijoz_royhatdan_otkazish();
			}
		}
	}
	else if(tanlov==1){
		cout<<"xurmatli mijoz sizga qanday yordam kerak!\n";
		
	}
	else{
		cout<<"xozircha bizda boshqa xizmatlar mavjud emas!"<<endl;
		return main();
	}
}
