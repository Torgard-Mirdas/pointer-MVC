#include <iostream>
#include "clicker_view.h"

void ClickerView::displayPoints(int points) {
    std::cout << "Zdobyłeś punkt! Aktualna liczba punktów: " << points << "\n";
}

void ClickerView::displayInvalidInputMessage() {
    std::cout << "Niepoprawne wejście. Kliknij 'b' aby zdobyć punkt lub 'e' aby wyjść.\n";
}

void ClickerView::displayExitMessage() {
    std::cout << "Wyjście z programu...\n";
}
