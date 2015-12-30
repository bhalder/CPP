#include "iostream"

using namespace std;
class A {

    private : 
        int a;
    public :
        A() {
            a = 100;
        }

        A( int a ) {
            this->a = a;
        }      

        void print() {
            cout<<"\nClass A :"<<a;
        }
};

int main() {
    A * a_ptr = new A();
    A a_var = A(10);

    a_ptr->print();
    a_var.print();
 
    return 0;
}
