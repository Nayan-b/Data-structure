#include <iostream>
using namespace std;
class Test
{
     public:
        Test()
        {
            cout << "Constructor called..." <<endl;
        }
        ~Test()
        {
            cout << "Destructor called!!" <<endl;
        }
};
int main( )
{
     Test* t = new Test[3];
     delete [] t;        // Delete array
     return 0;
}
