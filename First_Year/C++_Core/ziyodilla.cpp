/*#include <iostream>
#include <string>
using namespace std;
class Market {
private:
    string nomi;
    string manzil;
    string ish_vaqti;
    double savdo_hajmi;
    int xodimlar_soni;
public:
    Market(string nomi, string manzil, string ish_vaqti, double savdo_hajmi, int xodimlar_soni)
        : nomi(nomi), manzil(manzil), ish_vaqti(ish_vaqti), savdo_hajmi(savdo_hajmi), xodimlar_soni(xodimlar_soni) {}
        
    void chiqar() const {
        cout << "Market nomi: " << nomi << endl;
        cout << "Manzil: " << manzil << endl;
        cout << "Ish vaqti: " << ish_vaqti << endl;
        cout << "Kunlik savdo hajmi: $" << savdo_hajmi << endl;
        cout << "Xodimlar soni: " << xodimlar_soni << endl;
    }
    void savdoYangilash(double yangi_savdo) {
        savdo_hajmi = yangi_savdo;
        cout << nomi << " marketining savdo hajmi yangilandi: $" << savdo_hajmi << endl;
    }
    void xodimlarYangilash(int yangi_xodimlar) {
        xodimlar_soni = yangi_xodimlar;
        cout << nomi << " marketining xodimlar soni yangilandi: " << xodimlar_soni << " ta\n";
    }
};
int main() {
    Market market1("Dilshodmarket", "Toshkent, Chilonzor", "08:00 - 22:00", 15000.50, 10);
    cout << "Dastlabki ma'lumotlar:\n";
    market1.chiqar();
    cout << "\nYangilashdan keyin:\n";
    market1.savdoYangilash(18000.75);
    market1.xodimlarYangilash(12);
    market1.chiqar();
    return 0;
}

//1-ish
#include <iostream>
#include <string>
using namespace std;
class Naushnik {
private:
    string brend;
    bool ulangan;
public:
    Naushnik(string brendNomi) : brend(brendNomi), ulangan(false) {}
    void ulash() {
        ulangan = true;
        cout << brend << " naushnik ulandi.\n";
    }
    void uzish() {
        ulangan = false;
        cout << brend << " naushnik uzildi.\n";
    }
    bool ulanganmi()const {
        return ulangan;
    }
    string getBrend()const {
        return brend;
    }
};

class Telefon {
private:
    string model;
    Naushnik* naushnik;

public:
    Telefon(string modelNomi) : model(modelNomi), naushnik(nullptr) {}

    void naushnikUlash(Naushnik& yangiNaushnik) {
        if (naushnik != nullptr) {
            cout << "Avval eski naushnikni uzing!\n";
            return;
        }
        naushnik = &yangiNaushnik;
        naushnik->ulash();
        cout << model << " telefoniga " << yangiNaushnik.getBrend() << " naushnik ulandi.\n";
    }

    void naushnikUzish() {
        if (naushnik == nullptr) {
            cout << "Hech qanday naushnik ulanmagan!\n";
            return;
        }
        naushnik->uzish();
        naushnik = nullptr;
    }

    string getModel() const {
        return model;
    }
};

int main(){
    Telefon telefon("iPhone 15");
    Naushnik airpods("AirPods Pro");
    Naushnik samsungBuds("Samsung Buds");

    telefon.naushnikUlash(airpods);
    telefon.naushnikUzish();
    telefon.naushnikUlash(samsungBuds);

    return 0;
}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class dekanat_ishlovchilar{
	public:
		string ism;
		string familya;
		string telefon;
    void input_data(){
		cout<<"talabaning ismi >>> ";cin>>ism;
		cout<<"talabaning familyasi >>> ";cin>>familya;
		cout<<"talabaning telefoni bormi?\n";
		do{
			cout<<"bor bolsa (ha) yoq bolsa (yoq) >>> ";
			cin>>telefon;
			if(telefon=="ha"||telefon=="yoq"){
				break;
			}
			else{
				cout<<"ha yoki yoq ni kiritng!";
				continue;
			}
		}while(true);	
	}
	void print_data(){
		cout<<setw(15)<<familya<<left
		<<setw(15)<<ism<<left
		<<setw(5)<<telefon<<endl;
	}
};
int main(){
	int N;
	cout<<"nechata dekanatda ishlaydigan talaba bor >>> ";
	cin>>N;
	dekanat_ishlovchilar talaba[N];
	cout<<"********talabalarni kiriting !**************\n";
	for(int i=0;i<N;i++){
		cout<<i+1<<"-talaba malumotlari\n";
		talaba[i].input_data();
	}
	cout<<"********barcha talabalar !*******************\n";
	for(int i=0;i<30;i++){
		cout<<"-";
	}
	cout<<endl;
	cout<<setw(1)<<"ism"<<left
	<<setw(15)<<"familya"<<left
	<<setw(5)<<"_tel_"<<endl;
	for(int i=0;i<N;i++){
		talaba[i].print_data();
	}
	cout<<"**********telefoni yoq talabalar!************\n";
	
	for(int i=0;i<30;i++){
		cout<<"-";
	}
	cout<<endl;
	cout<<setw(10)<<"ism"<<left
	<<setw(10)<<"familya"<<left
	<<setw(5)<<"_tel_"<<endl;
	for(int i=0;i<N;i++){
		if(talaba[i].telefon=="yoq"){
			talaba[i].print_data();
		}
	}
    return 0;
}
*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class students{
  public:
    string ism;
    string familya;
    float gpa_rating; 
  virtual void talaba_haqida()=0;
  virtual void print_data()=0;
};
class bakalavr:public students{
  public:
  void talaba_haqida() override{
    cout<<"talabaning ismi >>> ";cin>>ism;
    cout<<"talabaning familyasi >>> ";cin>>familya;
    cout<<"talabaning gpa bali >>> ";cin>>gpa_rating;
  }
  void print_data() override{
    cout<<"ism: "<<ism<<"|familya: "<<familya<<"|gpa_rating: "<<gpa_rating<<endl;
  }
};
class magistir:public students{
  public:
  void talaba_haqida() override{
    cout<<"talabaning ismi >>> ";cin>>ism;
    cout<<"talabaning familyasi >>> ";cin>>familya;
    cout<<"talabaning gpa bali >>> ";cin>>gpa_rating;
  }
  void print_data() override{
    cout<<"ism: "<<ism<<"|familya: "<<familya<<"|gpa_rating: "<<gpa_rating<<endl;
  }
};
students& find_student(students* arr[],int N){
  students* best=arr[0];
  for(int i=1;i<N;i++){
    if(arr[i]->gpa_rating>best->gpa_rating){
      best=arr[i];
    }
  }
  return *best;
}
int main(){
  int N; 
  cout<<"nechta magistr va bakalavr talabalarni royhatdan otkazasiz >>> ";
  cin>>N;
  magistir magistir_students[N];bakalavr bakalavr_students[N];
  cout<<"-----------magistir studentlarini kiritng!-----------"<<endl;
  for(int i=0;i<N;i++){
    magistir_students[i].talaba_haqida();
  }
  cout<<"-----------bakalavr studentlarini kiritng!-----------"<<endl;
  for(int i=0;i<N;i++){
    bakalavr_students[i].talaba_haqida();
  }
  cout<<"---------------barcha talabalar!-----------------------"<<endl;
  for(int i=0;i<N;i++){
    magistir_students[i].print_data();
  }
  for(int i=0;i<N;i++){
    bakalavr_students[i].print_data();
  }
  cout<<"-----------enga katta gpa bal toplagan student-----------\n\n";
  students* all_student[2*N];
  for(int i=0;i<N;i++){
    all_student[i]=&magistir_students[i];
    all_student[N+i]=&bakalavr_students[i];
  }
  students& best = find_student(all_student,2*N);
  best.print_data();
}

