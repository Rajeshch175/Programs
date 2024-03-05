#include<iostream>
using namespace std;

int count(int n){
    int bit=0;
    while(n!=0){
        if(n&1){
            bit++;
        }
        n=n>>1;
    }
    return bit;

}
int bits(int a , int b){
     
     int total=count(a)+count(b);

     return total;
}

int main(){
    int a,b;

    cin>>a>>b;

    cout<<"total bits are:"<<bits(a,b)<<endl;



}
