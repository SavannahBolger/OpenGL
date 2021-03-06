#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
/// <summary> 
/// Change 1 Add GL.H and Glu.h 
/// This hooks up OpenGL with our Game
/// </summary> 
#include <gl/GL.h> 
#include <gl/GLU.h> 

using namespace std;
using namespace sf;

class Game
{
public:
	Game();
	~Game();
	void run();

private:
	Window window;
	int primitive = 1;
	bool isRunning = false;
	void initialize();
	void update();
	void draw();
	void unload();

	// Uncomment for Part 2
	// ********************
	
	GLuint index = 1;
	Clock clock;
	Time elapsed;

	float rotationAngle = 0.0f;
	// ********************
};