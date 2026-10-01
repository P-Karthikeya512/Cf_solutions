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
        bool found=false;
        for(int i=0;i<n;i++){
            int j=65;
            while(j<91){
                if(s[i]==char(j)){
                    cout << "YES
";
                    break;
               }
               j++;
            }
        }
        if(is_sorted(s.begin(),s.end())) cout <<  "YES
";
        else cout << "NO
";
    }
    return 0;
}