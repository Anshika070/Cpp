#include <iostream>
using namespace std;
int main(){
     int arr[4]={1,2,3,4};
     for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
     }
     arr[2]=56;
      for(int i=0;i<4;i++){
        cout<<arr[i]<<endl;
     }
     int* p=arr;
     cout<<*p<<endl;
     cout<<*(p++)<<endl;
     cout<<*(++p)<<endl;
     cout<<*p+10<<endl;
     cout<<*(p+1)<<endl;
     cout<<*(p+2)<<endl;
     cout<<*(p+3)<<endl;
     cout<<p<<endl;
     cout<<p+1<<endl;
    return 0;
}