#include <iostream>
using namespace std;

class Student {
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
};

int main()
{
    Student student1 = Student("Elvin", "University of the Philippines", 19); 
    student1.IntroduceYourSelf();

    Student student2 = Student("John", "University of Sto Tomas", 20);
    student2.IntroduceYourSelf();

    student1.setAge(25);
    cout << student1.getName() << " is " << student1.getAge() << " years old" << endl;

}