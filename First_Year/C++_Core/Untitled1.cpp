#include<iostream>
#include<set>
using namespace std;

int main() {
    int n,m,x;
    set<int> a;
    multiset<int> b;

    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>x;
        a.insert(x);
    }

    cin>>m;
    for(int i=0;i<m;i++) {
        cin>>x;
        b.insert(x);
    }

    for(auto it=a.begin();it!=a.end();++it) {
        int num=*it;
        bool prime=true;
        if(num<2) prime=false;
        for(int i=2;i*i<=num;i++) {
            if(num%i==0) {
                prime=false;
                break;
            }
        }
        if(prime) {
            cout<<num<<":"<<b.count(num)<<endl;
        }
    }

    set<int> combined;
    for(auto it=a.begin();it!=a.end();++it) combined.insert(*it);
    for(auto it=b.begin();it!=b.end();++it) combined.insert(*it);

    for(auto it=combined.begin();it!=combined.end();++it) {
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}

