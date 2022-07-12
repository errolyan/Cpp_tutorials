# include<iostream>
#include "sum.h"

using namespace std;

int sum(int a,int b){
    int c;
    c = a+b;
    return c;
}
void Multipaly(){
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<i+1;j++){
            printf("%d x %d = %d  ",i,j,i*j);
        }
        cout<<"\n";
    }
}

void testwhile(int aa=10){
    while(true)
    {
        cout << aa<<endl;
        aa--;
        if(aa==0){
            break;
        }
    }
}

void myPtr()  // 学习指针
{
    int tets = 9;

    int* numPtr = nullptr;
    int** numptr2 = nullptr;

    numPtr = &tets;
    numptr2 = &numPtr;
    cout<<tets<<" 指针地址为:"<< numptr2<<" 指针指向的值是:"<< *numPtr << " 二级指针最终指向的值是:"<<**numptr2<< endl;
}

int main(){
    // 数据类型
    char test = 'A';
    cout<<test<<" "<<sizeof(test)<<endl;

    bool test2 = false;
    cout<<test2<<" "<< sizeof(test2)<<endl;

    int num = 21474836474;
    cout<<num<<" "<< sizeof(num)<<endl;

    float num2 = 9.16666668f;
    cout<<num2<<" "<< sizeof(num2)<<endl;

    double bb = 9.16;
    cout<< bb <<" "<< sizeof(bb)<<endl;
    
    cout<<"hello world"<<endl;
    int a = 1;
    for (;a<10;a++){
        cout<<a<<endl;
    }
    int m =10;
    int n = 9;
    
    cout<<sum(m,n)<<endl;

    //九九格
    Multipaly();

    // 测试while
    testwhile();
    
    // 测试指针
    myPtr();
    return 0;
}