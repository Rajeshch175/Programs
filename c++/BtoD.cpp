#include<iostream>
#include<math.h>
using namespace std;
int main(){
int num=101;
int i=0,sum=0;
while(num!=0){
   int digit=num%10;
   if(digit==1){
   sum=sum+pow(2,i);
   
   }
   num=num/10;
   i++;
}
cout<<sum<<endl;

}