#include <iostream>
using namespace std;
int main(){
     int a= 3;
     int* p= &a;
     cout<<p<<endl;
     cout<<&a<<endl;
     cout<<*p<<endl;

     int** c=&p;
     cout<<c<<endl;
     cout<<&p<<endl;
     cout<<&c<<endl;
     cout<<*c<<endl;
     cout<<p<<endl;
     cout<<&a<<endl;
     cout<<**c<<endl;
     cout<<*p<<endl;
     cout<<a<<endl;
    return 0;
}