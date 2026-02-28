#include<bits/stdc++.h>
using namespace std;


// Function to find the majority element
int majorityElement(vector<int>& nums) {
 int n = nums.size();     // Get the size of the array
   int majority = -1;            // Initialize result to -1 (assume no majority)


   // Loop through each element in the array
   for (int i = 0; i < n; i++) {
       int count = 1;       // Start counting occurrences of nums[i]


       // Count how many times nums[i] appears in the rest of the array
       for (int j = i + 1; j < n; j++) {
           if (nums[j] == nums[i])
               count++;
       }


       // If count is more than n/2, it's the majority element
       if (count > n / 2)
           majority = nums[i];
   }


   // Return the result (may still be -1 if no majority element found)
   return majority;
}


int main() {
   // Sample input
   vector<int> nums = {2, 2, 1, 1, 2, 2, 2};


   // Call the majorityElement function
   int result = majorityElement(nums);


   // Output the result
   if (result != -1)
       cout << "Majority element is: " << result << endl;
   else
       cout << "No majority element found." << endl;


   return 0;
}