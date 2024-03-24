#ifndef CLICKER_CONTROLLER_H
#define CLICKER_CONTROLLER_H
#include "clicker_model.h"
#include "clicker_view.h"


class ClickerController {
private:
    ClickerModel model;
    ClickerView view;

public:
    void run();
};

#endif // CLICKER_CONTROLLER_H
