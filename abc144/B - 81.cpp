/*
B.M.ASHIK MMAHMUD || bmmahmud@gmail.com
B - 81 : https://atcoder.jp/contests/abc144/tasks/abc144_b
*/
#include<iostream>
using namespace std;
int main(){
int N,X=0;
cin>>N;

for(int i=1;i<10;i++){
    for(int j=1;j<10;j++){
        if(i*j == N ){
           cout<<"Yes"<<endl;
           return 0;
        }
    }
}
  cout<<"No"<<endl;
 return 0;
} // END
