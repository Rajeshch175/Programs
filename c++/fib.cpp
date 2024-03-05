#include<iostream>
using namespace std;

int fibnoci(int n){

    int a=0;
    int b=1;
    int next;
    cout<< a <<" "<< b <<endl;

    for(int i=1;i<=n;i++){
        next=a+b;
        cout<<next <<endl;

        a=b;
        b=next;
    }
    return next;
}

int main(){
    int n;
    cin>>n;

    cout<<fibnoci(n);


}