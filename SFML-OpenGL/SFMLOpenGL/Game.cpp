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
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); 
	glMatrixMode(GL_PROJECTION); 
	glLoadIdentity(); 
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
	isRunning = true;
}

void Game::update()
{
	cout << "Update up" << endl;
	
}

void Game::draw()
{
	cout << "Draw up" << endl;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); 
	glBegin(GL_TRIANGLES); 
	{
		glVertex3f(-0.1, -0.1, -4.0);
		glVertex3f(-0.1, -1.0, -4.0);
		glVertex3f(0.1, -1.0, -4.0);
	}
	glEnd();

	glBegin(GL_POINTS);
	{
		glVertex3f(0.0, 1.5, -5.0);
		glVertex3f(-0.1, 1.9, -5.0);
		glVertex3f(0.1, 1.9, -5.0);
	}
	glEnd(); 

	glBegin(GL_LINES);
	{
		glVertex3f(0.0, 1.5, -5.0);
		glVertex3f(-0.1, 1.9, -5.0);
		glVertex3f(0.1, 1.9, -5.0);
	}
	glEnd();

	glBegin(GL_LINE_STRIP);
	{
		glVertex3f(0.0, 1.5, -5.0);
		glVertex3f(-0.1, 1.9, -5.0);
		glVertex3f(0.1, 1.9, -5.0);
	}
	glEnd();

	glBegin(GL_LINE_LOOP);
	{
		glVertex3f(0.0, 1.5, -5.0);
		glVertex3f(-0.1, 1.9, -5.0);
		glVertex3f(0.1, 1.9, -5.0);
	}
	glEnd();

	glBegin(GL_TRIANGLE_STRIP);
	{
		glVertex3f(0.0, 1.5, -5.0);
		glVertex3f(-0.1, 1.9, -5.0);
		glVertex3f(0.1, 1.9, -5.0);
	}
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	{
		glVertex3f(0.0, 1.5, -5.0);
		glVertex3f(-0.1, 1.9, -5.0);
		glVertex3f(0.1, 1.9, -5.0);
	}
	glEnd();
	
	glBegin(GL_QUADS);
	{
		glVertex3f(0.0, 1.5, -5.0);
		glVertex3f(-0.1, 1.9, -5.0);
		glVertex3f(0.1, 1.9, -5.0);
	}
	glEnd(); 
	
	glBegin(GL_QUAD_STRIP);
	{
		glVertex3f(0.0, 1.5, -5.0);
		glVertex3f(-0.1, 1.9, -5.0);
		glVertex3f(0.1, 1.9, -5.0);
	}
	glEnd(); 
	
	glBegin(GL_POLYGON);
	{
		glVertex3f(0.0, 1.5, -5.0);
		glVertex3f(-0.1, 1.9, -5.0);
		glVertex3f(0.1, 1.9, -5.0);
	}
	glEnd(); 
	
	window.display();
}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}

