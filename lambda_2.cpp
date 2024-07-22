#include<iostream>
int main()
{
    int x = 10;
    int y=20;
    auto add=[=](int a){
        return x+y+a;
    };
    std::cout<<"Sum:" <<add(5)<<std::endl;//Output :sum:35
    auto addByRef = [&x,&y](int a)
    {
        x =30;//modifying x
        return x+y+a;
    };
    std::cout<<"Sum by refrences:"<<addByRef(5)<<std::endl;
    std::cout<<"x after modification:"<<x<<std::endl;
    return 0;

}