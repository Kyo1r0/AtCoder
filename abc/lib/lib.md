# AtCoder ライブラリまとめ (緑コーダーを目指す用)

## 1. 二分探索系
- `std::lower_bound(begin, end, x)`  
  - `x` 以上の最初の位置を返す
- `std::upper_bound(begin, end, x)`  
  - `x` より大きい最初の位置を返す

---

## 2. データ構造
- `std::set` / `std::multiset`  
  - 自動ソート付き集合
- `std::map` / `std::unordered_map`  
  - key → value の対応表
- `std::priority_queue`  
  - 最大値 / 最小値の管理

---

## 3. 便利関数
- `std::iota(v.begin(), v.end(), 0)`  
  - 連番を埋める
- `std::sort(v.begin(), v.end())`  
  - ソート
- `std::unique`  
  - 重複削除 (ソート必須)

---

## 4. 数学
- `std::gcd`, `std::lcm`
- `pow`, `modpow`, `modinv` (ACLで使う)

---

## 5. ACL (AtCoder Library)
- `atcoder/dsu` (Union-Find)
- `atcoder/segtree` (セグ木)
- `atcoder/fenwicktree` (BIT)
- `atcoder/modint` (mod計算)
