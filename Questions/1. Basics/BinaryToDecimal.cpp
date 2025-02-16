#include<iostream>


using namespace std;

int main(){

    int n;

    cout<<"Enter the Binary representation: ";
    cin>>n;

    int ans=0,i=0,rem = 0;

    cout<<ans<<","<<i<<","<<rem<<endl;

    while(n>0){
        rem=n%10;
        ans=ans+ ( pow(2,i)*rem );
        n=n/10;
        i++;

    }

    cout<<ans<<endl;
}