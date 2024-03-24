#include <iostream>
#include "view.h"

void ClickerView::displayPoints(int points) {
    std::cout << "You've gained a point! Current number of points: " << points << std::endl;
}

void ClickerView::displayInvalidInputMessage() {
    std::cout << "Invalid input. Press 'b' to gain a point or 'e' to exit"<<std::endl;
}

void ClickerView::displayExitMessage() {
    std::cout << "exit"<<std::endl;
}
