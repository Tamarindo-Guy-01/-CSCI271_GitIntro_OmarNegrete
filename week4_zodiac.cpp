#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    int bMonth; // birth month
    int bDay; // birth day
    string zodiac;

    cout << "Enter your full name: " << endl;
    getline(cin, fullName);
    cout << "Enter your birth month: " << endl;
    cin >> bMonth;
    cout << "Enter your birth day: " << endl;
    cin >> bDay;

    if ((bMonth == 3 && bDay >= 21) || (bMonth == 4 && bDay <= 19))
        zodiac = "Aries";
    else if ((bMonth == 4 && bDay >= 20) || (bMonth == 5 && bDay <= 20))
        zodiac = "Taurus";
    else if ((bMonth == 5 && bDay >= 21) || (bMonth == 6 && bDay <= 20))
        zodiac = "Gemini";
    else if ((bMonth == 6 && bDay >= 21) || (bMonth == 7 && bDay <= 22))
        zodiac = "Cancer";
    else if ((bMonth == 7 && bDay >= 23) || (bMonth == 8 && bDay <= 22))
        zodiac = "Leo";
    else if ((bMonth == 8 && bDay >= 23) || (bMonth == 9 && bDay <= 22))
        zodiac = "Virgo";
    else if ((bMonth == 9 && bDay >= 23) || (bMonth == 10 && bDay <= 22))
        zodiac = "Libra";
    else if ((bMonth == 10 && bDay >= 23) || (bMonth == 11 && bDay <= 21))
        zodiac = "Scorpio";
    else if ((bMonth == 11 && bDay >= 22) || (bMonth == 12 && bDay <= 221))
        zodiac = "Sagittarius";
    else if ((bMonth == 12 && bDay >= 22) || (bMonth == 1 && bDay <= 19))
        zodiac = "Capricorn";
    else if ((bMonth == 1 && bDay >= 20) || (bMonth == 2 && bDay <= 18))
        zodiac = "Aquarius";
    else if ((bMonth == 2 && bDay >= 19) || (bMonth == 3 && bDay <= 20))
        zodiac = "Pisces";
    cout << "Hello " << fullName << "! Your zodiac sign is: " << zodiac << endl;

    return 0;
}
