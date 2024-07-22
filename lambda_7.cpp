#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
std::vector<int>numbers={1,3,5,8,10,13};
auto it= std::find_if(numbers.begin(),numbers.end(),[](int n) {
return n%2==0;
});
if(it!=numbers.end()) {
std::cout<<"First even number found: "<<*it<<std::endl;
}
else{
std::cout<<"No even number found"<<std::endl;
}
return 0;
}