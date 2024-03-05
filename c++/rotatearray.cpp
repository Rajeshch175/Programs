#include<iostream>
#include<vector>

using namespace std;

void rotatearray(vector<int>&v,int k){
    vector<int>temp(v.size());
    for(int i=0;i<v.size();i++){
        temp[(i+k)%v.size()]=v[i];
    }
    v=temp;

}

void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int>v={1,7,9,11,13};
    // v.push_back(1);
    // v.push_back(7);
    // v.push_back(9);
    // v.push_back(11);
    // v.push_back(13);

    int k=3;
    print(v);
    rotatearray(v,k);
    print(v);


}