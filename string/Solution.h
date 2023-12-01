//
// Created by lth on 2023/11/16.
//

#ifndef CPP_FOR_LEETCODE_SOLUTION_H
#define CPP_FOR_LEETCODE_SOLUTION_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
    vector<int> next;

public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0; // 如果needle为空字符串，则返回0

        int n = haystack.size(), m = needle.size();
        haystack = " " + haystack; // 在haystack前加空格，使下标从1开始
        needle = " " + needle;     // 在needle前加空格，使下标从1开始

        vector<int> next(m + 1); // 创建next数组
        // 构建next数组
        for (int i = 2, j = 0; i <= m; i++) {
            while (j && needle[i] != needle[j + 1]) {
                j = next[j];
            }
            if (needle[i] == needle[j + 1])
            {
                j++;
            }
            next[i] = j;
        }

        for (auto &item: next) {
            cout << item << " ";
        }

        // 匹配过程
        for (int i = 1, j = 0; i <= n; i++) {
            while (j && haystack[i] != needle[j + 1]) j = next[j];
            if (haystack[i] == needle[j + 1]) j++;
            if (j == m) {
                return i - m; // 找到匹配，返回起始位置
            }
        }

        return -1; // 没有找到匹配，返回-1
    }
};

// 先检查needle是否为空，如果为空，则直接返回0。
// haystack和needle前面各加一个空格，使得下标从1开始，方便编程。
// 构建next数组，这一步是KMP算法的核心，用于在模式串中快速跳过已知的不匹配部分。
// 进行字符串匹配，使用next数组在匹配失败时进行高效跳转。
// 如果找到匹配，则返回匹配的起始位置；如果遍历完haystack后仍未找到匹配，则返回-1。



#endif //CPP_FOR_LEETCODE_SOLUTION_H
