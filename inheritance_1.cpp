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
    // Can be accessed by the class inheriting
    // from this
    protected :
        int b;
};

class B : public A {
    int c;
    public:
        B(int c, int d) {
            this->c = c;
            //b = d;
        }
        void print() {
            cout<<"\nClass B \n b = "<<b;
            cout<<"\nClass B \n c = "<<c;
        }
};

int main() {
    A * a_ptr = new A();
    A a_var = A(10, 20);
    B b_var = B(40, 50);
    b_var.print();
    a_ptr->print();
    a_var.print();
 
    return 0;
}

/*** OUTPUT ****

bhalder@hammerheadshark:~/Desktop/CPP$ ./inheritance_1 

Class B 
 b = 50
Class B 
 c = 40
Class A 
 a = 100
b = 200
Class A 
 a = 10
b = 20

bhalder@hammerheadshark:~/Desktop/CPP$ vi inheritance_1.cpp 
bhalder@hammerheadshark:~/Desktop/CPP$ g++ inheritance_1.cpp -o inheritance_1
bhalder@hammerheadshark:~/Desktop/CPP$ ./inheritance_1 

Class B 
 b = 200
Class B 
 c = 40
Class A 
 a = 100
b = 200
Class A 
 a = 10
b = 20

*******************/
