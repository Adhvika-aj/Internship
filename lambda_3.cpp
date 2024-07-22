#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    std::vector<int>numbers ={5,6,3,4};
    std::sort(numbers.begin(),numbers.end(),[](int a,int b)
    {
        return a<b;
    });
    std::cout<<"sorted numbers:";
    for(int num:numbers){
        std::cout<<num<<"";
    }
    std::cout<<std::endl;
    return 0;
}