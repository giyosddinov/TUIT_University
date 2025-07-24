/*#include <iostream>
#include <list>
using namespace std;

int main() {
    int N;
    list<int> arr;
    cout << "Listga nechta element yozasiz >>>> ";
    cin >> N;
    int a;
    for (int i = 0; i < N; i++) {
        cout << i + 1 << "-elementni kiriting >>> ";
        cin >> a;
        arr.push_back(a);
    }
    auto it = arr.begin();
    bool del = false; 
    while (it != arr.end()) {
        if (del) {
            it = arr.erase(it);
        } else {
            ++it; 
        }
        del = !del;
    }
    cout << "List saralandi!\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}*/
#include <iostream>
#include <string>
using namespace std;
struct talaba{
	string fi;
	int id;
	talaba* next;
};
talaba* bosh = NULL;
void talaba_qosh(string fi,int id){
	talaba* yengi = new talaba;
	yengi->fi=fi;
	yengi->id=id;
	yengi->next = NULL;
	talaba* a = bosh;
	if(bosh == NULL){
		bosh = yengi;
		return;
	}
	while(a->next!=NULL){
		a = a->next;
	}
	a->next=yengi;
}
void print(){
	talaba* a = bosh;
	while(a!=NULL){
		cout<<"F.I.SH: "<<a->fi<<", ID: "<<a->id<<endl;
		a = a->next;
	}
}
int main(){
	talaba_qosh("javoxir",12);
	talaba_qosh("muxammadali",15);
	print();
	return 0;
}



