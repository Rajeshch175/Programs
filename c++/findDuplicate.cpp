#include<iostream>
#include<vector>

using namespace std;

int Duplicate(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }

    for(int i=0;i<n;i++){
        ans=ans^i;
    }

    return ans;
    
}

int main(){
    int arr[5]={4,2,1,3,1};
    
    cout<<Duplicate(arr,5);
}