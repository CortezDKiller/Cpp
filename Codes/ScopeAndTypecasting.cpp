#include<iostream>

using namespace std;



int main () {
int a, b, c; float d=34.4;
cout<<"Enter the value of a:"<<endl; cin>>a;
cout<<"Enter the value of b : "<<endl;
cin>>b;
c = a + b;
cout<<"The sum is "<<c<<endl; cout<<"The global c is "<<::c;
}
