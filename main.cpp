#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i{ 0 }; i <= n + 1; i += 2) {
		for (int j{ 0 }; j <= n - i; j += 2) {
			cout << " ";
		}
		for (int j{ 0 }; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
