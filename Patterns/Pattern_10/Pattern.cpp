// 1 
// 0 1
// 1 0 1 
// 0 1 0 1
// 1 0 1 0 1
#include<bits/stdc++.h>
using namespace std;

int main(){
  cout<<"Enter the size of N";
  int n;
  cin>>n;
  for(int i = 0; i<n; i++){
    if(i%2){
      for(int j = 0; j<=i; j++){
        if(j%2){
          cout<<"1";
        }else{
          cout<<"0";
        } 
      }
    
    }else{
       for(int j = 0; j<=i; j++){
        if(j%2){
          cout<<"0";
        }else{
          cout<<"1";
        } 
      }
    }
    cout<<endl;  
  }
}
