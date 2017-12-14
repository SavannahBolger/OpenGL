/// <summary>
/// Practical 5
/// @author: Savannah Bolger
/// @student no: C00215747
/// @date 13/12/2017
/// </summary>
#include <Game.h>

Game::Game() : window(VideoMode(800, 600), "OpenGL")
{
	
}

Game::~Game() {}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning) {

		cout << "Game running..." << endl;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}

}

void Game::initialize()
{
	glClearColor(255.0, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
	isRunning = true;

	//draw triangle shape
	glNewList(index, GL_COMPILE);
	glBegin(GL_TRIANGLES);
	{
		glVertex3f(0.0, 2.0, -5.0);
		glVertex3f(-2.0, -2.0, -5.0);
		glVertex3f(2.0, -2.0, -5.0);
	}
	glEnd();
	glEndList();

	//draw points
	glNewList(index + 1, GL_COMPILE);
	glBegin(GL_POINTS);
	{
		glVertex3f(0.0, 2.0, -5.0);
		glVertex3f(-2.0, -2.0, -5.0);
		glVertex3f(2.0, -2.0, -5.0);
	}
	glEnd();
	glEndList();

	//draw lines
	glNewList(index + 2, GL_COMPILE);
	glBegin(GL_LINES);
	{
		glVertex3f(0.0, 2.0, -5.0);
		glVertex3f(-2.0, -2.0, -5.0);
		glVertex3f(2.0, -2.0, -5.0);
		glVertex3f(-1.9, -2.0, -5.0);
		glVertex3f(2.0, -1.9, -5.0);
		glVertex3f(0.1, 2.0, -5.0);
	}
	glEnd();
	glEndList();

	//draw line strip
	glNewList(index + 3, GL_COMPILE);
	glBegin(GL_LINE_STRIP);
	{
		glVertex3f(0.0, 2.0, -5.0);
		glVertex3f(-2.0, -2.0, -5.0);
		glVertex3f(2.0, -2.0, -5.0);
		glVertex3f(0.1, 2.0, -5.0);
	}
	glEnd();
	glEndList();

	//draw line loop shape
	glNewList(index + 4, GL_COMPILE);
	glBegin(GL_LINE_LOOP);
	{
		glVertex3f(0.0, 2.0, -5.0);
		glVertex3f(-2.0, -2.0, -5.0);
		glVertex3f(2.0, -2.0, -5.0);
	}
	glEnd();
	glEndList();

	//draw triangle strip shape
	glNewList(index + 5, GL_COMPILE);
	glBegin(GL_TRIANGLE_STRIP);
	{
		glVertex3f(-2.0, 2.0, -5.0);
		glVertex3f(2.0, 2.0, -5.0);
		glVertex3f(-1.0, 0.0, -5.0);
		glVertex3f(1.0, 0.0, -5.0);
		glVertex3f(-2.0, -2.0, -5.0);
	}
	glEnd();
	glEndList();

	glNewList(index + 6, GL_COMPILE);
	glBegin(GL_TRIANGLE_FAN);
	{
		//draw triangle fan shape
		glVertex3f(-2.0, 2.0, -5.0);
		glVertex3f(0.0, 1.0, -5.0);
		glVertex3f(2.0, -2.0, -5.0);
		glVertex3f(-2.0, -2.0, -5.0);
	}
	glEnd();
	glEndList();

	glNewList(index + 7, GL_COMPILE);
	glBegin(GL_QUADS);
	{
		//draw quad shape
		glVertex3f(2.0, 2.0, -5.0);
		glVertex3f(-2.0, 2.0, -5.0);
		glVertex3f(-2.0, -2.0, -5.0);
		glVertex3f(2.0, -2.0, -5.0);
	}
	glEnd();
	glEndList();

	//draw quad strip shape
	glNewList(index + 8, GL_COMPILE);
	glBegin(GL_QUAD_STRIP);
	{
		glVertex3f(-2.0, 2.0, -5.0);
		glVertex3f(2.0, 2.0, -5.0);
		glVertex3f(-1.0, 0.0, -5.0);
		glVertex3f(1.0, 0.0, -5.0);
		glVertex3f(-2.0, -2.0, -5.0);
		glVertex3f(2.0, -2.0, -5.0);
	}
	glEnd();
	glEndList();

	//draw polygon shape
	glNewList(index + 9, GL_COMPILE);
	glBegin(GL_POLYGON);
	{
		glVertex3f(-2.0, 0.5, -5.0);
		glVertex3f(0.0, 2.0, -5.0);
		glVertex3f(2.0, 0.5, -5.0);
		glVertex3f(1.0, -2.0, -5.0);
		glVertex3f(-1.0, -2.0, -5.0);

	}
	glEnd();
	glEndList();

}

void Game::update()
{
	cout << "Update up" << endl;
	//update keyboard input to tell which primitive to draw
	//if number 1 on the keyboard is pressed the primitive is set
	//to the drawing 1
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
	{
		primitive = 1;
	}
	//if number 2 on the keyboard is pressed the primitive is set
	//to the drawing 2
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
	{
		primitive = 2;
	}
	//if number 3 on the keyboard is pressed the primitive is set
	//to the drawing 3
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
	{
		primitive = 3;
	}
	//if number 4 on the keyboard is pressed the primitive is set
	//to the drawing 4
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
	{
		primitive = 4;
	}
	//if number 5 on the keyboard is pressed the primitive is set
	//to the drawing 5
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
	{
		primitive = 5;
	}
	//if number 6 on the keyboard is pressed the primitive is set
	//to the drawing 6
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
	{
		primitive = 6;
	}
	//if number 7 on the keyboard is pressed the primitive is set
	//to the drawing 7
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num7))
	{
		primitive = 7;
	}
	//if number 8 on the keyboard is pressed the primitive is set
	//to the drawing 8
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num8))
	{
		primitive = 8;
	}
	//if number 9 on the keyboard is pressed the primitive is set
	//to the drawing 9
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num9))
	{
		primitive = 9;
	}
	//if number 0 on the keyboard is pressed the primitive is set
	//to the drawing 0
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
	{
		primitive = 10;
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
	{
		rotationAngle += 0.00005f;

		if (rotationAngle > 360.0f)
		{
			rotationAngle -= 360;
		}
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
	{
		glTranslatef(1.0f, 0.0f, 0.0f);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		glScalef(1.0f, 1.0f, 1.0f);
	}
	else
	{
		glLoadIdentity();
	}
}

void Game::draw()
{
	cout << "Draw up" << endl;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glRotatef(rotationAngle, 0.0f, 0.0f, 1.0f);
	//glTranslatef(1.0f, 0.0f, 0.0f); 
	//glScalef(1.0f, 1.0f, 1.0f);
	
	glCallList(primitive);
	window.display();
}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}

