#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count =0 , mi = n , mx = -1 ;
        for(int i=0;i<n;i++){
            if(s[i]=='1') {
                count++;
                mi = min(mi,i);
                mx = max(mx,i);
            }
        }
        if((count %2 ==1) ||(count ==2 && abs(mi-mx)==1) ) cout << "NO
";
        else cout << "YES
";
    }
    return 0;
}