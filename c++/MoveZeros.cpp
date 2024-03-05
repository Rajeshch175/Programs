#include<iostream>
#include<vector>

using namespace std;

void MoveZeros(int nums[],int n){
      int nonZero=0;
      for(int i=0;i<n;i++){
        if(nums[i]!=0){
            swap(nums[i],nums[nonZero]);
            nonZero++;
        }
      }
}

void print(int nums[],int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int a[5]={0,1,0,3,2};

     print(a,5);

    MoveZeros(a,5);

    print(a,5);
}