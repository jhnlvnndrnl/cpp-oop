#include <iostream>
using namespace std;

class Student {
public:
    string Name;
    string University;
    int Age;

    void IntroduceYourSelf(){ 
        cout << "Name - " << Name << endl;
        cout << "University - " << University << endl;
        cout << "Age - " << Age << endl;
    }

    Student(string name, string university, int age){
        Name = name;
        University = university;
        Age = age;
    }
};

int main()
{
    Student student1 = Student("Elvin", "University of the Philippines", 19); 
    student1.IntroduceYourSelf();

    Student student2 = Student("John", "University of Sto Tomas", 20);
    student2.IntroduceYourSelf();
}