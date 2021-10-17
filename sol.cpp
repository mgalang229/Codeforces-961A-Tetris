#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> a(m);
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	// view the image in this repository for better understanding
	// count the frequency of each element in the sequence
	// the answer to this problem is the minimum frequency (smallest no. of blocks)
	vector<int> counter(n + 1, 0);
	for (int i = 0; i < m; i++) {
		counter[a[i]]++;
	}
	cout << *min_element(counter.begin() + 1, counter.end()) << '\n';
	return 0;
}
