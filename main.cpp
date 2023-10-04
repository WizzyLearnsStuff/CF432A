#include<iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int counts[6] = {0};

	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		counts[b]++;
	}

	int s = 0;
	for (int i = 0; i <= 5 - k; i++) {
		s += counts[i];
	}

	cout << s / 3;
}
