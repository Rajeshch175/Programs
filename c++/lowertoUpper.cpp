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
char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }else{
        char temp=ch-'A'+'a';
    }
}
char toUppercase(char ch){
    if(ch>='A' && ch<='Z'){
        return ch;
    }else{
        char temp=ch-'a'+'A';
    }
}
void uppertolower(char name[],int n){

    for(int i=0;i<n;i++){
        if(name[i]>='A' && name[i]<='Z'){
            cout<<toLowercase(name[i]);
        }else{
            cout<<name[i];
        }
    }

}
int main(){

    char name[20]="RAJESH";
    cout<<"uppercase letter:"<<toUppercase('q'); 
    int n=lengthstring(name);
    
    // uppertolower(name,n);

    // for(int i=0;i<n;i++){
    //    cout<<name[i];
    // }
    

}