#include<iostream>
const double pi = 3.14;
using namespace std;

int area(int);
int area(int,int);
float aera(float);

void display(int k)
{
	cout<<"\n\n\n THE AERA IS "<<k;
	
 } 
int main()
{
	int a=7, c=8, d=9;
	float r=4.6, s=4.4, t=2.5;
	
	area(a);//calling area(int p)
	area(c,d);//calling area(int q,int r)
	area(r);//callinf area(float m)
	
}

int area (int p)
{
	int x;
	x=p*p;
	display(x);
}
int area (int q, int r)
{
  int x;
  x=q*r;
  display(x);
}

float area (float m)

{
	int x;
	x=pi*m*m;
	display(x);
	
	
}









