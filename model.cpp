#include "model.h"

ClickerModel::ClickerModel() : points(0), level(1) {}

void ClickerModel::incrementPoints() {
    points++;
    if (points % 5 == 0) {
        level++;
    }
}

int ClickerModel::getPoints() const {
    return points;
}

int ClickerModel::getLevel() const {
    return level; 
}
