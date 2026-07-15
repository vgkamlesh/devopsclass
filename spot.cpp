#include<iostream>
using namespace std;

int add(int x,int y){
	return x+y;
}
int mult(int x,int y){
	return x*y;
}
int main()
{
	cout<<"5+4:"<<add(5,4);
	cout<<"5*4:"<<mult(5,4);
}
