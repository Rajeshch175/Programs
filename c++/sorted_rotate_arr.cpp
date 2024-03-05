#include<iostream>
using namespace std;

bool check(int a[],int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            count++;
        }
        
    }
     if(a[0]<a[n-1]){
            count++;
        }
    return count<=1;
}

int main(){
    int arr[5]={3,4,5,1,2};
    int arr1[4]={1,1,1,1};
    cout<<check(arr,4);
}