#include<iostream>
using namespace std; 
class A
{
	int i,j,k;
	public:
		void table()
		{
			cout<<"enter any number";
			cin>>j;
			for(i=1;i<=10;i++)
			{
				k=j*i;
				cout<<j<<"*"<<i<<"="<<k<<endl;
			}
		}
};
int main()
{
	A obj;
	obj.table();
	return 0;;
}
