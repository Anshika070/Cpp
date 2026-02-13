#include <iostream>
#include <string>
using namespace std;
  class binary{
    string s;
    
    public:
    void read();
    void chk_bin();
    void ones_complement();
    void display();

  };
    void binary::read(void){
        cout<<"Enter a binary number: ";
        cin>>s;
    }
    void binary::chk_bin(void){
        for(int i=0;i<s.length();i++){
            if(s.at(i)!='0' && s.at(i)!='1'){
                cout<<"Incorrect binary format"<<endl;
                exit(0);
            }
        }
    }

    void binary::ones_complement(void){
        chk_bin();
        for(int i=0;i<s.length();i++){
            if(s.at(i)=='0'){
                s.at(i)='1';
            }
            else{
                s.at(i)='0';
            }
        }
    }
        void binary::display(void){
            cout<<"Binary no. is: "<<s<<endl;
        }
  
int main(){
     binary b;
     b.read();
     b.chk_bin();
      b.display();
        b.ones_complement();
        b.display();
    return 0;
}