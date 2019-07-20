#include <list>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

template <typename container_type>
void show_container(typename container_type::iterator start, typename container_type::iterator end)
{
    for (auto it = start; it != end; it++)
    {
        cout << *it << endl;
    }
}

int main()
{
    list<int> ilist(1024, -1);
    vector<int> ivec(100, 2);
    vector <string> svec(10, "wangbo");

    cout << "ilist len is " << ilist.size() << endl;
    auto a = ilist.front();
    cout << "a is " << a << endl;
    cout << "ilist len is " << ilist.size() << endl;

    int ia1[7] = {1,1,2,3,5,55,89};
    int ia2[4] = {8,13,21,34};
    list<int> elems(ia1, ia1+7);
    show_container<elems>(elems.begin(), elems.end());
}
