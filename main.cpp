#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1(3, 0);

    for (int i = 0; i < 3; i++)
    {
        v1.push_back(i);
    }

    for (int& x : v1)
    {
        cout << x << " V1, print 1" << endl;
    }

    cout << endl;

    for (auto x : v1)
    {
        cout << x << " V1, print 2" << endl;
    }

    cout << endl;

    for (vector<int>::iterator x=v1.begin(); x!=v1.end(); ++x)
    {
        cout << *x << " V1, print 3" << endl;
    }

    cout << endl;

    cout << "Taille v1 : " << v1.size() << endl;

    v1.push_back(8);

    cout << "Nouvelle Taille v1 : " << v1.size() << endl;

    cout << endl;

    vector<int> v2(v1.size(), 0);

    copy(v1.begin(), v1.end(), v2.begin());

    for (auto x : v2)
    {
        cout << x << " V2" << endl;
    }

    cout << endl;

    vector<int> v3;

    v3.assign(v1.begin(), v1.end());

    for (auto x : v3)
    {
        cout << x << " V3" << endl;
    }

    cout << endl;

    return 0;
}
