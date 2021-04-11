#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define FAST ios::sync_with_stdio(false); cin.tie(0),cout.tie(0);
//(a/b)%m =((a%m)*pow(b,m-2)%m)%m

void Solve(){
  cout<<"Hello I'm Srishti! and You??\n";
  int n;
  cin>>n;
  cout<<"Square of "<<n<<": ";
  cout<<n*n<<"\n";
  cout<<"Cube of given number is: "<<n*n*n<<"\n";
  cout<<"Thank You! :)\n";
  return;
}

int main(){
  FAST
  int T;
  cin>>T;
  while(T--){
     Solve();
  }
  return 0;
}
