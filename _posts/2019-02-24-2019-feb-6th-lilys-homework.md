---
title: 2019/Feb/6th - Lily's Homework
layout: post
comments: true
social-share: true
show-avatar: true
tags:
- sort
- implementation
date: '2019-02-06 16:19:02'
---

> https://www.hackerrank.com/challenges/lilys-homework/problem

## 문제 요약

1. 배열이 주어짐
2. 내림차순 혹은 오름차순으로 정렬하는데 필요한 최소 swap 수를 출력

## 풀이법

1. 주어진 배열을 정렬한 복사본을 생성
2. 정렬된 배열과 원본 배열 비교하면서 원위치로 직접 swap 해가면서 횟수를 기록
3. 역순 정렬된 배열 생성
4. 순서 2와 동일하게 직접 swap 해가면서 기록
5. 순서 2와 순서 4에서 나온 수 중 작은 수를 출력