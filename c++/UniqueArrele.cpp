#include<iostream>
#include<vector>

using namespace std;

int unique(int a[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^a[i];
    }
    return ans;
}

int main(){
    int arr[7]={2,3,1,3,4,4,2};

    cout<<unique(arr,7);
}