
class Matrix
{
public:
    Matrix(int row, int col):_row(row), _col(col)
    {
        _pmat = new double[row*col];
    }

    Matrix(const Matrix& rhs):_row(rhs._row), _col(rhs._col)
    {
        int elem_cnt = _row * _col;
        _pmat = new double[elem_cnt];
        for (int i = 0; i < elem_cnt; i++) {
            _pmat[i] = rhs._pmat[i];
        }
    }

    ~Matrix()
    {
        delete[] _pmat;
    }

private:
    int _row, _col;
    double* _pmat;
};


int main(int argc, char const *argv[]) {
    Matrix mat1(4,5);
    {
        Matrix mat2 = mat1;
    }
    return 0;
}
