---
title: 2019/Feb/3rd - Prim's (MST)
layout: post 
comments: true
social-share: true
show-avatar: true
tags: [graph, bfs]
---

> [Prim's (MST) : Special Subtree](https://www.hackerrank.com/challenges/primsmstsub/problem)

단순히 가장 최소인 간선 구하면 되는 문제.  그래프이므로 엣지 정보를 저장할 때 양방향으로 타겟 노드 모두에게 간선 저장을 하고, `priority_queue`로 `(cost, node id)` 쌍을 저장 한뒤, `cost` 값이 가장 작은 순서대로 뽑아내서 `visit` 체크를 하면 끝.