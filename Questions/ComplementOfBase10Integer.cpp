#include<iostream>

using namespace std;

int main(){

    int n,m, ans;
    int mask=0;

    cout<<"Enter a number: ";
    cin>>n;

    m=n;

    //EDGE CASE
    if(n==0){
        ans=1;
    }
    else{
        while (m!=0){
        mask=(mask<<1) | 1;
        m=m>>1;
        }

        ans= (~n) & mask;
    }

    

    cout<< ans << endl;

}