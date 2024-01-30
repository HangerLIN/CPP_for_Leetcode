//
// Created by lth on 2023/11/14.
//

#ifndef CPP_FOR_LEETCODE_TREENODE_H
#define CPP_FOR_LEETCODE_TREENODE_H
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <bitset>

#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <iterator>
#include <limits>
#include <random>

#include <string>
#include <sstream>
#include <iomanip>
#include <cstring>
#include <cctype>

#include <memory>
#include <complex>
#include <cmath>
#include <chrono>
#include <ctime>

#include <stdexcept>
#include <cassert>

using namespace std;

// 你的解题代码可以写在这里


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

//回溯的题目专用
std::vector<std::vector<int>> res;
std::vector<int> path;

#endif //CPP_FOR_LEETCODE_TREENODE_H
