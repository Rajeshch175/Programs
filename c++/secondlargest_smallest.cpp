#include<iostream>
#include<vector>

using namespace std;

int Secondlargest(int a[],int n){
    int largest=a[0];
    int secondlargest=-1;

    for(int i=0;i<n;i++){
        if(a[i]>largest){
             secondlargest=largest;
             largest=a[i];
        }
        else if(secondlargest<largest && largest!=a[i]){
             secondlargest=a[i];
        }
        
    }
    return secondlargest;
}

int Secondsmallest(int a[],int n){
    int smallest=a[0];
    int secondsmallest=INT32_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            secondsmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]<secondsmallest && smallest!=a[i]){
            secondsmallest=a[i];
        }
    }
    return secondsmallest;
}

int main(){
    int arr[5]={1,2,3,4,5};
    cout<<Secondlargest(arr,5);
    cout<<endl;
    cout<<Secondsmallest(arr,5);


    
}