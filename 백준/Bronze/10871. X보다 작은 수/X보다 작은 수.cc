#include <bits/stdc++.h>

using namespace std;

int n,x,a;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>x;
    while(n--){
        cin>>a;
        if(a<x) cout<<a<<" ";
    }
    
    return 0;
}