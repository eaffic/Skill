#include "Character.h"

int main() {
	Character character;

	bool loop = true;
	while (loop) {
		loop = character.update();
	}
	std::cout << "プログラム終了" << std::endl;

	return 0;
}