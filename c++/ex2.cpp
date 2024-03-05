#include<iostream>
using namespace std;

int update(int a){
   // a=a/2;
   //a-=5;
   int ans=a*a;
   return ans; 
}

int main(){
    //int a =10;
    int a=14;
    a=update(a);
    cout<<a<<endl;
}