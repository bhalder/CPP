#include "iostream"

using namespace std;
template <class T>
class A {

    private : 
        T a;
    public :
        A() {
            a = 100;
            b = 200;
        }

        A( T a, T b ) {
            this->a = a;
            this->b = b;
        }      

        void print() {
            cout<<"\nClass A \n a = "<< a;
            cout<<"\nb = "<<b;
        }
    protected :
        int b;
};

int main() {
    A<int> a_var = A<int>(10, 20);

    a_var.print();
 
    return 0;
}
