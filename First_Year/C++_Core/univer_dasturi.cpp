//cllas
//5-masala
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

