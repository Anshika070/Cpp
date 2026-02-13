#include <iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
double sum(double a, double b){
    return a*b;
}
int main(){
     cout<<"Sum of 3 and 4 is: "<<sum(3,4)<<endl;
     cout<<"Sum of 3.5 and 4.5 is: "<<sum(3.5,4.5)<<endl;
    return 0;
}