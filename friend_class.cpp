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

    friend class B;

    protected :
        int b;
};

class B {

    public:
        void print(A a) {
            a.b = 5000;
            a.print();
        }
};

int main() {
    A a_var = A(10, 20);
    B b;
    b.print( a_var );
    return 0;
}

/**** OUTPUT ****

bhalder@hammerheadshark:~/Desktop/CPP$ g++ friend_class.cpp -o friend_class
bhalder@hammerheadshark:~/Desktop/CPP$ ./friend_class 

Class A 
a = 10
b = 5000

****************/
