#include <iostream>
using namespace std;

int main() {
	int t;
	if (!(cin >> t)) return 0;

	while (t--) {
		int k;
		cin >> k;

		int rem = k % 3;
		if (rem == 1) {
			cout << "VGC\n";
		} else if (rem == 2) {
			cout << "CVG\n";
		} else {
			cout << "GCV\n";
		}
	}
	return 0;
}