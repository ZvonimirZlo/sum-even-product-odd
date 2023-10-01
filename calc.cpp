#include <iostream>
#include <vector>

int main(){

int total_even = 0;
int product_odd = 1;

  std::vector<int> nums = {1, 2, 3, 4, 5};

  for(int i = 0; i < nums.size(); i++){
    if(nums[i] % 2 == 0){
      total_even = total_even + nums[i];
    }else{
      product_odd = product_odd * nums[i];
    }
  }
std::cout << total_even << "\n";
std::cout << product_odd << "\n";
}