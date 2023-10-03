#include <bits/stdc++.h>
using namespace std;
template <class T>
struct node{
	T elem;
	node *next;
	node(T x, node<T>*N=0){
		elem =x;next=N;
	}
};
template <class T>
struct Queue{
	int n; //size
	node<T> *Head, *Trail;
	Queue() {n=0;Head=Trail=0;}
	~Queue(){while(n) pop();}
	int size(){return n;}
	bool empty() {return n==0;}
	T&front(){return Head->elem;}
	T&back(){return Trail->elem;}
	void pop(){node<T> *p=Head;Head=p->next;delete p; n--;}
	void push(T x){if(n==0) Head=Trail=new node<T>(x); else{Trail->next=new node<T>(x);Trail=Trail->next;} n++;
	}
};
int main () {
	Queue<int> Q;
	int n;cin>>n;
	int a[n];for(int i=0;i<n;i++) cin>>a[i];
	for(int x:a) Q.push(x);
	Q.front()=Q.back()=5;
	while(Q.size()){cout<<Q.front()<<" ";Q.pop();}
	return 0;
}

