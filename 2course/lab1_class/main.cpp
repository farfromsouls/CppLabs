#include <iostream>
#include <string>
#include "SocialMediaProfile.cpp"
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    string username = "юзернейм";
    string name = "имя";
    string surname = "фамилия";
    int date[3] = {31, 12, 1999};

    // конструкторы
    SocialMediaProfile p1;                                            // по умолчанию
    SocialMediaProfile p2(username, name, surname, 12, 21, date);     // с параметрами
    SocialMediaProfile p3(p2);                                        // копирование

    // istream ostream
    p1.scan(cin);
    p1.print(cout);

    // сеттер и геттер
    p1.setDate(1, 2, 2015);
    const int* gottenDate = p1.getDate();

    return 0;
}
