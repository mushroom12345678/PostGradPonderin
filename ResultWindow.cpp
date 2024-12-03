//
// Created by lilia on 12/3/2024.
//
#include "ResultWindow.h"
#include <iostream>
using namespace std;

ResultWindow::ResultWindow(const std::string &title, int width, int height, vector<Counties>& vect)
{
    screen.create(sf::VideoMode(width, height), title);

    if (!font.loadFromFile("resources/font.ttf")) {
        throw std::runtime_error("Failed to load requested font");
    }

    resultTitle.setFont(font);
    resultTitle.setString("You should move to...");
    resultTitle.setCharacterSize(30);
    resultTitle.setFillColor(sf::Color::Black);
    resultTitle.setStyle(sf::Text::Bold);
    resultTitle.setPosition(200, 10);
}

void ResultWindow::windowEvents()
{
    sf::Event event;
    while (screen.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
        {
            screen.close();
        }
    }
}

void ResultWindow::draw()
{
    screen.clear(sf::Color::White);
    screen.draw(resultTitle);
    screen.display();
}

void ResultWindow::run(){
    while(screen.isOpen()){
        windowEvents();
        draw();
    }
}

