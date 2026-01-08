

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

 int main() {
    setlocale(LC_ALL, "RU");

    srand(time(0));
    
    int Zagadka = rand() % 10 + 1;
    int igrok;
    int popitka = 0;

    cout << "Попробуй угадать моё число дружище" << endl;

    do{
        cout << "Пробуй братиш: ";
    cin >> igrok;
    popitka++;
    if (igrok > Zagadka){
        cout << "ой как много" << endl;}
    if (igrok < Zagadka) { 
        cout << "ой как мало" << endl;}
   if (!cin >> igrok) {
        cout << "Ошибка" << endl;
        cin.clear();             // clear сбрасывает оповещние ошибки, а ignore как пылесос, т.е чистит пыль (буфер);
        cin.ignore(10000, '\n');
            continue;}
    
    } while (igrok != Zagadka);
    

    cout << "Красавец угадал: " << Zagadka << endl;
        cout << "ты потратил попыток: " << popitka << endl;


    return 0;
}
    

