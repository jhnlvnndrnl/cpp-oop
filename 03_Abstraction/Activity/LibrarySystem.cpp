#include <iostream>
using namespace std;

class LibraryUser{
    virtual void BorrowBook() = 0;
    virtual void ReturnBook() = 0;
};

class Student: public LibraryUser{
private:
    string Name;
    int daysUsed;
    int Limit;

public:
    Student(string name, int days, int limit){
        Name = name;
        daysUsed = days;
        Limit = limit;
    }

    void BorrowBook() override {
        cout << "Student " << Name << " borrowed a book for " << Limit << " days." << endl;
    }

    void ReturnBook() override {
        int Time = Limit-daysUsed;
        if(daysUsed >= Limit){
            cout << "Student " << Name << " returned the book"<< endl;
        } else {
            cout << "Student " << Name << " has " << Time << " days left"<< endl;
        }
    }
};

class Teacher: public LibraryUser{
private:
    string Name;
    int daysUsed;
    int Limit;

public:
    Teacher(string name, int daysused, int limit){
        Name = name;
        daysUsed = daysused;
        Limit = limit;
    }

    void BorrowBook() override {
        cout << "Teacher " << Name << " borrowed a book for " << Limit << " days." << endl;
    }

    void ReturnBook() override {
        int Time = Limit-daysUsed;
        if(daysUsed >= Limit){
            cout << "Teacher " << Name << " returned the book"<< endl;
        } else {
            cout << "Teacher " << Name << " has " << Time << " days left"<< endl;
        }
    }
};

int main(){
    Student* s = new Student("Elvin", 10, 30);
    Teacher* t = new Teacher("Mrs. Santos", 30, 30);

    s->BorrowBook();
    s->ReturnBook();

    t->BorrowBook();
    t->ReturnBook();

    delete s;
    delete t;
}