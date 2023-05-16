#include <stdafx.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
    // Make a window that is 800 by 600 pixels
    sf::RenderWindow window(sf::VideoMode(800, 600), "Jogo");
 
    // Make three circles with 50 pixels radius
    // called circleRed, circle Green and circleBlue
    sf::CircleShape circleRed(50);
    sf::CircleShape circleGreen(50);
    sf::CircleShape circleBlue(50);
 
    // Color the circles appropriately
    circleRed.setFillColor(sf::Color(255, 0, 0));
    circleGreen.setFillColor(sf::Color(0, 255, 0));
    circleBlue.setFillColor(sf::Color(0, 0, 255));
 
    // Here's the variables stuff
    float xGreen = 200;
    float yGreen = 200;
 
    float xBlue = 300;
    float yBlue = 300;
 
    // Position the red circle at x,y 100,100 "Hard-coded"
    circleRed.setPosition(100, 100);
 
    // Position the green circle at the position -
    // stored in xGreen and yGreen
    circleGreen.setPosition(xGreen, yGreen);
 
    // Position the blue circle at the postion -
    // stored in xBlue and yBlue
    circleBlue.setPosition(xBlue, yBlue);
 
    // Now all our circles are ready to draw -
    // we can enter the main game loop
    // This "while" loop goes round and round...
    // until player closes window
    while (window.isOpen())
    {
        // The next 6 lines of code detect if the window is closed
        // And then shuts down the program
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                // Someone closed the window- bye
                window.close();
        }
                // End user input detection
 
        // Clear everything from the last run of the while loop
        window.clear();
 
        // Process game logic, AI, movement etc
        // We will add some new code here in a minute!!!!!!
 
        // End of new code
 
        // Draw our game scene here
        //Draw the cirlces
        window.draw(circleRed);
        window.draw(circleGreen);
        window.draw(circleBlue);
 
        // Show everything on the screen
        window.display();
 
    }// This is the end of the "while" loop
 
    return 0;
}