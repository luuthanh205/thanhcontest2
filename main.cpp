#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Problem {
    int id;
    string title;
    string difficulty;
    int point;
};

void displayProblems(const vector<Problem>& list) {
    cout << "========== DANH SÁCH BÀI T?P CONTEST ==========\n";
    for (const auto& p : list) {
        cout << "ID: " << p.id 
             << " | Tên bài: " << p.title 
             << " | Ð? khó: " << p.difficulty 
             << " | Ði?m: " << p.point << endl;
    }
    cout << "===============================================\n";
}

int main() {
    vector<Problem> contest = {
        {1, "Two Sum", "D?", 100},
        {2, "Binary Search", "Trung bình", 200},
        {3, "Dijkstra Algorithm", "Khó", 350},
        {4, "Dynamic Programming Base", "Trung bình", 250}
    };

    cout << "Chuong trình Qu?n lý Contest - Branch Develop\n" << endl;

    sort(contest.begin(), contest.end(), [](const Problem& a, const Problem& b) {
        return a.point < b.point;
    });

    displayProblems(contest);

    return 0;
}
