#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m,count=0;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char,int>k={{'A',0},{'B',0},{'C',0},{'D',0},{'E',0},{'F',0},{'G',0}};
        for(int i=0;i<n;i++){
            k[s[i]]++;
        }
        for(auto it=k.begin();it!=k.end();++it){
            if(it->second < m){
                count+=std::abs(it->second-m);
            }
        }
        cout << count << endl;
    }
    return 0;
}
    