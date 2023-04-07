#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void afficheString(vector<string> const& a)
{
    for (auto x : a)
    {
        cout << x << " ";
    }

    cout << endl;
}

string concatene(vector<string> const& a)
{
    string result;

    for (auto x : a)
    {
        result += x + " ";
    }

    return result;
}

void ajouteVirgule(string& a)
{
    a += ",";
}

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

    vector<string> vs1;

    vs1.push_back("Bonjour");
    vs1.push_back("comment");
    vs1.push_back("allez");
    vs1.push_back("vous ?");

    cout << "Taille de vs1 : " << vs1.size() << endl;

    cout << endl;

    for (auto x : vs1)
    {
        cout << x << " vs1, print 1" << endl;
    }

    cout << endl;

    cout << "vs1 capacité 1 : " << vs1.capacity() << endl;

    cout << endl;

    vs1.push_back("Bien");
    vs1.push_back("merci.");

    for (auto x : vs1)
    {
        cout << x << " vs1, print 2" << endl;
    }

    cout << endl;

    cout << "vs1 capacité 2 : " << vs1.capacity() << endl;

    cout << endl;

    for (string& x : vs1)
    {
        cout << x << " ";
    }

    cout << endl;

    for (auto x : vs1)
    {
        cout << x << " ";
    }

    cout << endl;

    for (vector<string>::iterator x=vs1.begin(); x!=vs1.end(); ++x)
    {
        cout << *x << " ";
    }

    cout << endl;

    swap(vs1[1], vs1[3]);

    for (auto x : vs1)
    {
        cout << x << " ";
    }

    cout << endl;

    vs1.insert(vs1.begin() + 1, "a tous");

    for (auto x : vs1)
    {
        cout << x << " ";
    }

    cout << endl;

    vs1.pop_back();
    vs1.push_back("???");

    for (auto x : vs1)
    {
        cout << x << ", ";
    }

    cout << endl;

    sort(vs1.begin(), vs1.end());

    for (auto x : vs1)
    {
        cout << x << " ";
    }

    cout << endl;

    afficheString(vs1);

    cout << "Concaténation : " << concatene(vs1) << endl;

    cout << endl;

    for_each(vs1.begin(), vs1.end(), ajouteVirgule);

    cout << "Virguled : ";

    afficheString(vs1);

    return 0;
}
