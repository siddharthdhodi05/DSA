// Q Print the following pattern.

// *
// * *
// * * *
// * * * *
// * * * * *

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cout<<"Please enter the size of n for printing pattern"<<endl;
  cin>>n;
  for(int i = 0; i<n; i++){
    for(int j = 0; j<=i; j++){
      cout<<"* ";
    }    
    cout<<endl;
  }
}