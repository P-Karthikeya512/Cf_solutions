#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n,s;
    double r;
    cin >> n >> s;
    vector<pair<double,int>>v;
    for(int i=0;i<n;i++){
        int x,y,k;
        cin >> x >> y >> k;
        double dis = sqrtl(((x*x)+(y*y)));
        v.push_back(make_pair(dis,k));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int x = (v[i].second);
        s +=x;
        r = v[i].first;
        if(s>=1000000)break;
    }
    if(s>=1000000) cout <<setprecision(8) << r << endl;
    else cout << -1 << endl;
    return 0;
}