#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int m=n;

    int ans=0;
    int rem;
    int i=0;

    while(n>0){
        rem=n%2;
        ans= rem * pow(10,i) + ans;
        n=n/2;
        i++;
    }
    
    cout<<ans<<endl;

    //2nd Approach

    i=0, ans=0;

    cout<<"m = "<<m<<endl;
    cout<<"i = "<<i<<endl;
    cout<<"ans = "<<ans<<endl;

    while(m>0){
        int bit=m&1;
        ans= (bit * pow(10,i)) + ans;
        m= m>>1;
        i++;

    }

    cout<<ans<<endl;


}