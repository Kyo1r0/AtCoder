#include <iostream>
#include <set>
#include <vector>

int main() {
    using namespace std;
    int N, M;
    cin >> N >> M;

    // 置くことができないマスの集合
    set<pair<int, int>> bad_cell;
    // コマの動く先
    vector<pair<int, int>> knight_move{{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}};
    for (int i = 0; i < M; ++i) {
        int x, y;
        cin >> x >> y;
        bad_cell.emplace(x, y);
        for (const auto& [dx, dy] : knight_move)
            // 取れる先が存在するマスなら
            if (1 <= x + dx && x + dx <= N && 1 <= y + dy && y + dy <= N)
                bad_cell.emplace(x + dx, y + dy);
    }

    // マス全体から置けないマスを引いたものが答え
    cout << static_cast<long>(N) * N - size(bad_cell) << endl;

    return 0;
}
