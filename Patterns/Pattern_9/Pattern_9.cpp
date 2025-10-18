/* 
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
  cout<<"Enter the size of N"<<endl;
  int n;
  cin>>n;
  int star;
  for(int i = 0; i<=2*n-1;i++){
    star =i;
    if(i>n){
      star = 2*n-i;
    }
    for(int j = 1;j<=star;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}