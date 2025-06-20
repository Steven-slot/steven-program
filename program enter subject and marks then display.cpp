// ConsoleApplication48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class school
{
private:
    string subject;
    int marks;
public:
        void user() {
            cout << "enter the subject" << endl;
            cin >> subject;
            cout << "enter the marks" << endl;
            cin >> marks;
        }
        void display() {
            cout << "subject::" << subject << endl;
            cout << "marks::" << marks << endl;

        }
    

};


int main()
{
    for (int i = 0; i < 5; i++) {
        school s;
        s.user();
        s.display();
    }
    
    
}
