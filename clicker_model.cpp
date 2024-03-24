#include "clicker_model.h"

ClickerModel::ClickerModel() : points(0) {}

void ClickerModel::incrementPoints() {
    points++;
}

int ClickerModel::getPoints() const {
    return points;
}
