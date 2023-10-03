#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main () {
	vector<int> v; // vector rong
	vector<int> a(3); // vector a co 3 phan tu
	vector<int> b(5,1); // vector b co 5 so 1
	int x[]={4,2,5,4,6,2,1,5,2,4,5,2,5};
	vector<int> c(x+1,x+5); // 2 5 4 6
	vector<int> d(c.begin(),c.end()); // d=c
	vector<int> e=d; // copy
	for(int i=0;i<b.size();i++) cout<<b[i]<<" "; // duye chi so
	for(auto x:c) cout<<x<<" "; // duyet xuoi
	for(vector<int>::iterator it=d.begin();it!=d.end();it++) cout<<*it<<" "; // duyet xuoi
	cout<<"\n";
	e.push_back(-2);
//	e.front()=e.back()=-3; for(auto x:e) cout<<x<<" ";
	e.resize(10,'a'); for(vector<int>::reverse_iterator it=e.rbegin();it!=e.rend();it++) cout<<*it<<" ";
	cout<<"\n";
	e.front()=e.back()=-3; for(auto x:e) cout<<x<<" ";
	cout<<"\n";
	cout<<e.size()<<"\n"<<e.capacity();
	return 0;
}

