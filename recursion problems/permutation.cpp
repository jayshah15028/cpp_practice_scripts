// Works but inefficient

#include <iostream>
#include <vector>

std::vector<std::vector<int>> permute(std::vector<int> nums){
    std::vector<std::vector<int>> ans;
        if (nums.size()==1){
            ans.push_back(nums);
            return ans;
        }
        if (nums.size()>1){
            for (int i=0;i<nums.size();i++){
                std::vector<int> remaining_array = nums;
                remaining_array.erase(remaining_array.begin()+i);
                std::vector<std::vector<int>> remaining_permute = permute(remaining_array);
                
                for (int j=0;j<remaining_permute.size();j++){
                    std::vector<int> temp;
                    temp.push_back(nums[i]);
                    for(int k=0; k<remaining_permute[j].size();k++){
                        temp.push_back(remaining_permute[j][k]);
                    }
                    ans.push_back(temp);
                }
                
            }
        }
        return ans;
} 

int main(){

    std::vector<int> array = {1,2,3,4,5};

    std::vector<std::vector<int>> result = permute(array);

    for (int i=0;i<result.size();i++){
        for (int j=0;j<result[i].size();j++){
            std::cout << result[i][j] << " " << std::flush;
        }
        std::cout << "" << std::endl;
    }

    return 0;
}