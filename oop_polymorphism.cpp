/*
#include<iostream>
using namespace std;

// ১. Parent Class
class Animal {
public:
    void makeSound(){
        cout << "Animals make different sound." << endl;
    }
};

// ২. Child Class 1
class Dog : public Animal {
public:
    // Parent ক্লাসের একই নামের ফাংশনটি এখানে ওভাররাইড (Override) করা হলো
    void makeSound(){
        cout << "Dog says: Woof! Woof!" << endl;
    }
};
// ৩. Child Class 2
class Cat : public Animal{
public:
    // এখানেও একই নামের ফাংশনটি ওভাররাইড করা হলো
    void makeSound(){
        cout << "Cat says: Meow! Meow!" << endl;
    }
};

int main(){
    Animal myAnimal;
    Dog myDog;
    Cat myCat;
// একই ফাংশন কল করা হচ্ছে, কিন্তু অবজেক্ট অনুযায়ী আউটপুট ভিন্ন হবে!
    myAnimal.makeSound();// আউটপুট: Animals make different sounds.
    myDog.makeSound();// আউটপুট: Dog says: Woof! Woof!
    myCat.makeSound();// আউটপুট: Cat says: Meow! Meow!

    return 0;
}
*/
#include<iostream>
using namespace std;

class Teacher{
public:
    void teach(){
        cout << "I teach students." << endl;
    }
};
class PhysicsTeacher : Teacher{
public:
    void teach(){
        cout << "I teach Physics." << endl;
    }
};
int main(){
    Teacher pt1;
    PhysicsTeacher pt2;

    pt1.teach();
    pt2.teach();

    return 0;
}
