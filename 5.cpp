#include <iostream>
#include <stack>
#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> leftProduct(n, 1);
    vector<int> rightProduct(n, 1);


    for (int i = 1; i < n; i++) {
        leftProduct[i] = leftProduct[i - 1] * nums[i - 1];
    }


    for (int i = n - 2; i >= 0; i--) {
        rightProduct[i] = rightProduct[i + 1] * nums[i + 1];
    }


    vector<int> answer(n);
    for (int i = 0; i < n; i++) {
        answer[i] = leftProduct[i] * rightProduct[i];
    }

    return answer;
}

int main() {
    vector<int> nums1 = { 1, 2, 3, 4 };
    vector<int> nums2 = { -1, 1, 0, -3, 3 };

    vector<int> result1 = productExceptSelf(nums1);
    vector<int> result2 = productExceptSelf(nums2);

    cout << "Input: [1, 2, 3, 4], Output: ";
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Input: [-1, 1, 0, -3, 3], Output: ";
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
