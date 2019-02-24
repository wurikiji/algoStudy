---
title: Organizing Containers of Balls
layout: post
comments: true
social-share: true
show-avatar: true
tags:
- implementation
date: '2019-02-18 16:19:02'
---

> 문제 https://www.hackerrank.com/challenges/organizing-containers-of-balls/problem

> 코드 https://github.com/depromeet/algoStudy/blob/master/medium/1902/190218/ogh.cc

## 문제 요약

N 종류의 공 M개를 N개의 상자에 나눠담고 싶음. 단, 섞여있는 공을 다른 상자에 옮기고 싶은 경우 타겟 상자의 다른 공과 `swap`해야만 옮길 수 있음. 모든 상자가 단 한 종류의 공만 가지고 있도록 바꿀 수 있으면 **Possible** 못 바꾸면 **Impossible**을 출력

## 문제 풀이

공의 종류와 상자의 갯수가 동일하므로, 한 종류의 공은 반드시 하나의 상자에 모두 다 들어 가야함. 한 종류의 공이 여러 상자에 들어갈 경우 "Impossible"임. 그러기 위해선 반드시 상자들의 크기 집합과 각 종류별 공의 집합이 완전히 일치해야함.

1. 컨테이너 사이즈 집합을 만듬
2. 종류별 공의 갯수를 세고 공 갯수 집합을 만듬
3. 두 집합의 원소가 완전히 동일한지 판별 하면 끝