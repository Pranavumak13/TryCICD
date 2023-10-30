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
    vector<int> v = {1, 2, 3, 4, 5};
    reverseVector(v);
    vector<int> expected = {5, 4, 3, 2, 1};
    assert(v == expected);
    cout << "Test passed!" << endl;
    return 0;
}
