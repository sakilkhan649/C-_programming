/*
#include<iostream>
using namespace std;

class Smartphone {
public:
    string brand;
    int ram;
// এটি হলো কনস্ট্রাক্টর (নাম হুবহু ক্লাসের নামের মতো)
    Smartphone(string b,int r){
        brand = b;// অবজেক্ট তৈরির সময় পাঠানো নামটা brand-এ সেট হবে
        ram = r;// অবজেক্ট তৈরির সময় পাঠানো র‍্যামটা ram-এ সেট হবে
        cout << brand << " phone is created!" << endl;
    }
    void showDetails(){
        cout << "Brand: " << brand << ", RAM: " << ram << "GB" << endl;
    }
};
int main(){
    // এখন আর আলাদা করে ডট (.) দিয়ে ডাটা ভরতে হবে না।
    // অবজেক্ট বানানোর সময়ই ব্র্যাকেটের ভেতর ডাটা পাঠিয়ে দেওয়া যায়!
    Smartphone phone1("iPhone",8);
    Smartphone phone2("Samsung",12);

    phone1.showDetails();
    phone2.showDetails();

    return 0;
}
*/
#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int roll;
    Student(string n,int r){
        name = n;
        roll = r;
    }
    void display(){
        cout << "Your name is: " << name << endl;
        cout << "Your roll is: " << roll << endl;
    }
};
int main(){
    Student s1("Sakil",683100);

    s1.display();
    return 0;
}
