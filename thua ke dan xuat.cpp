#include <bits/stdc++.h>
using namespace std; // ham huy toan tu gan ham tao sao chep
class A{
	int a1,*a2;
	public: 
		A(int m){ a1=m;a2=new int[m];}
		~A(){delete[]a2;}
		void output(){cout<<a1<<endl<<a2;}
};
class B: public A{
	int b;
	public:
		B(int m=0,int n=0,int p=10):A(m){b=p;}
		void output();
};
void B::output(){
	A::output();
	cout<<endl<<b;
}
int main () {
	B ob1, ob2(3), ob3(1,2,4);
	ob1.output();ob2.output();ob3.output();
	return 0;
}

