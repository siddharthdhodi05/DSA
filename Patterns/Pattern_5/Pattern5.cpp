// * * * * *
// * * * * *
// * * *
// * * 
// * 

#include<bits/stdc++.h>
using namespace std;

int main(){
  cout<<"Enter the size of n"<<endl;
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    for(int j=0; j<n-i; j++){
      cout<<"* ";
    }
    cout<<endl;
  }
}