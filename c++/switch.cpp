#include<iostream>
using namespace std;

int main(){

    int amount=1330;
    int num=1;
    int ans;
    int bal;

    switch(num){

        case 1: cout<< (ans=amount/100) <<endl;
                cout<<"100 rs notes" << ans <<endl;
                cout<< (bal=(amount-ans *100)) <<endl;
               
        case 2: cout<<(ans=bal/20) <<endl;
                cout<<"20 rs notes" << ans <<endl;
                cout<<(bal=(bal-ans*20)) <<endl;
        
        case 3: cout<<(ans=bal/10) <<endl;
                cout<<"10 rs notes"<<ans <<endl;
                

    }
}