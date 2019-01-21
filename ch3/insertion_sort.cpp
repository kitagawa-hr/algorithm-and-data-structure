
#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int> v){
    for (auto it=v.begin(); it < v.end() - 1; it++){
        cout << *it << " ";
    }
    cout << *(v.end()-1) <<endl;

}

int main()
{
    int n, buf, j;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    print_vector(v);

    for (int i = 1; i < n; i++)
    {
        buf = v[i];
        j = i - 1;
        while (j >= 0 & buf < v[j])
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = buf;
        print_vector(v);
    }
    return 0;
}
