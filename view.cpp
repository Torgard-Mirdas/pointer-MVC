#include <iostream>
#include "view.h"

void ClickerView::displayPoints(int points, int level) {
    std::cout << "You've gained a point, Current number of points: " << points << ". Current level: " << toRoman(level) << std::endl;
}

void ClickerView::displayInvalidInputMessage() {
    std::cout << "Invalid input. Press 'b' to gain a point or 'e' to exit" << std::endl;
}

void ClickerView::displayExitMessage() {
    std::cout << "exit" << std::endl;
}

std::string ClickerView::toRoman(int value) {
    struct romandata_t { int value; std::string numeral; };
    const struct romandata_t romandata[] = {
        1000, "M",
        900, "CM",
        500, "D",
        400, "CD",
        100, "C",
        90, "XC",
        50, "L",
        40, "XL",
        10, "X",
        9, "IX",
        5, "V",
        4, "IV",
        1, "I"
    };

    std::string result;
    for (const auto& data : romandata) {
        while (value >= data.value) {
            result += data.numeral;
            value -= data.value;
        }
    }
    return result;
}

void ClickerView::showGameStateSavedMessage(const std::string& filename) const {
    std::cout << "Game state saved to " << filename << std::endl;
}
