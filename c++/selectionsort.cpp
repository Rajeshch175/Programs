#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[],int size){
    for(int i=0;i<size;i++){
        int min=i;
        for(int j=i+1;j<size;j++){
            if(a[j]<a[min])
              min=j;
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    SelectionSort(a,n);
    cout<<"sorted array: \n";
   for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
   }

}