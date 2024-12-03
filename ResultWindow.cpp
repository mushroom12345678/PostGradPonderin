/*//
// Created by lilia on 12/3/2024.
//
#include "ResultWindow.h"
#include <iostream>
using namespace std;

ResultWindow::ResultWindow(const std::string &title, int width, int height, vector<Counties>& vect) {
    screen.create(sf::VideoMode(width, height), title);

    if(!font.loadFromFile("resources/font.ttf")){
        throw std::runtime_error("Failed to load requested font");
    }

*/