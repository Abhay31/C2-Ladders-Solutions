#include<bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<long long> a(n);
		for (int i = 0; i < n; i++) 
		{
		    cin >> a[i];
		}
		sort(a.begin(), a.end());
		double res = a[n - 1];
		double avg = 0.0;
		for (int i = 0; i < n - 1; i++) 
		{
		    avg += a[i];
		}
		avg /= n - 1;
		res += avg;
		cout << fixed << setprecision(9) << res << endl;
	}
}
