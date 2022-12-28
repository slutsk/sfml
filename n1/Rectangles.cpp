//Прямоугольник
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(870, 870), L"Прямоугольники", sf::Style::Default);
    window.setVerticalSyncEnabled(true);
    window.clear(sf::Color::Black);
    sf::RectangleShape rect1;
    rect1.setSize(sf::Vector2f(400.f, 400.f));
    rect1.setFillColor(sf::Color::Blue);
    rect1.setPosition(10, 10);
    rect1.setOutlineThickness(5);
    rect1.setOutlineColor(sf::Color::Red);

    sf::RectangleShape rect2;
    rect2.setSize(sf::Vector2f(400.f, 400.f));
    rect2.setFillColor(sf::Color::Yellow);
    rect2.setPosition(460, 10);
    rect2.setOutlineThickness(5);
    rect2.setOutlineColor(sf::Color::Blue);
    
    sf::RectangleShape rect3;
    rect3.setSize(sf::Vector2f(400.f, 400.f));
    rect3.setFillColor(sf::Color(0, 255, 0));
    rect3.setPosition(460, 460);
    rect3.setOutlineThickness(5);
    rect3.setOutlineColor(sf::Color::Yellow);
    
    sf::RectangleShape rect4;
    rect4.setSize(sf::Vector2f(400.f, 400.f));
    rect4.setFillColor(sf::Color(255, 0, 0));
    rect4.setPosition(10, 460);
    rect4.setOutlineThickness(5);
    rect4.setOutlineColor(sf::Color::Green);
    const float A = 500;
    sf::RectangleShape rect5;
    rect5.setOrigin(A/2, A/2);
    rect5.setRotation(45);
    rect5.setSize(sf::Vector2f(A, A));
    rect5.setFillColor(sf::Color(155, 60, 60, 100));
    rect5.setPosition(435, 435);
    rect5.setOutlineThickness(5);
    rect5.setOutlineColor(sf::Color::Magenta);


    int n = 0;
   
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Black);
        window.draw(rect1);
        window.draw(rect2);
        window.draw(rect3);
        window.draw(rect4);
        window.draw(rect5);
        rect5.setRotation(n++);
        
        window.display();
    }
    
    return 0;
}
