#include<bits/stdc++.h>
using namespace std;
int add(int n){
    return n-(n-1)/9*9;
}
int main(){
    int n;
    cin>>n;
    cout<<add(n);
}