#include <iostream>
#include "AppUI.h"
#include "Converter.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    cout << "Convert App" << endl;

    AppUI ui;
    Converter ms2kh("�/� � ��/�", [](AppUI* ui) {
        double x = ui->readNumber("�������� � �/�");
        cout << (x * 3.6) << " ��/�" << endl;
    });
    ui.add(&ms2kh);
    ui.start(0);

    return EXIT_SUCCESS;
}