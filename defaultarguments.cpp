#include <iostream>
using namespace std;
int product(int a,int b=20){
    return a*b;
}
int main(){
     
    //  int num1;
    //  int num2;
    //  cin>>num1;
    //  cin>>num2;
     cout<<product(5,4)<<endl;
     cout<<product(5)<<endl;
    return 0;
}