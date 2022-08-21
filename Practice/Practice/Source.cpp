#include <iostream>
#include <vector>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<double> arr;
    int index1 = 0;
    int index2 = 0;
    while (index1 < nums1.size() and index2 < nums2.size()) {
        if (nums1[index1] < nums2[index2]) {
            arr.push_back(nums1[index1++]);
        }
        else {
            arr.push_back(nums2[index2++]);
        }
    }
    while (index1 < nums1.size()) {
        arr.push_back(nums1[index1++]);
    }
    while (index2 < nums2.size()) {
        arr.push_back(nums2[index2++]);
    }
    if ((arr.size()) % 2 != 0) {
        int size = (arr.size()) / 2;
        double median = arr[size];
        return median;
    }
    else {
        int size = (arr.size()) / 2;
        double median = (arr[size] + arr[size - 1]) / 2;
        return median;
    }
}

int main() {
    
    cout << endl;
    system("pause");
    return 0;
}