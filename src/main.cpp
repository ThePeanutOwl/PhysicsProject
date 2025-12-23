#include <SFML/Graphics.hpp>
sf::CircleShape circle(200);
int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "Phys");
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        window.clear();

        window.display();
    }
}
