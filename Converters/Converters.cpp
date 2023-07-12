#include <iostream>
#include "AppUI.h"
#include "Converter.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    AppUI ui;

    ui.add(new Converter("�/� � ��/�", [](AppUI* ui) {
        double x = ui->readNumber("�������� � �/�");
        ui->answer(x * 3.6, "��/�");
    }));

    ui.add(new Converter("���� � ������", [](AppUI* ui) {
        double x = ui->readNumber("����");
        ui->answer(x * 60, "���");
    }));
    
    // ��������������� �������: �������� ��� ��� ����������

    ui.mainloop();

    return EXIT_SUCCESS;
}