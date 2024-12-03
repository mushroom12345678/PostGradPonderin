
#include <SFML/Graphics.hpp>
#include <set>
#include "Counties.h"
#pragma once
using namespace std;

class ResultWindow {
public:
    sf::RenderWindow screen;
    sf::Text resultTitle;
    sf::Font font;

    void windowEvents();
    ResultWindow(const std::string& title, int width, int height, vector<Counties>& vect);
    void draw();
    void run();
    void clear();

};

#ifndef POSTGRADPONDERIN_RESULTWINDOW_H
#define POSTGRADPONDERIN_RESULTWINDOW_H

#endif //POSTGRADPONDERIN_RESULTWINDOW_H
