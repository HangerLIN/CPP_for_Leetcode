#include <iostream>  
#include <vector>
//#include <gtest.h>

void swap(int& a, int& b) {  
    int t = a;  
    a = b;  
    b = t;  
}  
  
void quickSort(std::vector<int>& arr, int l, int r) {  
    if (l>=r) return;

    int i = l - 1, j = r + 1, x = arr[(l + r )>> 1];
    while (i<j)
    {
        do i++; while (arr[i] < x);
        do j--; while (arr[j] > x);
        if(i<j) swap(arr[i],arr[j]);
    }
    quickSort(arr, l, j); quickSort(arr, j+1, r);
}

static int tmp[100];
void merge_sort(std::vector<int>& arr, int l, int r){
    if(l >= r) return;
    int mid = r + l >> 1;
    merge_sort(arr, l, mid);
    merge_sort(arr, mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if(arr[i] <= arr[j]) tmp[k++] = arr[i++];
        else tmp[k++] = arr[j++];
    }

    while(i<=mid) tmp[k++] = arr[i++];
    while(j<=r) tmp[k++] = arr[j++];

    for(i = l,j = 0; i<=r; i++,j++) arr[i] = tmp[j];
}


//TEST(SortTest, QuickSort) {
//std::vector<int> arr = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
//quickSort(arr, 0, arr.size() - 1);
//EXPECT_EQ(arr, std::vector<int>{2, 3, 5, 6, 7, 9, 10, 11, 12, 14});
//}
//
//TEST(SortTest, MergeSort) {
//int arr[] = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
//merge_sort(arr, 0, 9);
//EXPECT_EQ(std::vector<int>{2, 3, 5, 6, 7, 9, 10, 11, 12, 14}, std::vector<int>(arr, arr + 10));
//}

//int main() {
//    std::vector<int> arr = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
//    quickSort(arr, 0, arr.size() - 1);
//    merge_sort(arr,0,arr.size()-1);
//    for (auto& num : arr) {
//        std::cout << num << " ";
//    }
//    std::cout << std::endl;
//    return 0;
//}