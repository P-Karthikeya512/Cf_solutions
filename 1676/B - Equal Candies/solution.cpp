#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(auto &i:v) cin >> i;
        int mini = *min_element(v.begin(),v.end());
        int sum = 0;
        for(auto i:v) sum += i;
        cout << sum - (n*mini) << endl;
    }
    return 0;
}