#include <iostream>
#include <thread>
#include <chrono>
using namespace std;


void SimpleThread() {

    for (int i = 0; i < 20; i++) {
        cout << "thread id: " << this_thread::get_id() << "|  SimpleThread number: " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout << "__________" << endl;
    };

}

void SimpleThread2() {

    for (int i = 30; i < 50; i++) {
        cout << "thread id: " << this_thread::get_id() << "|  SimpleThread 2 number: " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
        cout << "__________" << endl;
    };

}

int main() {

    thread th(SimpleThread);
    thread th2(SimpleThread2);

    for (int i = 0; i < 15; i++) {
        cout << "thread id: " << this_thread::get_id() << "|  Main thread number: " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
        cout << "__________" << endl;
    }

    th.join();
    th2.join();

}