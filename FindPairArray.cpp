#include <iostream>
#include <algorithm>
using namespace std;

void pairArray(int nums[], int n, int t)
{

    sort(nums, nums + n);
    int l = 0;
    int h = n - 1;
    while (l < h)
    {
        if (nums[l] + nums[h] == t)
        {
            cout << "Pair found (" << nums[l] << ", " << nums[h] << ")\n";
            return;
        }
        (nums[l] + nums[h] < t)? l++: h--;
    }
    cout << "Pair not found";
}

int main()
{
    int nums[] = { 8, 7, 2, 5, 3, 1 };
    int t = 10;

    //int nums[] = {5, 2, 6, 8, 1, 9};
    //int t = 12;

    int n = sizeof(nums)/sizeof(nums[0]);

    pairArray(nums, n, t);

    return 0;
}
