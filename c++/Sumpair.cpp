#include<bits/stdc++.h>
using namespace std;

int SumPair(int a[],int n,int target){
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])<target){
                ans++;
            }
            
        }
    }
  return ans;
    
    
}

int main(){
    int n=5;
    int a[]={-1,1,2,3,1};
    int target=2;
    cout<<"The no.of Pairsis="<<SumPair(a,n,target);
    
    

}
