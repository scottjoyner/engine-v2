#include <SFML/Graphics.hpp>
#include <SFML/System/Time.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Graphics/Text.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <iostream>
#include <array> // for array, at() 
#include <tuple> // for get() 

class GameController : private sf::NonCopyable {
private:
	void update(sf::Time elapsedTime);
	static const sf::Time TimePerFrame;
	sf::RenderWindow mWindow;
	sf::Font				mFont;
	sf::Text				mStatisticsText;
	sf::Time				mStatisticsUpdateTime;
	std::size_t				mStatisticsNumFrames;
	void								buildScene();

};


void GameController::update(sf::Time elapsedTime)
{
	// TODO
}
