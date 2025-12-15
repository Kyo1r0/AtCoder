#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i= 0;i<n;i++)cin >> s[i];
    sort(s.begin(), s.end(), [](string x, string y) { return x.size() < y.size(); });
	string ans = "";
	for (int i = 0; i < n; i++) ans += s[i];
	cout << ans << '\n';

    return 0;
}