---
title: Minimum Penalty Path
layout: post
comments: true
social-share: true
show-avatar: true
tags:
- greedy
- shortest path
- graph
---

> https://www.hackerrank.com/challenges/beautiful-path/problem

## 문제 요약

코스트를 계산하는 방법이 `bitwise OR` 인 그래프의 최단 경로를 구하는 문제

## 숨겨진 조건

1. bitwise OR를 사용하므로 전체 경로의 코스트 최댓값이 한정됨. 입력으로 주어지는 코스트의 최댓값이 1024 = 2^10 이므로, 최단 경로일 때 가능한 코스트의 bitwise OR 합계는 2^11 -1 = 2047 임. 

## 풀이법

1. 단순 최단경로 알고리즘을 사용하면 됨
 최단 경로상에서 값이 감소하는 경우는 존재 하지 않으므로 다익스트라 같은 구현이 쉬운 알고리즘을 사용해도 됨. 
 
2. 혹은 경로 합의 최대가 2047임이 보장되므로, 입력 제한인 10^3 * 2047 => 약 10^6 => 약 100만의 매우 작은 경우의 수를 전체 탐색 해도 됨.