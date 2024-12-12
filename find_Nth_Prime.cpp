#include <iostream>
#include <vector>

using namespace std;

vector<int> primeNumbers;

int fillPrimes(int n) {
	primeNumbers.resize(n);
	primeNumbers[0] = 2;
	int size = 1;
	for(int i = 3; size < n; i++) {
		bool isPrime = true;
		for(int k = 0; k < size; k++) {
			if(i % primeNumbers[k] == 0) {
				isPrime = false;
				break;
			}
		}
		if(isPrime) {
			primeNumbers[size] = i;
			size++;
		}
	}
	return size;
}


int main() {
    int n = 10000;
    fillPrimes(n);
    
    cout << primeNumbers[n-1] << " ";
    
    return 0;
}
