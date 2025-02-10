#include<iostream>

using namespace std;

class employee{

    private:
        int a,b,c;
    public:
        int d, e;

        void getData(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }

        void setData(int a, int b, int c);
};

void employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}

int main(){

    employee ishan;
    ishan.d=5;
    ishan.e=7;
    //ishan.a=4; //will throw error cause it's private.
    ishan.setData(9,2,3);
    ishan.getData(); 

    return 0;

}

