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
	cout << "Gcd of integers are " << a <<endl;
	return a;
}


int main(){
	int a = 21;
	int b = 14;
	gcd(a, b);

	return 0;
}