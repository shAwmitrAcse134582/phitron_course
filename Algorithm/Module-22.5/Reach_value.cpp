#include<iostream>
using namespace std;
bool ans = false;
long long input;

void recg(long long n)
{
	if (n == input)
	{
		ans = true;
		return;
	}
	if (n > input)
	{
		return;
	}

	recg(n * 10);
	recg(n * 20);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		ans = false;
		cin >> input;
		recg(1);
		if (ans == true)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
}