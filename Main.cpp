#include "Character.h"

int main() {
	Character character;

	bool loop = true;
	while (loop) {
		loop = character.update();
	}
	std::cout << "�v���O�����I��" << std::endl;

	return 0;
}