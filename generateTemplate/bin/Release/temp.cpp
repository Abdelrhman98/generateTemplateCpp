#include <bits/stdc++.h>

using namespace std;
int n, k, idx, random;

int main(){
    freopen("input.txt", "r", stdin);
   cin>>n>>k;
   string str;
    while(k--){
        if(k>0){
            str+= (char)a + random++;
        }else{
            str+= str[idx++];
        }
    }     
    cout<<str;
}