#include <array>
#include <tuple>
#include <SFML\System\String.hpp>
/* Model class
 * 
 */
class model {
public:
	sf::String UUID;
	std::array<int, 3> pos;
	int velocity;
	int acceleration;
	enum modelState
	{
		STATIC,
		MOVING,
		AIRBORN
		// Other states will be added to this list
	};

	// Functions 
	sf::String getUUIDO() {
		return UUID;
	}
	void setPos(int x, int y, int z) {
		pos = { x, y, z };
	}
	std::array<int, 3> getPos() {
		return pos;
	}

};