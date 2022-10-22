#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(400.f, 400.f), "SFML is working!");
    
    // Cabeza
    sf::CircleShape cabeza(60.f);
    cabeza.setScale(sf::Vector2f{ 1.1f, 1.f });
    cabeza.setFillColor(sf::Color::Color(246, 216, 84, 255));
    cabeza.setRotation(15.f);
    cabeza.setPosition(sf::Vector2f{ 100.f, 100.f });

    // Ojo
    sf::CircleShape ojo(10.f);
    ojo.setScale(sf::Vector2f{ 1.2f, 1.f });
    ojo.setFillColor(sf::Color::Black);
    ojo.setRotation(90.f);
    ojo.setPosition(sf::Vector2f{ 125.f, 160.f });

    // Pico
    sf::CircleShape pico(20.f, 3);
    pico.setFillColor(sf::Color::Color(196, 166, 78, 255));
    pico.setRotation(30.f);
    pico.setPosition(sf::Vector2f{ 75.f, 150.f });

    // Cuerpo
    sf::CircleShape cuerpo(100.f);
    cuerpo.setScale(1.2f, 1.f);
    cuerpo.setFillColor(sf::Color::Color(246, 199, 21, 255));
    cuerpo.setRotation(20.f);
    cuerpo.setPosition(sf::Vector2f{ 150.f, 110.f });

    // Ala
    sf::CircleShape ala(40.f);
    ala.setScale(1.5f, 1.f);
    ala.setFillColor(sf::Color::Color(246, 216, 84, 255));
    ala.setPosition(sf::Vector2f{ 150.f, 210.f });

    // Correccion de cabeza
    sf::RectangleShape correccion1(sf::Vector2f{ 110.f, 35.f });
    correccion1.setFillColor(sf::Color::Color(246, 199, 21, 255));
    correccion1.setRotation(-20.f);
    correccion1.setPosition(110.f, 220.f);

    // Correccion de cuerpo 
    sf::RectangleShape correccion2(sf::Vector2f{ 200.f, 50.f });
    correccion2.setFillColor(sf::Color::Color(0, 0, 0, 255));
    correccion2.setRotation(20.f);
    correccion2.setPosition(sf::Vector2f{ 200.f, 120.f });

    // Cola
    sf::CircleShape cola(20.f, 3);
    cola.setFillColor(sf::Color::Color(246, 216, 84, 255));
    cola.setRotation(210.f);
    cola.setPosition(sf::Vector2f{ 357.f, 269.f });

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear();

        window.draw(cola);
        window.draw(cuerpo);
        window.draw(correccion2);
        window.draw(pico);
        window.draw(cabeza);
        window.draw(ojo);
        window.draw(correccion1);
        window.draw(ala);

        window.display();
    }

    return 0;
}