
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


Triangular::Triangular(int len, int bp):_name("Triangular"){
  _length = len > 0 ? len : 1;
  _beg_pos = bp > 0 ? bp : 1;
  _next = _beg_pos - 1;
}

int main(int argc, char const *argv[]) {
  Triangular t;
  return 0;
}
