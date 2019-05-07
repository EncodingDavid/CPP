#include <iostream>
using namespace std;
int main(){
	const double pi = 3.14159;
	for(int r = 5;r > 0;r--)
		cout << "r=" << r << '\t' << "s=" << pi*r*r << endl;
	return 0; 
}
