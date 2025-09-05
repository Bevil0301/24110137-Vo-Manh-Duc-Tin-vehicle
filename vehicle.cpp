//When approaching this assignment, I started by analyzing the real-world requirements to identify the core entities. The central concept was clearly a "vehicle," which became my main class. I focused on capturing the essential attributes that define a vehicle in a transportation context: type, maximum speed, and later extended it with fuel type.
//The challenge I faced was designing methods that accurately reflect real vehicle behaviors while keeping the implementation simple. For the accelerate() method, I decided to simulate the action rather than implementing complex physics. I also added a displayInfo() method to provide a comprehensive view of each vehicle's properties.
//OOP principles proved incredibly helpful in organizing the code. Encapsulation allowed me to protect the vehicle attributes while providing controlled access through getter methods. The class structure made it easy to create multiple vehicle instances with consistent properties and behaviors.
//I particularly enjoyed the interactive part where users can create their own vehicles. I added input validation for the speed attribute to demonstrate error handling. Testing various scenarios, including edge cases like zero speed, helped me ensure the robustness of the implementation.
//This project reinforced my understanding of how OOP mirrors real-world entities and relationships. The process of transforming requirements into a functional class structure has given me greater confidence in designing object-oriented systems.


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