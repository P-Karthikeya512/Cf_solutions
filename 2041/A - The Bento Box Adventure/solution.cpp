#include<bits/stdc++.h>
using namespace std;
 
int main(){
    vector<int>v(4);
    for(int i=0;i<4;i++) cin >> v[i];
    map<int,int>m = {{1,0},{2,0},{3,0},{4,0},{5,0}};
    for(int i :v) m[i]++;
    for(auto it:m){
        if(it.second==0) cout << it.first << endl;
    }
    return 0;
}