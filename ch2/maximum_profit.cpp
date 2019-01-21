
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int maxv = v[1] - v[0];
    int minv = v[0];

    for (size_t i = 1; i < n; i++)
    {
        maxv = max(maxv, v[i] - minv);
        minv = min(minv, v[i]);
    }
    cout << maxv << endl;
    return 0;
}
