---
title: binom_lucas
documentation_of: ../../math/binom_lucas.cpp
---

## 概要
Lucas の定理を用いて $ binom(n, k) \mod p$ を求めます。
- Lucas の定理

	$n$, $k$ を $p$ 進数表示したときの $i$ 桁目をそれぞれ $n_i$, $k_i$ として、

	$ binom(n, k) \equiv \prod_{i=0} binom(n_i, k_i)  \mod p$

各 $binom(n_i, k_i)$ は前計算により $O(1)$ で求められる。
(<https://e1810.github.io/lib_cpp/combination.cpp> などを用いる)

## 計算量
- 前計算 $ O(p) $
- クエリ $ O( \log_p{n} ) $

