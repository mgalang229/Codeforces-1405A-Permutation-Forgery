#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int a[100], n;
		cin >> n;
		for(int i=0; i<n; ++i)
			cin >> a[i];
		for(int i=n-1; i>=0; --i)
			cout << a[i] << " ";
		cout << "\n";
	}
}
