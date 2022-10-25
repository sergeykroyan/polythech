#include <iostream>
#include <typeinfo>
using namespace std;

class Triangle{
    private:
        float himq;
        float h;

    public:

        Triangle(){
            cout<<"constructor"<<endl;
        }

        Triangle(float x, float y){
            cout<<"pahooo"<<endl;
            set(x, y);
        }
        

        ~Triangle(){

        }

        
        void set(float x, float y) {
                himq = x;
                h = y;
                    }

        float area(){
            return 0.5 * himq * h;
                }

        float show() {
            cout<<"area: " << area() <<endl;    
            return area();
                }



};

Triangle input(){
            float x;
            float y;
            cout<<"input base: ";
            cin>>x;

            cout<<"input height: ";
            cin>>y;
            Triangle ladimir(x, y);
            ladimir.show();

            return ladimir;
        }

int main(){
    Triangle puten;
    puten = input();
    cout << typeid(puten).name() << endl;
    return 0;
}