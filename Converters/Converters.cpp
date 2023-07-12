#include <iostream>
#include "AppUI.h"
#include "Converter.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    cout << "Convert App" << endl;

    AppUI ui;

    ui.add(new Converter("�/� � ��/�", [](AppUI* ui) {
        double x = ui->readNumber("�������� � �/�");
        cout << (x * 3.6) << " ��/�" << endl;
    }));

    ui.add(new Converter("���� � ������", [](AppUI* ui) {
        double x = ui->readNumber("����");
        cout << (x * 60) << " ���." << endl;
    }));

    ui.mainloop();

    return EXIT_SUCCESS;
}