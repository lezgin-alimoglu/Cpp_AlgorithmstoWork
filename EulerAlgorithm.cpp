#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int t;
	if (b != 0) {
		t = b;
		b = a % b;
		a = t;
		return gcd(a, b);
	}
	return a;
}

int main(){
	int a = 21;
	int b = 14;

	int result = gcd(a, b);
    	cout << "The GCD of " << a << " and " << b << " is " << result << endl;

	return 0;
}
