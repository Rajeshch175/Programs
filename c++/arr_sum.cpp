#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int sum=0;

    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<endl;

    for(int i=0;i<10;i++){
        sum=sum+arr[i];
    }

    cout<<"sum of array elements : "<<sum <<endl;
}