#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

// class DivisionbyZero: public runtime_error {
// int x;
// int y;
// public:
// DivisionbyZero(): runtime_error("the denomereatpr is zero"){};

// double Division (int x , int y){
//     if (y==0)
// throw DivisionbyZero();
// else 
// return x/y;
// }

// };

int main(){
    // DivisionbyZero C;
    // int x=2, y=0;
   try{
     throw 'a';
   }
   catch (char x){
        cout<<"exception :";
    }
    return 0;
     
}