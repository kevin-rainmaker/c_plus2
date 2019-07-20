#include<string>
using namespace std;

class Triangular
{
public:
    Triangular(int len = 1, int beg_pos = 1);

private:
    string _name;
    int _length;
    int _beg_pos;
    int _next;
};
