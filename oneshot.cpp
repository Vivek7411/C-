#include<iostream>
using namespace std;


int fun(int &);
int main(){

    cout << "hello world";

    // int i;
    // float f;
    // float f2=5;
    // char c;
    // string s;

    // cout << endl;
    // cin >> i >> f >> c;
    // cout << i << f <<"\n"<< f2 << c;


    // now a call by refrence

    int k=7;

    fun(k);

    cout << endl << k;



    return 0;
}

int fun(int &a){

    cout << "\nHi i am fun\n"; 
    a=a+7;
    cout << a;

    return a;
}