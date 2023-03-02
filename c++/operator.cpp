#include<iostream>
using namespace std;

class Complex{
    private:
        int real,imag;

    public:
    Complex(){
        real=0;
        imag=0;
    }
    Complex(int a,int b){
        real=a;
        imag=b;
    }

    void display(){
        cout<<real<<"+i"<<imag;
    }

    Complex operator+(Complex b){
        Complex temp;
        temp.real=this->real+b.real;
        temp.imag=this->imag+b.imag;
        return temp;
    }

};

int main(){

    Complex a(4,5),b(5,9),c;
    c=a+b;
    c.display();

    return 0;
}