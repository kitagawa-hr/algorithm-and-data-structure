
#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v)
{
    for (auto it = v.begin(); it < v.end() - 1; it++)
    {
        cout << *it << " ";
    }
    cout << *(v.end() - 1) << endl;
}

void bubble_sort(vector<int> vec, int n)
{
    int buf, count = 0;
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (vec[i - 1] > vec[i])
            {
                swap(vec[i - 1], vec[i]);
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
    int n = 1;
    while (true)
    {
        {
            cin >> n;
            if (n == 0)
            {
                return 0;
            }
            vector<int> v(n);
            for (int i = 0; i < n; i++)
            {
                cin >> v[i];
            }
            bubble_sort(v, n);
            vector<int>().swap(v);
        }
    }
}
