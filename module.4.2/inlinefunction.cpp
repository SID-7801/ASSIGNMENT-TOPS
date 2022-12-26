#include <iostream>
using namespace std;
class math
{
public:
    void multiplication(int a, int b)
    {
        cout << "multiplication " << a * a << endl;
    }
    void cubic(int a)
    {
        cout << "cubic : " << a * a * a;
    }
};
int main()
{
    math obj;
    obj.multiplication(3, 7);
    obj.cubic(40);
    return 0;
}