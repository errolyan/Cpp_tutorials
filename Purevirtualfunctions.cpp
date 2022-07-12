// 学习纯虚函数
# include <iostream>
# include <array>
# include<string>

class Person{
public:
    int age;
    int weight;
    virtual int healthV()=0;

private:
    int money = 1000;

protected:
    int friends = 1;
};

class Sutdent:public Person {
private:
    int money = 1000;
public:
    Sutdent(int m,int n){
        age = m;
        weight = n;
        std::cout<<money<<std::endl;
    }
    int healthV(){
        double result = age*weight*2;
        std::cout<<"Sutdent "<<friends << " "<< money <<std::endl;

        return result;
    }
};

class Teacher :public Person {
public:
    mutable int aa = 1;  // 可以在const修饰的函数中修改
    Teacher(int m,int n){
        age = m;
        weight = n;
    }

    int healthV(){
        double result = age*weight/2;
        std::cout<<"teacher"<<std::endl;

        return result;
    }
    int test() const {  //const修饰的类方法是无法改变属性值的
        // age = 101; // 这样报错
        aa = 100;
        return 2;
        }

};

void print(Person* p){
    int result = p->healthV();
    std::cout<<result<<std::endl;
}

int main(){
    Sutdent *s = new Sutdent(20,30);
    Teacher *t = new Teacher(80,40);
    print(s);
    print(t);

    // 数组
    int arr[10];
    int att[10];
    int* myarr = new int[10];
    std::array<int, 10> marr;
    for(int i=0;i<10;i++){
        arr[i]=100;
        *(att+i) = 99;
        *(myarr+i) = 88;
        *(marr.data()+i) = 66;
    }

    for(int i=0;i<10;i++){
        std::cout<< arr[i]<<std::endl;
        std::cout<<*(att+i)<<std::endl;
        std::cout<<*(myarr+i)<<std::endl;
        std::cout<<*(marr.data()+i)<<std::endl;
    }
    std::cout <<"数组的地址" << arr <<" 数组的第一个值是"<< *arr << " 数组的第一个值是"<< *att << *myarr<<std::endl;

    // 字符串
    char new2[6] = "hello";
    std::cout<<new2[5]<<std::endl;

    const char* str = "yanerle";
    std::cout<<str[6]<<str<<std::endl;

    std::string str2 = "new world";
    std::cout << str2.append("yaner")<< str2<<std::endl;
    
    // 替换
    const char* replaceChar = "%";
    while(str2.find("l")!=str2.npos){
        int index = str2.find("l");
        str2.replace(index,1,replaceChar);
    }

    std::cout<<str2<<std::endl;

    // 拼接
    std::string  str3 = std::string("yanerle") + std::string("zhaowenjiao");
    std::cout << str3<<std::endl;

    // const
    const int a = 9;
    const int* aptr = &a;  // 指针指向一个const类型的数据的地址
    int c = 1;
    int* const bptr = &c;
    *bptr = 4;
    std::cout<< *aptr<<" "<<*bptr<<" "<<c<<std::endl;
    return 0;
}