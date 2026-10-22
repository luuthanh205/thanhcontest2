#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Cấu trúc dữ liệu bài tập Contest
struct Problem {
    int id;
    string title;
    string difficulty;
    int point;
};

// Hàm hiển thị danh sách bài tập
void displayProblems(const vector<Problem>& list) {
    cout << "========== DANH SACH BAI TAP CONTEST ==========\n";
    for (const auto& p : list) {
        cout << "ID: " << p.id 
             << " | Ten bai: " << p.title 
             << " | Do kho: " << p.difficulty 
             << " | Diem: " << p.point << endl;
    }
    cout << "===============================================\n";
}

int main() {
    vector<Problem> contest = {
        {1, "Two Sum", "De", 100},
        {2, "Binary Search", "Trung binh", 200},
        {3, "Dijkstra Algorithm", "Kho", 350},
        {4, "Dynamic Programming Base", "Trung binh", 250}
    };

    cout << "Chuong trinh Quan ly Contest - Branch Develop\n" << endl;

    sort(contest.begin(), contest.end(), [](const Problem& a, const Problem& b) {
        return a.point < b.point;
    });

    displayProblems(contest);

    return 0;
}