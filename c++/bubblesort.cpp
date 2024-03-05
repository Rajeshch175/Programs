#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int a[],int size){
    for(int i=1;i<size;i++){
        int didSwap=0;
        for(int j=0;j<size-i;j++){
            if(a[j]>a[j+1]){
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                didSwap=1;
            }
        }
        if(didSwap==0){
            break;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    BubbleSort(a,n);
    cout<<"sorted array \n";

    for(int i=0;i<n;i++){
        cout<<a[i]<<" "; 
    }
}