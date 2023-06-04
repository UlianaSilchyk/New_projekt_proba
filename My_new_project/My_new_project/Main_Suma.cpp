#include<iostream>

using namespace std;

int Summa(int a, int b)
{
	return a + b;
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << a;
	cout << " + ";
	cout << b;
	cout << " = ";
	cout << Summa(a, b) << endl;

	return 0;
}