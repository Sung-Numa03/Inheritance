#include <iostream>
#include <string>

class Entity {

public:
	float X, Y;

	void Move(float ax, float ay)
	{
		X += ax;
		Y += ay;
	}
};

class Player : public Entity
{
public:
	std::string m_name;

	void PrintName()
	{
		std::cout << m_name << std::endl;
	}
};
int main()
{
	Player Pe;
	Pe.m_name = "Abdul";
	Pe.PrintName();
	std::cout << sizeof(Pe) << std::endl;
	std::cin.get();
}