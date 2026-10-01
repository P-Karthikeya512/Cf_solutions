#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int counta=0,countb=0,countc=0,countd=0;
        for(int i=0;i<(4*n);i++){
            if(s[i]=='A') counta++;
            else if(s[i]=='B') countb++;
            else if(s[i]=='C') countc++;
            else if(s[i]=='D') countd++;
            else continue;
        }
        int count=0;
        vector<int>v={counta,countb,countc,countd};
        for(int i=0;i<4;i++){
            if(v[i] >= n) count+=n;
            else count+=(v[i]%n);
        }
        cout << count << endl;
    }
    return 0;
}