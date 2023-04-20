#include <iostream>

using namespace std;

int main()
{
int testy,n;
double a, b;
int x[50000];
int y[50000];
bool t;
const double eps = 10e-9;

cin>>testy;
for (int i=0; i<testy; i++)
{
	t=0;
	cin>>n;
	for (int j=0; j<n; j++)
	{
		cin>>x[j]>>y[j];
		if (x[j]!=x[0]) t=1;
	}
	
	if (n<3 || t==0) cout<<"TAK"<<endl;
	else
	{
		int j=1;
		while (x[0]==x[j] && y[0]==y[j]) j++;



		a=double(y[j]-y[0])/(x[j]-x[0]);
		
		b=double(y[0]-x[0]*a);
		//cout<<"A: "<<a<<endl<<"B: "<<b<<endl;
		t=0;
		for (int k=2; k<n; k++)
		{
			if (y[k]>=a*x[k]+b-eps && y[k]<=a*x[k]+b+eps) continue;
			else
			{
				cout<<"NIE"<<endl;
				t=1;
				break;
			}
		}
		if (t==0) cout<<"TAK"<<endl;
	}
}
return 0;
}