#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 入力
string s, t;

// DPテーブル
int dp[3100][3100] = {0};

int main() {
    cin >> s >> t;

    // DPループ
    for (int i = 0; i < (int)s.size(); ++i) {
        for (int j = 0; j < (int)t.size(); ++j) {

            // まず「使わない」遷移
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i+1][j]);
            dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j+1]);

            // 文字が一致したら「使う」遷移
            if (s[i] == t[j]) {
                dp[i+1][j+1] = max(dp[i+1][j+1], dp[i][j] + 1);
            }
        }
    }

    // 復元
    string res = "";
    int i = (int)s.size(), j = (int)t.size();

    while (i > 0 && j > 0) {

        // 上から来た
        if (dp[i][j] == dp[i-1][j]) {
            --i;
        }
        // 左から来た
        else if (dp[i][j] == dp[i][j-1]) {
            --j;
        }
        // 斜めから来た（＝文字を使った）
        else {
            res = s[i-1] + res;
            --i;
            --j;
        }
    }

    cout << res << endl;
}
