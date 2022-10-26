#include <iostream>
using namespace std;

class Date{
    private:
        int day=0;
        int month=0;
        int year=0;
        
    public:
        Date(){
            cout << "Constructor" <<endl;
        }
        
        Date(int d, int m, int y){
            cout << "Creating date" <<endl;
            day = d;
            month = m;
            year = y;
        }

        void show(){
            cout << "Date: " << day << ":" << month << ":" << year << endl;
        }
        
        bool operator==(Date& x){
            return day==x.day && month==x.month && year==x.year;
        }
};

int main()
{
    Date ob(2,10,2022);
    Date ob1 = ob;  
    ob.show();
    cout << "ob" << endl;
    ob1.show();
    cout << "ob1" << endl;
    cout << (ob==ob1) << endl;

    return 0;
}