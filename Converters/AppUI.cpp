#include <iostream>
#include "AppUI.h"
#include "Converter.h"


AppUI::~AppUI() {
    for (auto converter : converters) {
        delete converter;
    }
}

void AppUI::add(Converter* converter) {
    converters.push_back(converter);
}

void AppUI::start(int index) {
    cls();
    Converter* converter = converters[index];
    converter->start(this);
}

void AppUI::printList() {
    std::cout << "Список доступных конвертеров:" << std::endl;
    for (int i = 0; i < converters.size(); i++) {
        Converter* converter = converters[i];
        std::cout << (i + 1) << " - ";
        std::cout << converter->getName() << std::endl;
    }
    std::cout << (converters.size() + 1) << " - выход" << std::endl;
}

void AppUI::mainloop() {
    while (true) {
        cls();
        printList();
        int cmd;
        while (true) {
            std::cout << "> ";
            std::cin >> cmd;
            if (cmd < 1 || cmd > converters.size()) {
                if (cmd == converters.size() + 1) {
                    return;
                }
                std::cerr << "такого пункта нет в списке" << std::endl;
                continue;
            }
            break;
        }
        start(cmd - 1);
        std::cout << "\nНажмите Enter чтобы продолжить" << std::endl;
        std::string s;
        std::cin.ignore(1, '\n');
        std::getline(std::cin, s);
    }
}

void AppUI::cls() {
    system("cls");

    std::cout << "Convert App" << std::endl;
    std::cout << std::endl;
}
double AppUI::readNumber(std::string prompt) {
    std::cout << "Введите " << prompt << ": ";
    double x;
    std::cin >> x;
    return x;
}

void AppUI::answer(double value, std::string suffix) {
    std::cout << "Ответ: " << value << " " << suffix << std::endl;
}