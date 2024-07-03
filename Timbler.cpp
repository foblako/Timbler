#include "SFML/Graphics.hpp"

using namespace sf;

int main() {
	VideoMode vm(1920, 1080);
	RenderWindow window(vm, "Timber!!", Style::Fullscreen);


	Texture textureBackground;
	textureBackground.loadFromFile("graphics/background.png");
	Sprite spriteBackground;
	spriteBackground.setTexture(textureBackground);
	spriteBackground.setPosition(0, 0);


	Texture textureTree;
	textureTree.loadFromFile("graphics/tree.png");
	Sprite spriteTree;
	spriteTree.setTexture(textureTree);
	spriteTree.setPosition(810, 0);

	Texture textureBee;
	textureBee.loadFromFile("graphics/bee.png");
	Sprite spriteBee;
	spriteBee.setTexture(textureBee);
	spriteBee.setPosition(0, 800);


	bool beeActive = false;

	float beeSpeed = 0.0f;

	while (window.isOpen()) {
		if (Keyboard::isKeyPressed(Keyboard::Escape)) {
			window.close();
		}

		window.clear();

		window.draw(spriteBackground);
		window.draw(spriteTree);

		window.display();

	}


	return 0;
}