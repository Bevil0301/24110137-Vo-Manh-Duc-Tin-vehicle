#include <iostream>
#include <string>
using namespace std;

// Lớp Vehicle đại diện cho phương tiện giao thông trong thực tế
// với các thuộc tính và phương thức mô phỏng đặc điểm và hành vi
class Vehicle {
private:
    string type;        // Loại phương tiện (xe hơi, xe tải, xe máy)
    int maxSpeed;       // Tốc độ tối đa (km/h)
    string fuelType;    // Loại nhiên liệu (xăng, dầu, điện)

public:
    // Constructor để khởi tạo đối tượng với các thuộc tính
    Vehicle(string t, int speed, string fuel) {
        type = t;
        maxSpeed = speed;
        fuelType = fuel;
    }

    // Phương thức mô phỏng hành vi tăng tốc của phương tiện
    void accelerate() {
        cout << "Chiec " << type << " dang tang toc len " << maxSpeed << " km/h!" << endl;
    }

    // Phương thức hiển thị thông tin đầy đủ về phương tiện
    void displayInfo() {
        cout << "Thong tin phuong tien:" << endl;
        cout << "- Loai: " << type << endl;
        cout << "- Toc do toi da: " << maxSpeed << " km/h" << endl;
        cout << "- Loai nhien lieu: " << fuelType << endl;
        cout << "------------------------" << endl;
    }

    // Getter methods để truy cập thuộc tính private
    string getType() {
        return type;
    }

    int getMaxSpeed() {
        return maxSpeed;
    }

    string getFuelType() {
        return fuelType;
    }
};

int main() {
    // Tạo các đối tượng phương tiện từ lớp Vehicle
    Vehicle car("Xe hoi", 200, "Xang");
    Vehicle truck("Xe tai", 150, "Dau diesel");
    Vehicle motorcycle("Xe may", 180, "Xang");

    // Gọi phương thức accelerate() cho từng đối tượng
    cout << "Hanh vi cua phuong tien" << endl;
    car.accelerate();
    truck.accelerate();
    motorcycle.accelerate();
    cout << endl;

    // Hiển thị thông tin đầy đủ của các phương tiện
    cout << " Thong tin chi tiet " << endl;
    car.displayInfo();
    truck.displayInfo();
    motorcycle.displayInfo();

    // Phần nhập thông tin từ người dùng
    cout << " them phuong tien moi " << endl;
    string userType, userFuel;
    int userSpeed;

    cout << "Nhap loai phuong tien: ";
    getline(cin, userType);
    
    cout << "Nhap toc do toi da (km/h): ";
    cin >> userSpeed;
    cin.ignore(); // Xóa ký tự newline trong buffer
    
    cout << "Nhap loai nhien lieu: ";
    getline(cin, userFuel);

    // Tạo đối tượng mới từ thông tin người dùng nhập
    Vehicle userVehicle(userType, userSpeed, userFuel);
    
    cout << endl << "Phuong tien moi da duoc them vao:" << endl;
    userVehicle.displayInfo();
    userVehicle.accelerate();

    return 0;
}