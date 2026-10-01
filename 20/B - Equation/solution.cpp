#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i, a, b) for(int i = a; i < b; ++i)
#define pb push_back
 
int32_t main(){
    int a, b, c;
    vector<double> ans;
    cin >> a >> b >> c;
    if(!a && b && c){
        double x = (double(-c)) / double(b);
        ans.pb(x);
    }
    else if(!c && a && b){
        ans.pb(0.0);
        ans.pb((double(-b)) / double(a));
    }
    else if(!b && a && c){
        if(a * c > 0){
            cout << 0 << endl;
            return 0;
        }
        else {
            double x = sqrt(double(-c) / double(a));
            ans.pb(-x);
            ans.pb(x);
        }
    }
    else if(!a && !b && !c){
        cout << fixed << setprecision(10) << -1.0 << endl;
        return 0;
    }
    else if(!a && !b && c){
        cout << fixed << setprecision(10) << 0.0 << endl;
        return 0;
    }
    else if(!a && b && !c){
        ans.pb(0.0);
    }
    else if(a && !b && !c){
        ans.pb(0.0);
    }
    else{
        int ch = 4 * a * c, ch1 = b * b;
        if(ch > ch1){
            cout << fixed << setprecision(10) << 0.0 << endl;
            return 0;
        }
        else if(ch == ch1){
            double xp = double(-b) / (2 * a);
            ans.pb(xp);
        }
        else{
            double xp = sqrtl(double(ch1 - ch));
            double f = double(-b) + xp;
            double d = double(-b) - xp;
            double w = f / (2 * a);
            double q = d / (2 * a);
            ans.pb(w);
            ans.pb(q);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << '
';
    rep(i, 0, ans.size())
        cout << fixed << setprecision(10) << ans[i] << '
';
 
    return 0;
}