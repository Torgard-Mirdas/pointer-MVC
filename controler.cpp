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
    view.dispWelcomeMessage();
    while (true) {
        std::cin >> input;

        if (input == 'b') {
            model.incrementPoints();
            view.displayPoints(model.getPoints(), model.getLevel());
           // view.dispWelcomeMessage();
        } else if (input == 'e') {
            view.displayExitMessage();
            break;
        }else if (input == 's') {
            std::string filename;
            view.dispFilenameToSave();
            std::cin >> filename;
            filename += ".txt";
            saveGameState(filename);
            view.dispWelcomeMessage();
        } else if (input == 'l') {
            std::string filename;
            view.dispFilenameToLoad();
            std::cin >> filename;
            filename += ".txt";
            loadGameState(filename);
            view.displayPoints(model.getPoints(), model.getLevel());
            view.dispWelcomeMessage();
        }else {
            view.displayInvalidInputMessage();
        }
    }
}

