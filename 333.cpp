#include<iostream>
using namespace std;

int main(){
int a,b,c;

cout<<"masukan nilai a"<<endl;
cin>>a;
cout<<"masukan nilai b"<<endl;
cin>>b;
cout<<"masukan nilai c"<<endl;
cin>>c;

if(a>b && a>c)
    cout<<"nilai terbesar adalah:"<<a<<endl;
else if(b>a && b>c)
    cout<<"nilai terbesar adalah:"<<b<<endl;
else
    cout<<"nilai terbesar adalah:"<<c<<endl;
}
