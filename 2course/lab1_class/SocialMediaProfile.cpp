#include <iostream>
#include <string>

using namespace std;


class SocialMediaProfile {
private:
    string username, name, surname;
    int followers, follows;
    int date[3];

public:
// без параметров
    SocialMediaProfile() { 
        username  = "";
        name      = "";
        surname   = "";
        followers = follows = date[0] = date[1] = date[2] = 0;
    };
// с параметрами
    SocialMediaProfile(string _un, string _n, string _sn, int _f1, int _f2, int _d[3]) { 
        username   = _un;
        name       = _n;
        surname    = _sn;
        followers  = _f1;
        follows    = _f2;
        memcpy(date, _d, 3 * sizeof(int));
    };
// копирование
    SocialMediaProfile(const SocialMediaProfile &t) {
        username   = t.username;
        name       = t.name;
        surname    = t.surname;
        followers  = t.followers;
        follows    = t.follows;
        memcpy(date, t.date, 3 * sizeof(int)); 
    };
// ostream вывод данных
    void print(ostream &out) const {
        out <<"Юзер: "         << username 
            <<"\nИмя: "        << name
            <<"\nФамилия: "    << surname
            <<"\nПодписчики: " << followers
            <<"\nПодписки: "   << follows
            <<"\nДата рег.: "  
            <<date[0]<<"."<<date[1]<<"."<<date[2];
    };
// istream ввод данных
    void scan(istream &in) {
        if (&in == &cin) {
            cout << "Введите имя пользователя: ";
            in >> username;
            cout << "Введите имя и фамилию: ";
            in >> name >> surname;

        } else {
            in >> username >> name >> surname >> followers
               >> follows >> date[0], date[1], date[2];
        }
    };

// геттер возвращает указатель на массив с датой
    const int* getDate() {
        return date;
    }

// сеттер устанавливает дату
    void setDate(int day, int month, int year) {
        date[0] = day;
        date[1] = month;
        date[3] = year;
    }
};

