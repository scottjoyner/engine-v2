
#ifndef SFML_CIRCLESHAPE_HPP
#define SFML_CIRCLESHAPE_HPP
#include <SFML/Graphics/Export.hpp>
#include <SFML/Graphics/Shape.hpp>
namespace sf {
	class SFML_GRAPHICS_API CircleShape : public Shape {
	public:
		explicit CircleShape(float radius = 0, std::size_t pointCount = 30);
		void setRadius(float radius);
		float getRadius() const;
		void setPointCount(std::size_t count);
		virtual std::size_t getPointCount() const;
		virtual Vector2f getPoint(std::size_t index) const;
	private:
		float       m_radius;
		std::size_t m_pointCount;
	};
}
#endif // SFML_CIRCLESHAPE_HPP