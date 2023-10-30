#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

void reverseVector(vector<int> &v)
{
    reverse(v.begin(), v.end());
}

int main()
{
    vector<int> v = {2,4,6,8,10};
    reverseVector(v);
    vector<int> expected = {10, 8, 6, 4, 2};
    assert(v == expected);
    cout << "Test passed!" << endl;
    return 0;
}
