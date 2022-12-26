#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    int b;
    void operations(int a, int b)
    {
        cout<<"addition is "<<a+b<<endl;
        cout<<"substraction is "<<a-b<<endl;
        cout<<"multiplication is "<<a*b<<endl;
        cout<<"division is "<<a/b<<endl;

    }
    
};
int main()
{
    A obj;
    int a,b;
    cout<<"enter a value of a: ";
    cin>>a;

    cout<<"enter a value of b: ";
    cin>>b;
    
    obj.operations(a,b);
    return 0;
}