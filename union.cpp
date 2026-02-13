#include <iostream>
using namespace std;

union money{
    int rice;
    char car;
    float pounds;
};
int main(){
     union money m1;
     m1.rice=35;
     m1.car='a';
     cout<<m1.rice<<endl;
     cout<<m1.car<<endl;
    return 0;
}