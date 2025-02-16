#include<iostream>

using namespace std;

int main(){

    int a=0;
    int b=1;
    int n;

    cout<<"Enter the number of elements : ";
    cin>>n;

    cout<<a<<","<<b;

    for (int i=0; i<=n-2; i++){
        int c=a+b;
        cout<<","<<c;

        a=b;
        b=c;


    }
}