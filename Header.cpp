//
// Created by lth on 2023/11/14.
//
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <string>
#include <sstream>
#include <numeric>
#include <functional>
#include <cmath>
#include <cstring>
#include <climits>
#include <cassert>
#include <bitset>
#include <list>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <utility>
#include <iterator>
#include <random>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};