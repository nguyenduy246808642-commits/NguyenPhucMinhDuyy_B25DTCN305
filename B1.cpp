#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct Student {
    string name;
    int age;
    double gpa;
};

int main() {
   
    Student students[5];
    
    
    cout << "=== NHAP THONG TIN SINH VIEN ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nSinh vien " << i + 1 << ":" << endl;
        cout << "Ten: ";
        cin.ignore();
        getline(cin, students[i].name);
        
        
        cout << "Tuoi: ";
        while (!(cin >> students[i].age)) {
            cout << "LOI: Tuoi phai la so nguyen! Nhap lai: ";
            cin.clear(); // Xóa flag 
            cin.ignore(10000, '\n'); 
        }
        
       
        if (students[i].age < 0 || students[i].age > 150) {
            cout << "CANH BAO: Tuoi khong hop le!" << endl;
        }
        
        
        cout << "GPA: ";
        while (!(cin >> students[i].gpa)) {
            cout << "LOI: GPA phai la so thuc! Nhap lai: ";
            cin.clear(); 
            cin.ignore(10000, '\n'); 
        }
        
        
        if (students[i].gpa < 0.0 || students[i].gpa > 4.0) {
            cout << "CANH BAO: GPA thuong trong khoang 0.0 - 4.0!" << endl;
        }
    }
    
    
    cout << "\n" << string(60, '=') << endl;
    cout << "DANH SACH SINH VIEN" << endl;
    cout << string(60, '=') << endl;
    cout << left << setw(5) << "STT" 
         << setw(25) << "Ten" 
         << setw(10) << "Tuoi" 
         << setw(10) << "GPA" << endl;
    cout << string(60, '-') << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << left << setw(5) << i + 1
             << setw(25) << students[i].name 
             << setw(10) << students[i].age 
             << setw(10) << fixed << setprecision(2) << students[i].gpa << endl;
    }
    
    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].gpa > students[maxIndex].gpa) {
            maxIndex = i;
        }
    }
    
    cout << "\n" << string(60, '=') << endl;
    cout << "SINH VIEN CO GPA CAO NHAT" << endl;
    cout << string(60, '=') << endl;
    cout << "Ten: " << students[maxIndex].name << endl;
    cout << "Tuoi: " << students[maxIndex].age << endl;
    cout << "GPA: " << fixed << setprecision(2) << students[maxIndex].gpa << endl;
    
}

