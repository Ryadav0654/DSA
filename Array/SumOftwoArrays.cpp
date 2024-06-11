#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &ans)
{
    int s = 0;
    int e = ans.size() - 1;
    while (s < e)
    {
        swap(ans[s++], ans[e--]);
    }
}

vector<int> sumOfArray(vector<int> &a, int n, vector<int> &b, int m)
{

    vector<int> ans;
    int i = n - 1;
    int j = m - 1;
    int carry = 0;

    // when both vector have same length

    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j];
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // when first vector length is greater than second vector length

    while (i >= 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // when second vector length is greater than first vector length

    while (j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    // when carry is not 0
    while (carry != 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }

    reverse(ans);

    return ans;
}

int main(int argc, char const *argv[])
{
    vector<int> nums1(4);
    vector<int> nums2(1);

    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(4);
    nums2.push_back(6);

    vector<int> ans1 = sumOfArray(nums1, 4, nums2, 1);

    cout << "Sum of two array is: ";

    for (int i = 0; i < ans1.size(); i++)
    {

        cout << ans1[i] << " ";
    }

    cout << endl;
    return 0;
}