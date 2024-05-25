#include <iostream>
#include <string>

using namespace std;

class utilisateur
{
public : 
    void information();
    string name;
    int age;
    string profession;
};

void utilisateur::information()
{
    name = "amir_nafti";
    age = 27;
    profession = "software_engineer";
}

int main()
{
    utilisateur user;
    user.information();
    cout << "Name: " << user.name << endl;
    cout << "Age: " << user.age << endl;
    cout << "Profession: " << user.profession << endl;
    return 0;
}