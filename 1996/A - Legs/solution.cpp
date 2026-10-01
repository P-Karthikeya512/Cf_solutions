#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int leg_count=0;
		if(n<4){
			leg_count+=n/2;
		}else{
			leg_count+=n/4;
			int remaining_legs=n%4;
			leg_count+=(max(remaining_legs/2,remaining_legs/4));
		}
		cout << leg_count << endl;
	}
	return 0;
}