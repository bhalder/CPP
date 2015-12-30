#include "iostream"

using namespace std;

class singleton {

    private:
        int a = 100;

        singleton() {
        }

        static singleton * ptr;
    public:
        static singleton * get_ptr() {
            if( ptr == NULL ) {
                ptr = new singleton();
            } 

            return ptr;
        }

        void print() {
            cout<<"\nInside Print of Singleton";
            cout<<"\nA = "<<a<<endl;
        }

        void incr_a() {
            this->a++;
        }
};

singleton * singleton :: ptr = NULL;

int main() {
    singleton * first = singleton::get_ptr();
    first->print();

    singleton * second = singleton::get_ptr();
    second->incr_a();
    
    first->print();
}
