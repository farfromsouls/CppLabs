#include <iostream>
#include <vector>
using namespace std;


struct Laptop {
    string company;
    double weight;
    int cost;
};

void inputLaptop(Laptop& laptop) {
    cout << "company name: ";
    cin >> laptop.company;
    cout << "weight (kg): ";
    cin >> laptop.weight;
    cout << "price: ";
    cin >> laptop.cost;
}

void printLaptop(const Laptop& laptop) {
    cout << "company: " << laptop.company << endl;
    cout << "weight: " << laptop.weight << " kg" << endl;
    cout << "price: " << laptop.cost << " rub" << endl;
}

void fillLaptops(vector<Laptop>& laptops) {
    int n;
    cout << "amount: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Laptop laptop;
        cout << "laptop #" << i + 1 << ":" << endl;
        inputLaptop(laptop);
        laptops.push_back(laptop);
    }
}

void printLaptops(const vector<Laptop>& laptops) {
    cout << "\n\nLaptop list:" << endl;
    for (size_t i = 0; i < laptops.size(); ++i) {
        cout << "\nLaptop #" << i + 1 << ":" << endl;
        printLaptop(laptops[i]);
    }
}

int main() {
    vector<Laptop> laptops;
    fillLaptops(laptops);
    printLaptops(laptops);

    return 0;
}