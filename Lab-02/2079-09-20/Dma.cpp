#include<iostream>
#include<cstring>
using namespace std;

int main(){
    string *p;
    p= new string;
    *p="hello";
    cout<<*p<<endl;
    int *ptr;
    ptr=new int;
    *ptr=10;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    delete ptr;
    return 0;
}