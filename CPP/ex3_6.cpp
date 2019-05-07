#include <iostream>
#include <cmath>
using namespace std;
int main(){
	const double eps = 1e-6;//计算精度
	int sign = 1;//每项的符号
	double pi = 0.0;//每项的值
	double item = 1.0;//每项的分母
	double d = 1.0;
	while(fabs(item) >= eps){
		pi += item;
		d += 2.0;
		sign = -sign;
		item = sign * (1/d);
	}
	pi *= 4;
	cout << "pi=" << pi <<endl;
	return 0 ;

}
