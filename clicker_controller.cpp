#include <iostream>
#include "clicker_controller.h"
#include "clicker_model.h"
#include "clicker_view.h"

void ClickerController::run() {
    char input;

    std::cout << "Witaj w klikerze!\n";
    std::cout << "Kliknij 'b', aby zdobyć punkt. Naciśnij 'e', aby wyjść.\n";

    while (true) {
        std::cin >> input;

        if (input == 'b') {
            model.incrementPoints();
            view.displayPoints(model.getPoints());
        } else if (input == 'e') {
            view.displayExitMessage();
            break;
        } else {
            view.displayInvalidInputMessage();
        }
    }
}
