#include "iostream"

using namespace std;
class A {

    private : 
        int a;
        friend class B;
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

class B {

    public:
        void print(A a) {
            a.b = 5000;
            a.a = 6000;
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

bhalder@hammerheadshark:~/Desktop/CPP$ g++ friend_class_2.cpp -o friend_class_2
bhalder@hammerheadshark:~/Desktop/CPP$ ./friend_class_2 

Class A 
a = 6000
b = 5000

****************/
