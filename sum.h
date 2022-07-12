# pragma once  //只编译一次
# include<iostream>

int sum(int ,int);
void Multipaly();

void myPtr();

class human{
    public:
        static int a ;
        int b = 1;
        int c;

        human(int m,int n){
            b = m;
            c = n;
        }
        int move()
        {
            a = a+1;
            b = b+1;
            return a+b;
        }

        // 静态成员函数只能操作静态的变量
        static int print(){
            std::cout <<"当前的静态变量:"<< a<< std::endl;
            return a;
        }
        ~human(){
            std::cout<<"done"<<std::endl;
        }
};

int myage = 100;
int human::a=100;

