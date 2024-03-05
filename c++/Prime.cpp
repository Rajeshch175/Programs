#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=2;
    int count=0;
    while(i<n){
        if(n%i==0){
            cout<<"not prime";
            count=+1;
            break;
        }
        i=i+1;
    }
    if(count==0){
        cout<<"prime number"<<endl;
    }
 }
    

