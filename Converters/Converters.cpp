#include <iostream>
#include "AppUI.h"
#include "Converter.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    cout << "Convert App" << endl;

    AppUI ui;
    Converter ms2kh("м/с в км/ч", [](AppUI* ui) {
        double x = ui->readNumber("скорость в м/с");
        cout << (x * 3.6) << " км/ч" << endl;
    });
    ui.add(&ms2kh);
    ui.start(0);

    return EXIT_SUCCESS;
}