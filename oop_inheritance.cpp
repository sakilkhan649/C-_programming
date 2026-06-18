
/*
#include <iostream>
using namespace std;

// ১. Parent Class (বাবা ক্লাস বা বেস ক্লাস)
class Vehicle{
public:
    string brand = "Toyota";
    void honk(){
        cout << "Beep Beep! Move away!" << endl;
    }
};

// ২. Child Class (সন্তান ক্লাস)
// এখানে Car ক্লাস Vehicle ক্লাসকে ইনহেরিট করছে

class Car : public Vehicle{
public:
    string model = "Corolla";
};
int main(){

    // আমরা অবজেক্ট বানাচ্ছি সন্তান ক্লাসের (Car)
    Car myCar;

// ম্যাজিক! myCar অবজেক্টটি Car ক্লাসের হলেও, সে তার Parent ক্লাসের honk() ব্যবহার করতে পারছে!
    myCar.honk();

// Parent ক্লাসের brand এবং Child ক্লাসের model একসাথে প্রিন্ট করা
    cout << "My car is a " << myCar.brand << " " << myCar.model << endl;

    return 0;
}
*/
#include<iostream>
using namespace std;
class Person{
public:
    string name = "Sakil";
    void speak(){
        cout << "I can speak!" << endl;
    }
};

class Student : public Person{
public:
    int roll = 683100;
};
int main(){
    Student s1;
    s1.speak();
    cout << "My name: " << s1.name << endl;
    cout << "My roll: " << s1.roll << endl;
    return 0;
}




















