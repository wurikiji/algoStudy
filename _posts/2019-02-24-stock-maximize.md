---
title: Stock Maximize
layout: post
comments: true
social-share: true
show-avatar: true
tags:
- greedy
date: '2019-02-15 16:19:02'
---

> 문제 https://www.hackerrank.com/challenges/stockmax/problem

> 코드 https://github.com/depromeet/algoStudy/blob/master/medium/1902/190215/ogh.cc

## 문제 요약

1. trade cost 를 담은 배열이 주어짐
2. 각 배열의 원소를 trade 하거나 하지 않을 수 있음
3. buy 한 경우 반드시 sell 해야함. 이 때 buy 하는 trade cost는 해당 원소 뒤의 아무 원소나 상관없음
4. 스텝 2-3 을 반복할 때 최대로 얻을 수 있는 이득을 출력

## 문제 풀이

O(N^2)은 그냥 이중 for 돌리면 되므로 매우 간단 하지만 시간이 너무 오래 걸림. 

일단 buy 한 경우 해당 원소 뒤에 있는 원소들 중 가장 큰 값으로 sell 하면 됨. 큰 값이 없을 경우 buy 하면 안됨. 내 위치 이후의 원소들 중 가장 큰 값이 필요하므로, 배열의 뒤 부터 탐색하면서 항상 `max cost` 값을 갱신하면서 cost gap 계산해서 더하면 끝

```cpp
int max = 0;
long long sum = 0;
reverse(prices.begin(), prices.end());
for( auto price: prices) {
	if (max < price) max = price;
	if (price < max) sum += max - price;
}
```