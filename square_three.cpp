#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,m,k; cin>>n>>m>>k;
	vector<double> a(n+1);
	vector<double> b(m+1);
	vector<double> c(k+1);
	for(auto &x:a) cin>>x;
	for(auto &x:b) cin>>x;
	for(auto &x:c) cin>>x;
	vector<double> d(1+max({m,n,k}),0); for(int i=0;i<a.size();i++) d[i]+=a[i];
	for(int i=0;i<b.size();i++) d[i]+=b[i];
	for(int i=0;i<c.size();i++) d[i]+=c[i];
	while(d.size()>1 && d.back()==0) d.pop_back();
	for(auto x:d) cout<<setprecision(3)<<fixed<<x<<" ";
	return 0;
}

