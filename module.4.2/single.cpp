/*Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class cricketer
{
    public:
    int i,calculate,array1[7];
    void input()
    {
        for(i=0;i<7;i++)
        {
            cout << "Enter  runs : "<< endl;
            cin >> array1[i];
        }
        
    }
    void calculate()
    {
        cout<<"Average runs : "<<array1[i]/7;
    }
};
/*class batsman:public cricketer
{
    int Total,Average,best_performance;
    void Total()
    {
        cout << "Total runs : "<<Total<<endl;
    }
    void Average()
    {
        cout << " Average runs are: "<<Average/7<<endl;
    }
   void best_performance()
    {
        cout<<"Best performance are "
    }

};*/
int main()
{
    cricketer obj1;
    obj1.input();
    obj1.calculate();
   return 0;
}