#include "iostream"

using namespace std;
class A {

    private : 
        int a;
    public :
        A() {
            a = 100;
            b = 200;
        }

        A( int a, int b ) {
            this->a = a;
            this->b = b;
        }      

        void print() {
            cout<<"\nClass A \n a = "<<a;
            cout<<"\nb = "<<b;
        }
    protected :
        int b;
};

int main() {
    A * a_ptr = new A();
    A a_var = A(10, 20);

    a_ptr->print();
    a_ptr->b = 30;
    a_ptr->print();
    a_var.print();
 
    return 0;
}
