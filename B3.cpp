#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

// Ð?nh ngh?a c?u trúc Contact
struct Contact {
    string name;
    string phone;
};

int main() {
    // S? d?ng vector ð? lýu tr? 10 liên l?c
    vector<Contact> contacts;
    
    // Nh?p thông tin cho các liên l?c
    cout << "=== NHAP THONG TIN LIEN LAC ===" << endl;
    for (int i = 0; i < 10; i++) {
        Contact c;
        cout << "\nLien lac " << i + 1 << ":" << endl;
        cout << "Ten: ";
        cin.ignore();
        getline(cin, c.name);
        cout << "So dien thoai: ";
        getline(cin, c.phone);
        
        contacts.push_back(c);
    }
    
    // In ra t?t c? các liên l?c
    cout << "\n" << string(60, '=') << endl;
    cout << "DANH BA DIEN THOAI" << endl;
    cout << string(60, '=') << endl;
    cout << left << setw(5) << "STT" 
         << setw(30) << "Ten" 
         << setw(20) << "So dien thoai" << endl;
    cout << string(60, '-') << endl;
    
    for (int i = 0; i < contacts.size(); i++) {
        cout << left << setw(5) << i + 1
             << setw(30) << contacts[i].name 
             << setw(20) << contacts[i].phone << endl;
    }
    
    
    cout << "\n=== TIM KIEM LIEN LAC ===" << endl;
    cout << "Nhap tu khoa tim kiem: ";
    string keyword;
    cin.ignore();
    getline(cin, keyword);
    
    cout << "\n" << string(60, '=') << endl;
    cout << "KET QUA TIM KIEM" << endl;
    cout << string(60, '=') << endl;
    
    bool found = false;
    for (int i = 0; i < contacts.size(); i++) {
        // T?m t? khóa trong tên (không phân bi?t hoa thý?ng)
        if (contacts[i].name.find(keyword) != string::npos) {
            cout << "Ten: " << contacts[i].name << endl;
            cout << "So dien thoai: " << contacts[i].phone << endl;
            cout << string(60, '-') << endl;
            found = true;
        }
    }
    
    if (!found) {
        cout << "Khong tim thay lien lac nao!" << endl;
    }
    
    return 0;
}
