// DAA - Final Exam
// Shashank Bagda - 92100133020
// Question 8

#include <bits/stdc++.h>
using namespace std;

int findOccurrences(std::string str, std::string substr) {
    int count = 0;
    int pos = 0;

    while (pos != std::string::npos) {
        pos = str.find(substr, pos);
        if (pos != std::string::npos) {
            count++;
            pos += substr.size();
        }
    }

    return count;
}

int main() {
    std::string str, substr;

    std::cout << "Enter the string: ";
    std::cin >> str;

    std::cout << "Enter the substring: ";
    std::cin >> substr;

    int count = findOccurrences(str, substr);
    std::cout << "The substring '" << substr << "' occurs " << count << " times in the given string." << std::endl;

    return 0;
}