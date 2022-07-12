# include<iostream>

// this
class Human
{
    public:
        int age ;
        int weight ;

        Human(int age, int weight)
        {
            this->age = age;
            this->weight = weight;
            std::cout << this<<std::endl;
        }

        void test(){
            std::cout << this<<std::endl;
        }
};

int main(){
    int a;
    std::cin >> a;
    if (a > 0){
        std::cout<<a << std::endl;
    }
    else if(a<=0){
        std::cout<<a << std::endl;
    }
    a>0? std::cout<<"大数"<< std::endl:std::cout<<"小数" << std::endl;

    Human h1(20,80);
    h1.test();

    Human* h2 = new Human(30,100);
    h2->test();
    return 0;
}