//
// Created by lucia on 11/26/2024.
//

#include "Window.h"

Window::Window(const std::string &title, int width, int height) {
    screen.create(sf::VideoMode(width, height), title);

    if(!font.loadFromFile("resources/font.ttf")){
        throw std::runtime_error("Failed to load requested font");
    }

    //configure text
    screenTitle.setFont(font);
    screenTitle.setString("Post Grad Ponderin");
    screenTitle.setCharacterSize(24);
    screenTitle.setFillColor(sf::Color::Black);
    screenTitle.setPosition(50, 50);
}


void Window::windowEvents() {
    sf::Event event;
    while(screen.pollEvent(event)){
        if(event.type == sf::Event::Closed){
            screen.close();
        }

        //other events like buttons pressed will be handled here
    }
}

void Window::draw(){
    screen.clear(sf::Color::White);
    screen.draw(screenTitle);
    screen.display();
}

void Window::run(){
    while(screen.isOpen()){
        windowEvents();
        draw();
    }
}