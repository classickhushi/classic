#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    int rollno;
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
    }

};

int main(){
    Person A;
    Person B;
    Person C;
    A.name="khushi";
    A.age=18;
    A.rollno=29;
    B.name="isha";
    B.age=19;
    B.rollno=64;
    C.name="lovleen";
    C.age=23;
    C.rollno=21;
    // cout<<"The age of A is "<<A.age<<" The name of A is "<<A.name<<" The rollno of A is "<<A.rollno;
    A.display();
    B.display();
    C.display();
    return 0;
}