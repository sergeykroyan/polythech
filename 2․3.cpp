// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Stack{
    private:
        char *array;
        int top;
        int stack_size;
    public:
        Stack(int size){
            array = new char[size];
            stack_size = size;
            top = -1;
        }

        void push(char n){
            if (sizeof(array) > stack_size){
                cout << "Overflow. Can't push" << endl;
            }
            else{
                cout << "Inserting " << n << endl;
                array[++top] = n;
            }
        }

        int pop(){
            if (sizeof(array) < 1){
                cout << "Stack is empty. Can't pop"  << endl;
                top -= 1;
            }
            else{
                int last = array[top];
                cout <<char(last) << endl;
                array[top--] = ' ';
            }
        }
        void input(){
            if (stack_size-top >= 26){
                for(char i='a'; i<='z'; i++)
                   push(i);
            }
            else{
                cout << "No space for inserting alphabet" << endl;
            }
        }
        
        void show(){
            for(int i=0; i < stack_size; i++){
                cout << array[i] << " ";
            }
        }
};

int main(){
    Stack stack(30);
    stack.input();
 
    stack.push('a');
    stack.push('b');
    stack.push('c');
    stack.pop();
    stack.pop();
 
    stack.push('f');

    
    stack.show();
 
    return 0;
}