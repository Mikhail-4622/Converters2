#include <iostream>
#include "AppUI.h"
#include "Converter.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    cout << "Convert App" << endl;

    AppUI ui;

    ui.add(new Converter("м/с в км/ч", [](AppUI* ui) {
        double x = ui->readNumber("скорость в м/с");
        cout << (x * 3.6) << " км/ч" << endl;
    }));

    ui.add(new Converter("часы в минуты", [](AppUI* ui) {
        double x = ui->readNumber("часы");
        cout << (x * 60) << " мин." << endl;
    }));

    ui.mainloop();

    return EXIT_SUCCESS;
}