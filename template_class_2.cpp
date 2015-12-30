#include "iostream"

using namespace std;
template <class T, class U>
class A {

    private : 
        T a;
    public :
        A() {
            a = 100;
            b = 200;
        }

        A( T a, U b ) {
            this->a = a;
            this->b = b;
        }      

        void print() {
            cout<<"\nClass A \n a = "<< a;
            cout<<"\nb = "<<b;
        }
    protected :
        U b;
};

int main() {
    A<int, double> a_var = A<int, double>(10, 20.123);

    a_var.print();
 
    return 0;
}
