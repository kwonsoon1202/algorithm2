#include <iostream>
#include <vector>
#include <algorithm>
#include "algorithm.h"

bool equal3(const int& val)
{
    return val == 3;

};

using std::cout;    using std::endl;
using std::vector;

int main() {

    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3, 4, 5};

    if (aiot::equal(nums.cbegin(), nums.cend(), nums2.cbegin()))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;

    auto it = aiot::find(nums.cbegin(), nums.cend(),  3);
    if (it != nums.cend()) {
        cout << "found" << endl;
    } else {
        cout << "not found" << endl;
    }
    auto it2 = aiot::find_if(nums.cbegin(), nums.cend(), equal3);

    vector<int> num3 = {1, 2, 3, 3, 3, 4, 5};

    return 0;
}
