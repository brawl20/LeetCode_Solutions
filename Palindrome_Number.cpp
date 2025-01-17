#include <iostream>



class Solution {
public:
    bool isPalindrome(int x) {
        int reverse = 0;
        int temp = x;

        while(temp > 0)
        {
            int remainder = temp % 10;
            reverse = reverse * 10 + remainder;
            temp = temp/10;
        }
        return (reverse == x);
    }
};

int main()
{
    Solution test;

    std::cout << test.isPalindrome(121) << "\n";
    std::cout << test.isPalindrome(-121) << "\n";
    std::cout << test.isPalindrome(10) << "\n";

}