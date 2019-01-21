#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    int buf;
    string str;
    for (int i = 0; i < 10; i++)
    {
        cin >> buf;
        v.push_back(buf);
    }

    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < 3; i++)
    {
        str += to_string(v[i]);
        str += " ";
    }
    str.pop_back();
    cout << str << endl;
    return 0;
}
