#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s){
    string hour=s.substr(0,2);
    string minutes=s.substr(3,2);
    string seconds=s.substr(6,2);
    string meridian=s.substr(8,2);
    
    int h=stoi(hour);
    
    if (meridian == "AM") {
        if (h == 12) h = 0;
    } else { 
        if (h != 12) h += 12;
    }

    string militaryHour = (h < 10) ? "0" + to_string(h) : to_string(h);

    return militaryHour + ":" + minutes + ":" + seconds;
}
int main() {
    string s;
    cin >> s;
    cout << timeConversion(s) << endl;
    return 0;
}
