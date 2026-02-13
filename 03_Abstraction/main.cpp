#include <iostream>
using namespace std;

class AbstractStudent{
    virtual void AskForGraduation() = 0;
};

class Student:AbstractStudent {
private:
    string Name;
    string University;
    int Age;

public:
    void setName(string name){
        Name = name;
    }

    string getName(){
        return Name;
    }

    void setUniversity(string university){
        University = university;
    }

    string getUniversity(){
        return University;
    }

    void setAge(int age){
        if(age>=18)
        Age = age;
    }

    int getAge(){
        return Age;
    }

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

    void AskForGraduation() override {
        if(Age > 25) {
            cout << Name << " has graduated" << endl;
        } else {
            cout << Name << " sorry NO graduation fot you" << endl;
        }
    }
};

int main()
{
    Student student1 = Student("Elvin", "University of the Philippines", 19); 
    Student student2 = Student("John", "University of Sto Tomas", 26);

    student1.AskForGraduation();
    student2.AskForGraduation();
}