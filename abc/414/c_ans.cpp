#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

typedef long long int ll;
ll a, b, n;


bool ispal (ll x, ll b) {
	vector<ll> s;
	// s[i] is the digit in i-th place
	while (x > 0) {
		s.push_back(x % b);
		x /= b;
	}
	bool isok = true;
	for (ll i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size() - 1 - i]) isok = false;
	}
	return isok;
}
void solve () {
	b = 10;
	
	vector<ll> vec; // list of answers
	vector<ll> powb = {1}; // powb[i] == 10**i
	ll len = 1;
	while (true) {
		// extend powb enough
		while (powb.size() < len) {
			ll w = powb[powb.size()-1] * b;
			powb.push_back(w);
		}
		if (powb[len-1] > n) break;
		vector<ll> d((len+1)/2, 0); // upper half. d[0] is the most-significant-digit.
		d[0] = 1; // starts at (1, 0, ..., 0)
		while (true) {
			// calculate the palindromic integer corresponding to d as sum
			ll sum = 0;
			for (ll i = 0; i < len; i++) {
				ll idx;
				if (i < d.size()) {
					idx = i;
				} else {
					idx = (len-1) - i;
				}
				sum += powb[i] * d[idx];
			}
			// check if (sum <= n) and (sum is palindromic in base A)
			if (sum <= n) {
				bool isok = ispal(sum, a);
				if (isok) {
					vec.push_back(sum);
				}
			}
			// next d
			bool hasnext = false;
			for (ll i = d.size()-1; i >= 0;i--) {
				if (d[i] == b-1) {
					d[i] = 0;
					continue;
				} else {
					d[i] += 1;
					hasnext = true;
					break;
				}
			}
			if (!hasnext) break;
		}
		len++;
	}
	// calculate sum
	ll allsum = 0;
	for (ll v : vec) {
		allsum += v;
	}
	cout << allsum << "\n";
}


int main (void) {
	std::ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cin >> a;
	cin >> n;
	solve();
	return 0;
}