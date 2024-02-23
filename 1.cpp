#include <algorithm>
#include<iterator>
#include<deque>
#include<utility>
#include <unordered_set>
bool containsDuplicate(const vector<int>&nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }

    int main() {
        vector<int> nums = { 1, 2, 3, 4, 5, 2 };
        if (containsDuplicate(nums)) {
            cout << "True" << endl;
        }
        else {
            cout << "Folse" << endl;
        }
        return 0;
    }
	الاول
