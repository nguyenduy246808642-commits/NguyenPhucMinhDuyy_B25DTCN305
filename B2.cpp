#include <iostream>
#include <map>
#include <string>
#include <iomanip>
using namespace std;

int main() {
   
    map<string, double> studentScores;
    
   
    cout << "=== NHAP THONG TIN HOC SINH ===" << endl;
    for (int i = 0; i < 5; i++) {
        string id;
        double score;
        
        cout << "\nHoc sinh " << i + 1 << ":" << endl;
        cout << "Ma hoc sinh: ";
        cin >> id;
        cout << "Diem: ";
        cin >> score;
        
        studentScores[id] = score;
    }

    cout << "\n" << string(50, '=') << endl;
    cout << "DANH SACH HOC SINH VA DIEM" << endl;
    cout << string(50, '=') << endl;
    cout << left << setw(20) << "Ma hoc sinh" 
         << setw(15) << "Diem" << endl;
    cout << string(50, '-') << endl;
    
    map<string, double>::iterator it;
    for (it = studentScores.begin(); it != studentScores.end(); it++) {
        cout << left << setw(20) << it->first 
             << setw(15) << fixed << setprecision(2) << it->second << endl;
    }
    
    double total = 0;
    for (it = studentScores.begin(); it != studentScores.end(); it++) {
        total += it->second;
    }
    double average = total / studentScores.size();
    
    cout << "\n" << string(50, '=') << endl;
    cout << "DIEM TRUNG BINH: " << fixed << setprecision(2) << average << endl;
    
    string maxId;
    double maxScore = -1;
    
    for (it = studentScores.begin(); it != studentScores.end(); it++) {
        if (it->second > maxScore) {
            maxScore = it->second;
            maxId = it->first;
        }
    }
    
    cout << "\n" << string(50, '=') << endl;
    cout << "HOC SINH CO DIEM CAO NHAT" << endl;
    cout << string(50, '=') << endl;
    cout << "Ma hoc sinh: " << maxId << endl;
    cout << "Diem: " << fixed << setprecision(2) << maxScore << endl;
    
    return 0;
}
