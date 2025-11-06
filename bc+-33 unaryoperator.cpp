#include<iostream>
using namespace std;
class Demo
{
	int n;
	public:
		Demo(int x)
		{
			n=x;
		}
		Demo operator++()
		{
			return Demo(++n);
		}
		void display()
		{
			cout << "value = " << n << endl;
		}
};
int main()
{
	Demo ob1(5);
	Demo ob2 = ++ob1;// we can use the - (minus) operator instead of ++//
	cout<<"original object: ";
	ob1.display();
	cout<<"after apply unary minus: ";
	ob2.display();
	return 0;
}
