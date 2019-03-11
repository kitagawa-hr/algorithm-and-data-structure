#include <bits/stdc++.h>
#include <vector>
using namespace std;

void print_vector(vector<int> &vec)
{
    for (auto &&it = vec.begin(); it < vec.end() - 1; it++)
    {
        cout << *it << " ";
    }
    cout << *(vec.end() - 1) << endl;
}

void bubble_sort(vector<int> &vec, const int n)
{
    int count = 0;
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int i = n - 1; i > 0; i--)
        {
            if (vec.at(i - 1) > vec.at(i))
            {
                swap(vec.at(i - 1), vec.at(i));
                count += 1;
                flag = true;
            }
        }
    }
    cout << count << endl;
    return;
}

int main()
{
    int n = 0;
    while (1)
    {
        {
            cin >> n;
            if (n == 0)
            {
                return 0;
            }
            vector<int> vec(n);
            for (int i = 0; i < n; i++)
            {
                cin >> vec[i];
            }
            bubble_sort(vec, n);
            vector<int>().swap(vec);
        }
    }
}
