#ifndef CLICKER_MODEL_H
#define CLICKER_MODEL_H

class ClickerModel {
private:
    int points;

public:
    ClickerModel();

    void incrementPoints();
    int getPoints() const;
};

#endif // CLICKER_MODEL_H
