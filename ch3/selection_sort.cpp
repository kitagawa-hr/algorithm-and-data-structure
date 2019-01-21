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


void selection_sort(vector<int> vec, int n)
{
    int count = 0;
    for (int sw = 0; sw < n; sw++)
    {
        vector<int>::iterator minIt = min_element(vec.begin() + sw, vec.end());
        auto min_index = distance(vec.begin(), minIt);
        if (vec[sw] != vec[min_index])
        {
            swap(vec[sw], vec[min_index]);
            count += 1;
        }
    }
    print_vector(vec);
    cout << count << endl;
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    selection_sort(v, n);
    vector<int>().swap(v);
}
