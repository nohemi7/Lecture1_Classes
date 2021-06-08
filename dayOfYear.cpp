#include <iostream>
// review makefile in previous repos to compile code

using namespace std;

// Make a class that represents dates in any given year
// Field: day, month, year
// Method: setDate(month, day, year), printDateUS(), printDateEU()

class DayofYear {
public:
    // sets mm=month and dd=day
    // Only way user can set date
    void setDate(int month, int date, int year) {
        mm = month;
        dd = date;
        yr = year;
    }

    void printDateUS() {
        cout << mm << "/" << dd << "/" << yr << endl;
    }

    void printDateEU() {
        cout << dd << "." << mm << "." << yr << endl;
    }

private:
    // Information Hiding, making all or most member variables, fields, private
    int mm;
    int dd;
    int yr;

}; // End of Class Definition, remeber to include semi-colon

int main() {
    DayofYear d1;
    d1.setDate(6, 8, 2021);
    d1.printDateEU();
    d1.printDateUS();

    return 0;
}