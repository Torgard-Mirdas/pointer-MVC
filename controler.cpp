#include <iostream>
#include "controller.h"
#include "model.h"
#include "view.h"

void ClickerController::run() {
    char input;

    std::cout << "Welcome " << std::endl;
    std::cout << "Press 'b' to gain a point. Press 'e' to exit." << std::endl;

    while (true) {
        std::cin >> input;

        if (input == 'b') {
            model.incrementPoints();
            view.displayPoints(model.getPoints(), model.getLevel()); 
        } else if (input == 'e') {
            view.displayExitMessage();
            break;
        } else {
            view.displayInvalidInputMessage();
        }
    }
}
