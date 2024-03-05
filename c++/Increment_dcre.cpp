#include<iostream>
using namespace std;

int main(){
    // int a=1,b=2;

    /*if (++a){
        cout<< b;
    }
    else{
        cout<< ++b;
    }
    */
   /*if(a-- >0 || ++b>2){
    cout<<"stage1-inside if";
   }
   else{
    cout<<"stage2-inside else";
   }
   cout<< a << " " << b ; */

   int number=3;
   cout<< (25*(++number)) ;

   int a =1;
   int b=a++;
   int c=++a;
   cout<< b;
   cout<< c;

}