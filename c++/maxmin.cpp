#include<iostream>
using namespace std;
int maxi;
int mini;

int main(){
    void printarray(int arr[],int n);
    void findminmax(int arr[],int n);
    int n;
    cout<< "enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        
        cin>> arr[i];
    }
    printarray(arr,n);

     for (int i=1;i<=n;i++){

        if(arr[i]>=maxi ){
            maxi=arr[i];
        }
        if(arr[i]<=mini)
        {
          mini=arr[i];
        }
     }

    cout<< "maximum element in arr:" << maxi <<endl;
    cout<< "minimum element in arr:" << mini <<endl;
 

}



void printarray(int arr[],int n){

for(int i=1;i<=n;i++){
        
        cout<< arr[i] <<" ";
    }
}


