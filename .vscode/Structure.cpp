#include <iostream>
using namespace std;

     typedef struct employee {
        int eid;
        char favchar;
        float salary;

     } emp;
     int main(){
        // struct employee Ashish;
        emp Ashish;
        Ashish.eid=1;
        Ashish.favchar='a';
        Ashish.salary=50000;
        cout<<Ashish.salary<<endl;
        cout<<Ashish.favchar<<endl;
        cout<<Ashish.eid<<endl;
    return 0;
}