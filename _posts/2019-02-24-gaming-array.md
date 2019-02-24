---
title: Gaming Array
layout: post
comments: true
social-share: true
show-avatar: true
tags:
- LIS
- greedy
date: '2019-02-14 16:19:02'
---

> https://www.hackerrank.com/challenges/an-interesting-game-1/problem

## 문제 요약

1. 초기 배열 `arr`이 주어짐
2. 해당 배열에서 가장 큰 원소의 위치를 찾음
3. 해당 원소 및 그 뒤의 모든 원소들을 배열에서 제거
4. 남은 배열 로 스텝 2-3을 반복
5. 배열의 모든 원소가 제거 될 때까지 걸리는 횟수를 구하고
6. 홀수/짝수 판별해서 승리자 출력하기

## 풀이법

### 단순 풀이

매번 최댓값 찾아서 문제에 주어진 스텝 그대로 구현하기. 이 경우 O(n^2)으로 인해 Time out이 발생할 수 있음

### O(N) 풀이

매번 가장 큰 수의 오른쪽을 모두 삭제하고 점점 왼쪽으로 이동하는 형태의 배열 변경이 일어남. 이 말은 매 스텝 마다 pivot이 되는 원소가 뒤에서부터 내림차순이고, 앞에서부터 보면 오름차순 이라는 의미가 됨. 간단하게 배열의 0번 원소를 시작으로 하는 increasing subsequence의 길이가 몇인지 보면 됨. 

```cpp
int count =1;
int pivot = arr[0];
for(int i = 1 ;i < arr.size();i++) {
	if (arr[i] > pivot) {
		count++;
		pivot = arr[i];
	}
}
```