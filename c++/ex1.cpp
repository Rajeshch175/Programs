#include<iostream>
using namespace std;

int main(){
    // int a=9;
//    if(a>20){
//         cout<<"love";
//     }
//     else if(a==24){
//         cout<<"lovely";
//     }
//     else{
//         cout<<"babber";
//     }

//     cout<<a;
//     } 

  /*  if(a==9){
        cout<<"NINEY";
    }
    
    if(a>0){
        cout<<"POSITVE";
    }
    else{
        cout<<"nothing";
    } */

    char ch='6';

    if (ch>='a' && ch<='z'){
        cout<<"lowercase" << endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"uppercase" << endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"number" << endl;
    }
    else{
        cout<<"special character" << endl;
    }
}