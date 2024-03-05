#include<iostream>
#include<string>

using namespace std;

int lengthstring(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void reversestring(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
       swap(name[s],name[e]);
       s++;
       e--;
    }
}

bool palindromestring(char name[],int n){

    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;

}

int main(){

char name[20];

cout<<"Enter your name"<<endl;
cin>>name;

cout<<name<<endl;

int n=lengthstring(name);

// reversestring(name,n);

// cout<<"Reverse of the string:"<<endl;
// cout<<name;

cout<<palindromestring(name,n);
    return 0;
}
