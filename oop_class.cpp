
/*
#include<iostream>
using namespace std;
// ১. এখানে আমরা 'Smartphone' নামে একটি ক্লাস (নকশা) তৈরি করলাম
class Smartphone{
public:// 'public' দিলে এই ক্লাসের ভেতরের জিনিসগুলো main ফাংশন থেকে ব্যবহার করা যায়
    string brand;// সি++ এ সরাসরি string ব্যবহার করা যায়, ক্যারেক্টার অ্যারে লাগে না
    int ram;

// ক্লাসের ভেতরের ফাংশন (এদের মেম্বার ফাংশন বা মেথড বলে)
    void showDetails(){
        cout << "Brand: " <<brand << endl;
        cout << "RAM: " << ram << " GB" << endl;
    }
};

int main(){
    // ২. এবার Smartphone ক্লাসের একটি আসল অবজেক্ট তৈরি করলাম, যার নাম 'myPhone'
    Smartphone myPhone;
// ৩. ডট (.) অপারেটর দিয়ে অবজেক্টের ভেতরে মান বসালাম
    myPhone.brand = "iPhone";
    myPhone.ram = 8;
// ৪. অবজেক্টের ভেতরের ফাংশনটিকে কল করলাম
    myPhone.showDetails();

    return 0;
}
*/
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;

    void display(){
        cout << "Your name is: " << name << endl;
        cout << "Your roll is: " << roll << endl;
    }
};

int main(){
    Student s1;

    s1.name= "Sakil";
    s1.roll = 683100;

    s1.display();

    return 0;
}
