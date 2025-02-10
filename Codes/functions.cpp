#include<iostream>

using namespace std;

/*
int sum(int a, int b){
    int c=a+b;
    return c;
}
*/


inline int product(int a, int b){
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

int sum(int, int);

int main(){
    int num1=5;
    int num2=3;
    cout<<sum(num1,num2)<<endl;

    int a=4, b=5;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    


    return 0; 

}

int sum(int a, int b){
    int c=a+b;
    return c;
}


