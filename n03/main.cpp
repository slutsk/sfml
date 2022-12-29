//Многоугольники
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(870, 870), L"Прямоугольники", sf::Style::Default);
    window.setVerticalSyncEnabled(true);
    
    //Треугольник с тенью
    sf::ConvexShape convex1;
    
    const float darck = 4;
    const float x1(90+darck), y1(90+darck);
    const float dx1(310+darck), dy1(210+darck);
   
    convex1.setPointCount(3);
    convex1.setPoint(0, sf::Vector2f(x1, y1));
    convex1.setPoint(1, sf::Vector2f(x1, y1 + dy1));
    convex1.setPoint(2, sf::Vector2f(x1+dx1, y1+dy1));
    convex1.setFillColor(sf::Color(80, 80, 80, 100));
    convex1.setOutlineThickness(4);
    convex1.setOutlineColor(sf::Color(180, 180, 180, 100));
    
    sf::ConvexShape convex2;
    
    const float x2(100), y2(100);
    const float dx2(300), dy2(200);
    convex2.setPointCount(3);
    convex2.setPoint(0, sf::Vector2f(x2, y2));
    convex2.setPoint(1, sf::Vector2f(x2, y2 + dy2));
    convex2.setPoint(2, sf::Vector2f(x2+dx2, y2+dy2));
    convex2.setFillColor(sf::Color(255, 0, 255));
    convex2.setOutlineThickness(3);
    convex2.setOutlineColor(sf::Color(255, 0, 255));

    //трапеция  
    sf::ConvexShape convex3;
    convex3.setPointCount(4);
    float x3(500), y3(50);
    float a3(200), h3(300), b3(50);
    convex3.setPoint(0, sf::Vector2f(x3, y3));
    convex3.setPoint(1, sf::Vector2f(x3 + a3, y3));
    convex3.setPoint(2, sf::Vector2f(x3 + b3 + a3, y3 + h3));
    convex3.setPoint(3, sf::Vector2f(x3 - b3, y3 + h3));
    convex3.setFillColor(sf::Color(70, 90, 255, 0));
    convex3.setOutlineThickness(4);
    convex3.setOutlineColor(sf::Color(100, 110, 255));
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Black);
        window.draw(convex1);
        window.draw(convex2);
        window.draw(convex3);
        
        window.display();
    }
    
    return 0;
}
