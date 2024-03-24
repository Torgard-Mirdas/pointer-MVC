#ifndef CLICKER_CONTROLLER_H
#define CLICKER_CONTROLLER_H
#include "model.h"
#include "view.h"


class ClickerController {
private:
    ClickerModel model;
    ClickerView view;

public:
    void run();
};

#endif 
