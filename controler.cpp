#include <iostream>
#include "controller.h"
#include "model.h"
#include "view.h"

void ClickerController::saveGameState(const std::string& filename) const {
    model.saveGameState(filename);
    view.showGameStateSavedMessage(filename);
}

void ClickerController::loadGameState(const std::string& filename) {
    model.loadGameState(filename);
}

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
        }else if (input == 's') {
            std::string filename;
            std::cout << "Enter filename to save: ";
            std::cin >> filename;
            saveGameState(filename);
        } else if (input == 'l') {
            std::string filename;
            std::cout << "Enter filename to load: ";
            std::cin >> filename;
            loadGameState(filename);
            view.displayPoints(model.getPoints(), model.getLevel());
        }else {
            view.displayInvalidInputMessage();
        }
    }
}

