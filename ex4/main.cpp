#include <iostream>
#include <string>

using namespace std;

// Engine class
class Engine {
    // Implementation details
};

// Fueltank class
class Fueltank {
private:
    int m_FueltankCapacity; // 容量
    int m_Gas_grade;        // 汽油品質

public:
    // Constructor
    Fueltank(int capacity, int gas_grade) : m_FueltankCapacity(capacity), m_Gas_grade(gas_grade) {}

    // Getter methods
    int getCapacity() {
        return m_FueltankCapacity;
    }

    int getGasGrade() {
        return m_Gas_grade;
    }

    // Setter methods
    void setCapacity(int capacity) {
        m_FueltankCapacity = capacity;
    }

    void setGasGrade(int gas_grade) {
        m_Gas_grade = gas_grade;
    }
};

class Car {
private:
    Engine m_Engine;
    Fueltank m_Fueltank;
    int m_MaxSeating;
    int m_price;
    int m_base;
    string m_brand;
    string m_model;
    int m_year;

    // Method to update the price
    void m_UpdatePrice(int base = 500000) {
        // Implementation details
    }

public:
    // Constructor
    Car(string brand, string model, int year, int price, int fueltankCapacity, int gasGrade)
        : m_brand(brand), m_model(model), m_year(year), m_price(price),
          m_Fueltank(fueltankCapacity, gasGrade) {
        // Initialize other members
    }

    // Getter methods
    string get_brand() {
        return m_brand;
    }

    int get_Gas_grade() {
        return m_Fueltank.getGasGrade();
    }

    // Setter methods
    void set_Gas_grade(int gasGrade) {
        m_Fueltank.setGasGrade(gasGrade);
    }

    // Other methods
    void fuel_up(int v, int gasGrade) {
        if (v > m_Fueltank.getCapacity()) {
            cout << "Error: FueltankCapacity: " << m_Fueltank.getCapacity() << " but fuel up: " << v << endl;
            return;
        }

        if (gasGrade != m_Fueltank.getGasGrade()) {
            cout << "Error: Gas_grade: " << gasGrade << " Correct Gas_grade: " << m_Fueltank.getGasGrade() << endl;
            return;
        }

        // Implement fueling up process here...
        cout << "fuel_up: " << v << " Gas_grade: " << gasGrade << endl;
    }
};

int main() {
    // 使用範例
    Car car_2("A1", "Audi", 2021, 2, 3000, 98);
    cout << car_2.get_brand() << " : Gas_grade = " << car_2.get_Gas_grade() << endl;
    car_2.set_Gas_grade(95);
    cout << car_2.get_brand() << " : Gas_grade = " << car_2.get_Gas_grade() << endl;
    car_2.fuel_up(300, 95);
    
    return 0;
}

