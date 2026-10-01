#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m;
        cin >> n >> m;
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin >> v[i][j];
        }
        if(n==1 && m==1){
            cout << -1 << endl;
        }
        else if(n==1 && m!=1){
            for(int i=1;i<m;i++) cout << v[0][i] << " ";
            cout << v[0][0] << endl;
        }
        else if(n!=1 && m==1){
            for(int i=1;i<n;i++) cout << v[i][0] << endl;
            cout << v[0][0] << endl;
        }
        else {
            for(int i=1;i<n;i++){
                for(int j=0;j<m;j++) cout << v[i][j] << " ";
                cout << endl;
            }
            for(int j=0;j<m;j++) cout << v[0][j] << " " ;
            cout << endl;
        }
    }
    return 0;
}