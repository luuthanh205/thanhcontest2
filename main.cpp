anh yêu em
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Cấu trúc dữ liệu quản lý thí sinh
struct Contestant {
    int id;
    string name;
    double score;
};

// Hàm hiển thị danh sách thí sinh
void printContestants(const vector<Contestant>& list) {
    cout << "\n================ DANH SÁCH THÍ SINH ================\n";
    for (const auto& c : list) {
        cout << "ID: " << c.id 
             << " | Họ tên: " << c.name 
             << " | Điểm số: " << c.score << endl;
    }
    cout << "====================================================\n";
}

int main() {
    // Khởi tạo danh sách thí sinh mẫu
    vector<Contestant> contestants = {
        {101, "Thanh", 9.5},
        {102, "Minh", 8.0},
        {103, "An", 8.8},
        {104, "Linh", 9.0}
    };

    cout << "Chương trình Quản lý Contest - Branch Develop" << endl;

    // Sắp xếp thí sinh theo điểm giảm dần
    sort(contestants.begin(), contestants.end(), [](const Contestant& a, const Contestant& b) {
        return a.score > b.score;
    });

    // In danh sách ra màn hình
    printContestants(contestants);

    return 0;
}
