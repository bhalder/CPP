#include "iostream"

using namespace std;
class A {

    private : 
        int a;
    public :
        A() {
            cout<<"\nCTOR of A";
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
        
        void print2() {
            cout<<"\nClass A - Print2"<<endl;
        }

        ~A() {
            cout<<"\nDTOR of A";
         }
    // Can be accessed by the class inheriting
    // from this
    protected :
        int b;
};

//class B : private A { // Would produce error
//class B : protected A { // Would produce error 

class B : public A { // Works Fine
    int c;
    public:
        B() {
            c = 300;
            cout<<"\nCTOR of B";
        }

        void print() {
            b = 10;
            cout<<"\nClass B \n b = "<<b;
            cout<<"\nClass B \n c = "<<c<<endl;
        }

        ~B() {
            cout<<"\nDTOR of B";
         } 
};

int main() {
    B b; 
    b.print();
    b.print2();
    return 0;
}
