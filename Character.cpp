/*
* @fileName:	Character.h
* @brief:		�L�����N�^���N���X�w�b�_�t�@�C��
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#include "Character.h"

static const std::string INPUTKEYWORD_SETUP = "setup";		//<���̓L�[���[�h>�����ύX
static const std::string INPUTKEYWORD_USE = "use";			//<���̓L�[���[�h>�X�L���g�p
static const std::string INPUTKEYWORD_EXIT = "exit";		//<���̓L�[���[�h>�v���N�����I��

static const std::string INPUTKEYWORD_FIRE = "fire";		//<���̓L�[���[�h>��
static const std::string INPUTKEYWORD_ICE = "ice";			//<���̓L�[���[�h>�X
static const std::string INPUTKEYWORD_ROCK = "rock";		//<���̓L�[���[�h>��

Character::Character() {
	this->equipedSkill = nullptr;
}

Character::~Character() {
	std::cout << "Character�f�X�g���N�^" << std::endl;

	this->resetSkill();
}

/// <summary>
/// �����ύX
/// </summary>
/// <param name="type">�ڕW�X�L��</param>
void Character::setup(SkillType type) {
	switch (type) {
	case SkillType::Fire:
		this->resetSkill();
		this->equipedSkill = new CSkillFire();
		break;
	case SkillType::Ice:
		this->resetSkill();
		this->equipedSkill = new CSkillIce();
		break;
	case SkillType::Rock:
		this->resetSkill();
		this->equipedSkill = new CSkillRock();
		break;
	default:
		break;
	}

	std::cout << this->equipedSkill->getName() << " �𑕔����܂���" << std::endl;
}

/// <summary>
/// �L������ԍX�V
/// </summary>
/// <returns>�X�V�p��</returns>
bool Character::update() {
	std::string action;
	std::cout << "�s������͂��Ă��������F ";
	std::cin >> action;

	//���͊m�F
	if (action == INPUTKEYWORD_SETUP) {
		std::string equiped;
		std::cout << "�������������@����͂��������F ";
		std::cin >> equiped;

		if (equiped == INPUTKEYWORD_FIRE) {			//�Α���
			this->setup(SkillType::Fire);
		}
		else if (equiped == INPUTKEYWORD_ICE) {		//�X����
			this->setup(SkillType::Ice);
		}
		else if (equiped == INPUTKEYWORD_ROCK) {	//�⑕��
			this->setup(SkillType::Rock);
		}
		else {
			std::cout << "cannot find the current skill" << std::endl;
		}
	}
	else if (action == INPUTKEYWORD_USE) {			//�X�L���g�p
		if (this->equipedSkill) {
			this->equipedSkill->use();
		}
		else {
			std::cout << "������" << std::endl;
		}
	}
	else if (action == INPUTKEYWORD_EXIT) {			//�v���O�����I��
		return false;
	}
	else {
		std::cout << "error command" << std::endl;
	}

	std::cout << std::endl;
	return true;
}

/// <summary>
/// �����O��
/// </summary>
void Character::resetSkill() {
	delete this->equipedSkill;
	this->equipedSkill = nullptr;
}