#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    int count=0;
    int total=0;

    cout<<"enter a specific range:";
    cin>>n;
     
    for(i=1;i<=n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                count=count+1;
                break;
            }
        }
        if(count==0 && i!=1){
            cout<<i<<endl;
            total++;
        }
        count=0;
    }
     cout<<"Total prime numbers:"<<total<<endl;
    

}
