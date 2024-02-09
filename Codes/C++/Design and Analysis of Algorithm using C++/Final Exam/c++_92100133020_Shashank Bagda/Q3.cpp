// DAA - Final Exam
// Shashank Bagda - 92100133020
// Question 3

#include <iostream>
#include <sstream>
#include <vector>
#include <string>

std::string shorten_name(std::string name) {
    std::stringstream ss(name);
    std::vector<std::string> words;
    std::string word;
    while (ss >> word) {
        words.push_back(word);
    }

    if (words.size() > 2) {
        std::stringstream new_name;
        new_name << words[0][0] << ". " << words[1][0] << ". " << words.back();
        return new_name.str();
    } else {
        std::stringstream new_name;
        new_name << words[0][0] << ". " << words.back();
        return new_name.str();
    }
}

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Shortened name: " << shorten_name(name) << std::endl;
    return 0;
}