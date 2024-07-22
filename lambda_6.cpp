#include<iostream>
#include<vector>
#include<algorithm>
int main() {
std::vector<int>numbers={1,2,3,4,5};
std::for_each(numbers.begin(),numbers.end(),[](int n){
std::cout<<n<<" ";
});
std::cout<<std::endl;
return 0;
}`