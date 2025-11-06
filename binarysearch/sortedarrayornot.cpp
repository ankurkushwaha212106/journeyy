#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n - 1; i++) {
            if(nums[i] > nums[i + 1])
                count++;
        }
        if(count == 0)
            return true;
        else if(count == 1) {
            if(nums[n - 1] <= nums[0])
                return true;
            else
                return false;
        }
        else
            return false;
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
        cin >> nums[i];
    if(obj.check(nums))
        cout << "true";
    else
        cout << "false";
    return 0;
}
