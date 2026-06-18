#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int roll;

public:

    void setRoll(int r){
        if(r>0){
            roll = r;
        }else{
            cout << "Invalid Roll Number!" << endl;
        }
    }

    void setName(string n){
        name = n;
    }

    int getRoll(){
        return roll;
    }
    string getName(){
        return name;
    }
};

int main(){
    Student s1;
    s1.setName("Sakil");
    s1.setRoll(683100);

    cout << "Student Name: " << s1.getName() << endl;
    cout << "Student Roll: " << s1.getRoll() << endl;

    s1.setRoll(-50);

    return 0;
}
