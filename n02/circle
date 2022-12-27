//КРУГ
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1500, 900), L"Новый проект", sf::Style::Default);
    
    //*******************************************************************
    //Создается объект circle1, цвет желтый, координаты (10, 10)
    //радиус 100
    //Обратить внимание, что круг заключен в прямойгольник, вехняя левая 
    //координата которого (10, 10)
    sf::CircleShape circle1;
    circle1.setFillColor(sf::Color::Yellow);
    circle1.setRadius(100);
    circle1.setPosition(10, 10);
    //==================================================================

    //******************************************************************
    //Создается объект circle2, причем радиус 100 указывается сразу 
    //в конструкторе. Цвет - зеленый, позиция прямоугольника
    //в котором находится круг имеет координаты (300, 0). 
    //Точка описывающая расположение пямоугольника находится
    //в центе, т.е. имеет координаты (100, 100)
    sf::CircleShape circle2(100.f);
    circle2.setFillColor(sf::Color(0, 255, 0));
    circle2.setPosition(300, 0);
    circle2.setOrigin(100, 100);
    //================================================================
    
    //***************************************************************
    //Создается окружность circle3 радиуса 100, и poinCount = 3
    //цвет голубой(Blue),  
    sf::CircleShape circle3(100.f, 3);
    circle3.setFillColor(sf::Color(0, 0, 255));
    circle3.setPosition(400, 0);
    //===============================================================
    
    //****************************************************************
    //Создается окружность circle4 радиуса 100, и poinCount = 6
    //цвет красный
    //Создается еще один круг circle5, который получается из
    //circle4 копированием. Меняется цвет и угол поворота на 20 градусов
    sf::CircleShape circle4(100.f, 6);
    circle4.setFillColor(sf::Color(255, 0, 0));
    circle4.setPosition(700, 0);

    sf::CircleShape circle5(100.f, 6);
    circle5.setFillColor(sf::Color(255, 0, 255));
    circle5.setPosition(700, 0);
    circle5.setRotation(20);
    //=============================================================

    //*************************************************************
    //Сжатие круга circle6
    sf::CircleShape circle6(100.f);
    circle6.setFillColor(sf::Color(0, 255, 255));
    circle6.setPosition(900, 0);
    circle6.setScale(1, 0.25f);
    //=============================================================== 

    //***************************************************************
    // Окружность уменьшает свой радиус и меняет цвет
    sf::CircleShape circle7;
    circle7.setPosition(300, 400);
    
    for (int i = 0; i <= 200; i++) {
        circle7.setRadius(200 - i);
        circle7.setOrigin((200-i)/2, (200-i)/2);
        circle7.setFillColor(sf::Color(0, 0, i));
        window.draw(circle7);
    }

    //***************************************************************
    // Круг уменьшает позрачность и смещается
    sf::CircleShape circle8;
    
    for (int i = 0; i <= 200; i+=10) {
        circle8.setRadius(200);
        circle8.setFillColor(sf::Color( i, 0, 200-i, i/4));
        circle8.setPosition(i*3 + 200, 400);
        window.draw(circle8);
    }

    window.draw(circle1);
    window.draw(circle2);
    window.draw(circle3);
    window.draw(circle4);
    window.draw(circle5);
    window.draw(circle6);
    window.display();
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
             
    }
    
    return 0;
}
