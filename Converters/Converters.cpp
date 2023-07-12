#include <iostream>
#include "AppUI.h"
#include "Converter.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    AppUI ui;

    ui.add(new Converter("м/с в км/ч", [](AppUI* ui) {
        double x = ui->readNumber("скорость в м/с");
        ui->answer(x * 3.6, "км/ч");
    }));

    ui.add(new Converter("часы в минуты", [](AppUI* ui) {
        double x = ui->readNumber("часы");
        ui->answer(x * 60, "мин");
    }));
    
    // Самостоятельное задание: добавить ещё два конвертера

    ui.mainloop();

    return EXIT_SUCCESS;
}