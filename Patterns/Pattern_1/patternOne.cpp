//  Q Print the following pattern:

//   * * * *
//   * * * *
//   * * * *
//   * * * *

#include <bits/stdc++.h>
using namespace std;

int main(){
  cout<<"Please enter the size of pattern in terms of row and columns"<<endl;
  int n; 
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    for(int j=0; j<n; j++) cout<<"* ";
    cout<<endl;
  } 
}