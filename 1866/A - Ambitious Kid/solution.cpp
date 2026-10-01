#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int>v(n),b;
    for(int i=0;i<n;i++) cin >> v[i];
    for(int i=0;i<n;i++){
        if(v[i] > 0) b.push_back(v[i]);
        else b.push_back((-1)*v[i]);
    }
    cout << *min_element(b.begin(),b.end()) << endl;
    return 0;
}