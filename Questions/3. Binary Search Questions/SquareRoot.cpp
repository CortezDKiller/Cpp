#include<iostream>

using namespace std;

int sqrt(int n){

    int s=1,e=(n/4)+1, ans; //Every solution has e=n but it can be taken as n/4 + 1 to reduce seacrh space.

    while (s<=e){
        int mid= s+(e-s)/2;

        if (mid*mid <= n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }

    }

    return ans;

}

double sqrtDecimalPart(int n, int precision, int sqrtIntegerPart){

    double factor =1;
    double ans = sqrtIntegerPart;

    for (int i=0; i<precision; i++){
        factor=factor/10;

        cout<<"Factor : "<<factor<<endl<<endl;

        for (double j=ans; j*j<=n; j=j+factor){

            cout<<"j = "<<j<<endl;
            ans=j;
        }
    }

    return ans;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    int ansInteger = sqrt(n);
    double ansDecimal = sqrtDecimalPart(n,3,ansInteger);
    cout<<endl<<"Sqrt of "<<n<<" is : "<<ansDecimal<<endl<<endl;

}