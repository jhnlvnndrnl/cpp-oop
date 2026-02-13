/*
    UserAccount Class - Encapsulation Activity

    Description:
    This program demonstrates the concept of encapsulation in C++.
    The UserAccount class hides sensitive data such as username,
    password, email, and login status by declaring them as private.

    Access to these data members is controlled through public
    methods such as login(), logout(), and getters. 
    Validation is applied to ensure data integrity
    and security.

    This simulates a simple authentication system where
    user credentials and login state cannot be modified
    directly from outside the class.

    Concepts Practiced:
    - Encapsulation
    - Access Modifiers (private/public)
    - Data Validation
    - Object-Oriented Programming
*/

#include <iostream>
using namespace std;

class UserAccount{
private:
    string userName;
    string Password;
    string Email;
    bool isLoggedIn;

public:
    void setName(string name){
        userName = name;
    }

    string getName(){
        return userName;
    }

    bool isAuthenticated(){
        return isLoggedIn;
    }

    // In real authentication systems, you NEVER expose the password and email.

    UserAccount(string username, string password, string email){
        userName = username;
        Password = password;
        Email = email;
        isLoggedIn = false;
    }

    void Login(string username, string password){
        if(userName == username && Password == password){
            isLoggedIn = true;
            cout << "Login successful\n";
        } else {
            cout << "Invalid credentials\n";
        }
    }

    void logout(){
        isLoggedIn = false;
        cout << "Logged out successfully\n";
    }
};

int main(){
    UserAccount account1 = UserAccount("Elvin", "12345", "jeendrenal.dev@gmail.com");

    account1.Login("Elvin", "12345");
    cout << account1.isAuthenticated() << endl;

    account1.logout();
}