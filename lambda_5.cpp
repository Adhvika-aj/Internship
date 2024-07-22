#include<iostream>
int main() {
auto divide = [](int a, int b) -> double {
if (b==0) {
return 0;
}
return static_cast<double>(a)/b;
};
std::cout<<"Division result: "<<divide(10,2)<<std::endl;
std::cout<<"Division by zero result: "<<divide(10,0)<<std::endl;
return 0;
}