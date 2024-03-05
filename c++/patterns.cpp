#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< "*";
        }
        cout<<endl;
    }

}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< j<<" ";
        }
        cout<<endl;
      
    }
}

void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< i<<" ";
        }
        cout<<endl;
      
    }
}

void pattern5(int n){
    for(int i=0;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
      
    }
}

void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<< j<<" ";
        }
        cout<<endl;  
    }
}

void pattern7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
      
    }
}

void pattern8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        cout<<endl;
      
    }
}

void pattern9(int n){
    //for numbers
    int space=2*(n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
       
   //for space
   for(int i=1;i<=space;i++){
       cout<<" ";
   }
   //for numbers

        for(int j=i;j>=1;j--){
            cout<<j;
        }
    cout<<endl;
    space-=2;
    }
}

void pattern10(int n){
    int start=1;
   for(int i=0;i<n;i++){
     if(i%2==0)
      start=1;
     else
      start=0;
    for(int j=0;j<i;j++){
        cout<<start;
        start=1-start;
    }
    cout<<endl;
   }
}

void pattern11(int n){
    int number=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<number<<" ";
            number=number+1;
        }
       cout<<endl;
    }
}

void pattern12(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout<< ch <<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    pattern12(n);

}