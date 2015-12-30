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

        A( const A& a_var) {
            this->a = a_var.a;
            this->b = a_var.b;
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
    A a_var = A(10, 20);

    A b_var = a_var;
    b_var.print();
 
    return 0;
}
