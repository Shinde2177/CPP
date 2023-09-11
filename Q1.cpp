/*Q1.Write a menu driven program for Date in a C and CPP language.
Declare a structure Date having data members day, month, year.
Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);*/
#include <iostream>
using namespace std;

struct Date
{
    int dd;
    int mm;
    int yyyy;
};

enum Menu
{
    EXIT,
    INITDATE,
    PRINTDATE,
    ACCEPTDATE
};

void initDate(struct Date *ptrDate)
{
    ptrDate->dd = 01;
    ptrDate->mm = 01;
    ptrDate->yyyy = 2023;
}
void printDateOnConsole(struct Date *ptrDate)
{
    cout << "Date=" << ptrDate->dd << "/" << ptrDate->mm << "/" << ptrDate->yyyy << endl;
}
void acceptDateFromConsole(struct Date *ptrDate)
{
    cout << "Enter Year=" << endl;
    cin >> ptrDate->yyyy;
    cout << "Enter Month=" << endl;
    cin >> ptrDate->mm;
    cout << "Enter Day=" << endl;
    cin >> ptrDate->dd;
   
}

int menu(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.initDate" << endl;
    cout << "2.Print Date On Consol" << endl;
    cout << "3.Accept Date" << endl;
    cout << "Enter Choice" << endl;
    cin >> choice;
    return choice;
}

int main()
{
    struct Date d1;

    int choice;

    while ((choice = menu() )!= 0)
    {
        switch (choice)
        {
        case INITDATE:
            initDate(&d1);
            break;
        case PRINTDATE:
            printDateOnConsole(&d1);
            break;
        case ACCEPTDATE:
            acceptDateFromConsole(&d1);
            break;
        default:
            cout << "please enter valid choice" << endl;
        }
    }
}