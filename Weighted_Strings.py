#!/usr/bin/env python3

import os
import sys

def weightedUniformStrings(s, queries):
    weights = set()
    if not s:
        return ["Yes" if q in weights else "No" for q in queries]
    prev = s[0]
    streak = 0
    for ch in s:
        if ch == prev:
            streak += 1
        else:
            prev = ch
            streak = 1
        letter_weight = ord(ch) - ord('a') + 1
        weights.add(letter_weight * streak)
    return ["Yes" if q in weights else "No" for q in queries]


if __name__ == '__main__':
    s = sys.stdin.readline().strip()
    q_count = int(sys.stdin.readline().strip())
    queries = [int(sys.stdin.readline().strip()) for _ in range(q_count)]

    result = weightedUniformStrings(s, queries)
    print("\n".join(result))
