#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        int m;
        cin >> m;
        vector<string>x(m);
        for(int i=0;i<m;i++) cin >> x[i];
        for(int i=0;i<m;i++){
            if(x[i].size()!=n){
                cout << "NO
";
                continue;
            }else{
                  map<int,char>vx;
                  map<char,int>xv;
                  bool flag = true;
                  for(int j=0;j<n;j++){
                    if(vx.find(v[j])==vx.end() && xv.find(x[i][j]) == xv.end()){
                        vx[v[j]]=x[i][j];
                        xv[x[i][j]]=v[j];
                    }else if(vx[v[j]]!=x[i][j] || xv[x[i][j]]!=v[j]) {
                        flag = false;
                        break;
                    }
                }
                if(flag) cout << "YES
";
                else cout << "NO
";
            }
        }
    }
    return 0;
}