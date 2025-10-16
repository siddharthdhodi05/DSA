// Q Print the following pattern

// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include<bits/stdc++.h>
using namespace std;

int main(){
  cout<<"please enter the size of n"<<endl;
  int n;
  cin>>n;
  for(int i=1; i<=n;i++){
    for(int j = 0; j<i; j++){
      cout<<i<<" ";
    }
  }