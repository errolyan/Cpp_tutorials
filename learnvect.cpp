#include <iostream>
#include<string>
# include<vector>

typedef void (*func)();

namespace A{
    void test()
    {
        std::cout<<"A"<<std::endl;
    }
}

namespace B{
    void test(){
        std::cout<<"B"<<std::endl;
    }
}

void Printable()
{
    std::cout<< "test"<<std::endl;
}

void Prit(func fc)
{
    fc();
}

int main()
{
    func fc = Printable;

    std::vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    for (int& i :vec){
        std::cout<<i<<std::endl;
    }
    std::cin.get();

    // 浅拷贝
    int* a = new int(1);
    int*b = a;
    *b = 2;
    std::cout<<*b<<" "<<*a<<std::endl;

    // 函数指针
    Prit(fc);

    //命名空间
    A::test();
    B::test();


    return 0;
}