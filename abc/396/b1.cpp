#include <bits/stdc++.h>
using namespace std;
int main() {
	stack<int> st;
	for (int i = 0; i < 100; i++) {
		st.push(0);
	}
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		int c;
		cin >> c;
		if (c == 1) {
			int x;
			cin >> x;
			st.push(x);
		} else {
			cout << st.top() << endl;
			st.pop();
		}
	}
	return 0;
}
