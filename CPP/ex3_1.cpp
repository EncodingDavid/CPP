#include <iostream>
using namespace std;
int main()
{
	cout << "请输入3个数字：";
	double a,b,c;
	cin >> a >> b >> c;
	double sum = a+b+c;
	cout << "a=" << a << '\t' << "b=" << b << '\t' << "c=" << c << '\t';
	cout << "三者之和:" << sum << endl;
	return 0;
}
