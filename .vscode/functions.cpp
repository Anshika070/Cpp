#include <iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
     cout<<sum(5,6)<<endl;
     int num1;
     int num2;
     cin>>num1;
     cin>>num2;
     cout<<sum(num1,num2)<<endl;
    return 0;
}