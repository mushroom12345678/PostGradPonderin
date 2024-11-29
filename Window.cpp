//
// Created by lucia on 11/26/2024.
//

#include "Window.h"
using namespace std;

Window::Window(const std::string &title, int width, int height) {
    screen.create(sf::VideoMode(width, height), title);

    if(!font.loadFromFile("resources/font.ttf")){
        throw std::runtime_error("Failed to load requested font");
    }

    //configure text
    screenTitle.setFont(font);
    screenTitle.setString("Post Grad Ponderin");
    screenTitle.setCharacterSize(30);
    screenTitle.setFillColor(sf::Color::Black);
    screenTitle.setStyle(sf::Text::Bold);
    screenTitle.setPosition(250, 10);

    instructions.setFont(font);
    instructions.setString("Assign each criteria a score of 1 through 4.\n1 is the highest ranking, and 4 is the lowest. \nYou can only use each number once.");
    instructions.setCharacterSize(18);
    instructions.setStyle(sf::Text::Bold);
    instructions.setFillColor(sf::Color::Black);
    instructions.setPosition(150, 60);

    promptPoverty.setFont(font);
    promptPoverty.setString("Rank the importance of low poverty rates:");
    promptPoverty.setCharacterSize(18);
    promptPoverty.setFillColor(sf::Color::Blue);
    promptPoverty.setStyle(sf::Text::Bold);
    promptPoverty.setPosition(50, 170);

    textBoxPoverty.setSize(sf::Vector2f(300, 50));
    textBoxPoverty.setFillColor(sf::Color::White);
    textBoxPoverty.setOutlineColor(sf::Color::Black);
    textBoxPoverty.setOutlineThickness(2);
    textBoxPoverty.setPosition(50, 210);

    promptEducation.setFont(font);
    promptEducation.setString("Rank the importance of good education:");
    promptEducation.setCharacterSize(18);
    promptEducation.setFillColor(sf::Color::Blue);
    promptEducation.setStyle(sf::Text::Bold);
    promptEducation.setPosition(50, 280);

    textBoxEducation.setSize(sf::Vector2f(300, 50));
    textBoxEducation.setFillColor(sf::Color::White);
    textBoxEducation.setOutlineColor(sf::Color::Black);
    textBoxEducation.setOutlineThickness(2);
    textBoxEducation.setPosition(50, 320);

    promptUnemployment.setFont(font);
    promptUnemployment.setString("Rank the importance of low unemployment:");
    promptUnemployment.setCharacterSize(18);
    promptUnemployment.setFillColor(sf::Color::Blue);
    promptUnemployment.setStyle(sf::Text::Bold);
    promptUnemployment.setPosition(50, 380);

    textBoxUnemployment.setSize(sf::Vector2f(300, 50));
    textBoxUnemployment.setFillColor(sf::Color::White);
    textBoxUnemployment.setOutlineColor(sf::Color::Black);
    textBoxUnemployment.setOutlineThickness(2);
    textBoxUnemployment.setPosition(50, 420);

    promptIncome.setFont(font);
    promptIncome.setString("Rank the importance of high income:");
    promptIncome.setCharacterSize(18);
    promptIncome.setFillColor(sf::Color::Blue);
    promptIncome.setStyle(sf::Text::Bold);
    promptIncome.setPosition(50, 480);

    textBoxIncome.setSize(sf::Vector2f(300, 50));
    textBoxIncome.setFillColor(sf::Color::White);
    textBoxIncome.setOutlineColor(sf::Color::Black);
    textBoxIncome.setOutlineThickness(2);
    textBoxIncome.setPosition(50, 530);

    outputPoverty.setFont(font);
    outputPoverty.setCharacterSize(24);
    outputPoverty.setFillColor(sf::Color::Black);
    outputPoverty.setPosition(60, 160);

    outputEducation.setFont(font);
    outputEducation.setCharacterSize(24);
    outputEducation.setFillColor(sf::Color::Black);
    outputEducation.setPosition(60, 160);

    outputIncome.setFont(font);
    outputIncome.setCharacterSize(24);
    outputIncome.setFillColor(sf::Color::Black);
    outputIncome.setPosition(60, 160);

    outputUnemployment.setFont(font);
    outputUnemployment.setCharacterSize(24);
    outputUnemployment.setFillColor(sf::Color::Black);
    outputUnemployment.setPosition(60, 160);
}


void Window::windowEvents() {
    sf::Event event;
    while(screen.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            screen.close();
        }
        if (event.type == sf::Event::MouseButtonPressed)
        {
            if (textBoxPoverty.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
            {
                activeBox = Poverty;
            }
            else if (textBoxIncome.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
            {
                activeBox = Income;
            }
            else if (textBoxEducation.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
            {
                activeBox = Education;
            }
            else if (textBoxUnemployment.getGlobalBounds().contains(event.mouseButton.x, event.mouseButton.y))
            {
                activeBox = Unemployment;
            }
            else
            {
                activeBox = None;
            }
        }
        //if (event.type == sf::Event::KeyPressed) {
            if (event.type == sf::Event::TextEntered)
            {
                if(activeBox==Poverty)
                {
                    if (event.text.unicode < 128) {
                        inputPoverty += static_cast<char>(event.text.unicode);
                    }
                    outputPoverty.setString(inputPoverty);
                    outputPoverty.setPosition(textBoxPoverty.getPosition().x + 10, textBoxPoverty.getPosition().y + 10);
                }
                else if(activeBox == Education)
                {
                    if (event.text.unicode < 128)
                    {
                        inputEducation += static_cast<char>(event.text.unicode);
                    }
                    outputEducation.setString(inputEducation);
                    outputEducation.setPosition(textBoxEducation.getPosition().x + 10, textBoxEducation.getPosition().y + 10);
                }
                else if(activeBox == Unemployment)
                {
                    if (event.text.unicode < 128)
                    {
                        inputUnemployment += static_cast<char>(event.text.unicode);
                    }
                    outputUnemployment.setString(inputUnemployment);
                    outputUnemployment.setPosition(textBoxUnemployment.getPosition().x + 10, textBoxUnemployment.getPosition().y + 10);
                }
                else if(activeBox ==Income )
                {
                    if (event.text.unicode < 128)
                    {
                        inputIncome += static_cast<char>(event.text.unicode);
                    }
                    outputIncome.setString(inputIncome);
                    outputIncome.setPosition(textBoxIncome.getPosition().x + 10, textBoxIncome.getPosition().y + 10);
                }

            }
        //}



        //other events like buttons pressed will be handled here
    }
}

void Window::draw(){
    screen.clear(sf::Color::White);
    screen.draw(screenTitle);
    screen.draw(promptPoverty);
    screen.draw(textBoxPoverty);
    screen.draw(promptEducation);
    screen.draw(textBoxEducation);
    screen.draw(promptUnemployment);
    screen.draw(textBoxUnemployment);
    screen.draw(promptIncome);
    screen.draw(textBoxIncome);
    screen.draw(outputIncome);
    screen.draw(outputEducation);
    screen.draw(outputPoverty);
    screen.draw(outputUnemployment);
    screen.draw(instructions);
    screen.display();

}

void Window::run(){
    while(screen.isOpen()){
        windowEvents();
        draw();
    }
}