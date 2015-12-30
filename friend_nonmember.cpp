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
    friend void inside_public(A & a_var) {
        cout<<"\nInside Friend\n";
        a_var.print();
    }
    protected :
        int b;
};
/*
void inside_public(A & a_var) {
    cout<<"\nInside Friend\n";
    a_var.print();    
}
*/
int main() {
    A a_var = A(10, 20);
    inside_public(a_var);
 
    return 0;
}

/**** OUTPUT ****
bhalder@hammerheadshark:~/Desktop/CPP$ g++ friend_nonmember.cpp -o friend_nonmember
bhalder@hammerheadshark:~/Desktop/CPP$ ./friend_nonmember 

Inside Friend

Class A 
 a = 10
b = 20
****************/
