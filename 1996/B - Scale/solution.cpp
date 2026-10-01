#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<vector<char> >v(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin >> v[i][j];
        }
        vector<vector<char> >x(n/k,vector<char>(n/k));
        for(int i=0;i<n/k;i++){
            for(int j=0;j<n/k;j++){
                x[i][j]=v[i*k][j*k];
            }
        }
        for(int i=0;i<n/k;i++){
            for(int j=0;j<n/k;j++) cout << x[i][j];
            cout << endl;
        }
    }
    return 0;
}