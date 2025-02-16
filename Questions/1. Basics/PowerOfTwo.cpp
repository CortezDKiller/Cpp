#include<iostream>

using namespace std;

int main(){

    int n, ans;
    cout<<"Enter a Numebr: ";
    cin>>n;

    while (n>0){
        if (n==1){
            ans=1;
            break;
        }
        else if(n%2==0){
            ans=1;
            n=n/2;
        }
        else{
            ans=0;
            break;
        }
    }

    cout<<ans<<endl;

} 

// We can also calculate number of SET BITS. If it comes out to be one then it's in power of 2.
