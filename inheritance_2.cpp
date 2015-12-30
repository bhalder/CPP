#include "iostream"

using namespace std;

class Z {

    public:
        Z() {
            cout<<"\nCTOR of Z";
        }

        ~Z() {
            cout<<"\nDTOR of Z";
        }

};

class A :public Z{

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

        ~A() {
            cout<<"\nDTOR of A";
         }
    // Can be accessed by the class inheriting
    // from this
    protected :
        int b;
};

class B : public A {
    int c;
    public:
        B() {
            c = 300;
            cout<<"\nCTOR of B";
        }

        void print() {
            cout<<"\nClass B \n b = "<<b;
            cout<<"\nClass B \n c = "<<c;
        }

        ~B() {
            cout<<"\nDTOR of B";
         } 
};

int main() {
    B b; 
    return 0;
}
