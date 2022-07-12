# include<iostream>
using namespace std;

class Person{
public:
    int age;
    int weight;
    Person(int a, int b){
        age = a;
        weight =b;
    }

    int indexv(){
        std::cout<< age << " "<< weight<< std::endl;
    }

    ~Person(){
        std::cout<<"die"<<std::endl;
    }
};

class A
{
public:
    virtual void foo()
    {
        cout<<"A::foo() is called"<<endl;
    }
};
class B:public A
{
public:
    void foo()
    {
        cout<<"B::foo() is called"<<endl;
    }
};


class Student :public Person{
public:
    void index(){
        std::cout<< age << " "<< weight<< std::endl;
    }
};

int main(){
    Person* p1 = new Person(33,100);
    p1->indexv();
    delete p1;
    A *a = new B();
    a->foo();   // 在这里，a虽然是指向A的指针，但是被调用的函数(foo)却是B的!
    return 0;
}