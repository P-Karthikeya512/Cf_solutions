#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<char>v={'a','e','i','o','u'};
        vector<int>c(5,n/5);
        for(int i=0;i<n%5;i++)c[i]++;
        for(int i=0;i<5;i++){
            for(int j=0;j<c[i];j++){
                cout << v[i];
            }
        }     
        cout << endl;
    }
    return 0;
}