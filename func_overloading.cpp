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
            cout<<"\nClass A :"<<a;
        }
    protected :
        int b;
};

class B : public A {
    public :
        void print() {
            cout<<"Class B\n";
            
            //A::a = 400; // Generates Error
            A::b = 500;
            A::print();
        }
};

int main() {
    A a = A(10, 20);
    a.print();

    B b = B();
    b.print();
 
    return 0;
}
