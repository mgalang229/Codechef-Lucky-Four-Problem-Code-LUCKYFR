#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// count the occurrences of the digit '4' in the number
		auto OccurrencesOfFour = [&](int num) {
			int cnt = 0;
			while (num > 0) {
				if (num % 10 == 4) {
					cnt++;
				}
				num /= 10;
			}
			return cnt;
		};
		cout << OccurrencesOfFour(n) << '\n';
	}
	return 0;
}
