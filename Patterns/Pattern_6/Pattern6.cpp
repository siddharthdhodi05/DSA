// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2
// 1

#include<bits/stdc++.h>
using namespace std;

int main(){
  cout<<"Please enter the size of n"<<endl;
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    for(int j=1; j<=n-i; j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}