// DAA - Final Exam
// Shashank Bagda - 92100133020
// Question 7

#include <bits/stdc++.h>
using namespace std;

std::pair<int, int> findRoomWithSingleAndDoubleRepeat(std::vector<int> &roomNumbers) {
    std::map<int, int> roomRepeatCount;

    for (int roomNumber : roomNumbers) {
        roomRepeatCount[roomNumber]++;
    }

    int singleRepeatRoomNumber = -1;
    int doubleRepeatRoomNumber = -1;

    for (auto &room : roomRepeatCount) {
        if (room.second == 1) {
            singleRepeatRoomNumber = room.first;
        } else if (room.second > 1) {
            doubleRepeatRoomNumber = room.first;
        }
    }

    return std::make_pair(singleRepeatRoomNumber, doubleRepeatRoomNumber);
}

int main() {
    std::vector<int> roomNumbers = {1,2,3,6,5,4,4,2,5,3,6,1,6,5,3,2,4,1,2,5,1,4,3,6,8,4,3,1,5,6,2};
    // cin>>roomNumbers;

    std::pair<int, int> result = findRoomWithSingleAndDoubleRepeat(roomNumbers);

    if (result.first != -1) {
        std::cout << " Captain's Room number is : " << result.first << std::endl;
    } else {
        std::cout << "No room for Captain." << std::endl;
    }

    if (result.second != -1) {
        std::cout << "Total Number of Families : " << result.second << std::endl;
    } else {
        std::cout << "No Families are there." << std::endl;
    }

    return 0;
}