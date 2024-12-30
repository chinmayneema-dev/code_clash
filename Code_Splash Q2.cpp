#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int countMagicalSubarrays(int arraySize, int divisor, vector<int>& nums) {

    int magicalSubarraysCount = 0;
    long long runningSum = 0;
    

    unordered_map<int, int> remainderFrequency;
    

    remainderFrequency[0] = 1;
    

    for (int i = 0; i < arraySize; i++) {

        runningSum += nums[i];
        

        int remainder = runningSum % divisor;
        

        if (remainder < 0) {
            remainder += divisor;
        }
        


        magicalSubarraysCount += remainderFrequency[remainder];
        

        remainderFrequency[remainder]++;
    }
    
    return magicalSubarraysCount;
}

int main() {
    int arraySize, divisor;
    cin >> arraySize >> divisor;
    
    vector<int> nums(arraySize);
    for (int i = 0; i < arraySize; i++) {
        cin >> nums[i];
    }
    
    cout << countMagicalSubarrays(arraySize, divisor, nums) << endl;
    
    return 0;
}

