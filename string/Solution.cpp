//
// Created by lth on 2023/11/16.
//

#include "Solution.h"
using namespace std;
#include "iostream"


int main(){
    Solution solution;
    string haystack = "hello", needle = "ABACABAB";
    cout << solution.strStr(haystack, needle) << endl;
    return 0;
}