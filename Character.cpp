/*
* @fileName:	Character.h
* @brief:		キャラクタ基底クラスヘッダファイル
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#include "Character.h"

static const std::string INPUTKEYWORD_SETUP = "setup";		//<入力キーワード>装備変更
static const std::string INPUTKEYWORD_USE = "use";			//<入力キーワード>スキル使用
static const std::string INPUTKEYWORD_EXIT = "exit";		//<入力キーワード>プロクラム終了

static const std::string INPUTKEYWORD_FIRE = "fire";		//<入力キーワード>火
static const std::string INPUTKEYWORD_ICE = "ice";			//<入力キーワード>氷
static const std::string INPUTKEYWORD_ROCK = "rock";		//<入力キーワード>岩

Character::Character() {
	this->equipedSkill = nullptr;
}

Character::~Character() {
	std::cout << "Characterデストラクタ" << std::endl;

	this->resetSkill();
}

/// <summary>
/// 装備変更
/// </summary>
/// <param name="type">目標スキル</param>
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

	std::cout << this->equipedSkill->getName() << " を装備しました" << std::endl;
}

/// <summary>
/// キャラ状態更新
/// </summary>
/// <returns>更新継続</returns>
bool Character::update() {
	std::string action;
	std::cout << "行動を入力してください： ";
	std::cin >> action;

	//入力確認
	if (action == INPUTKEYWORD_SETUP) {
		std::string equiped;
		std::cout << "装備したい魔法を入力ください： ";
		std::cin >> equiped;

		if (equiped == INPUTKEYWORD_FIRE) {			//火装備
			this->setup(SkillType::Fire);
		}
		else if (equiped == INPUTKEYWORD_ICE) {		//氷装備
			this->setup(SkillType::Ice);
		}
		else if (equiped == INPUTKEYWORD_ROCK) {	//岩装備
			this->setup(SkillType::Rock);
		}
		else {
			std::cout << "cannot find the current skill" << std::endl;
		}
	}
	else if (action == INPUTKEYWORD_USE) {			//スキル使用
		if (this->equipedSkill) {
			this->equipedSkill->use();
		}
		else {
			std::cout << "未装備" << std::endl;
		}
	}
	else if (action == INPUTKEYWORD_EXIT) {			//プログラム終了
		return false;
	}
	else {
		std::cout << "error command" << std::endl;
	}

	std::cout << std::endl;
	return true;
}

/// <summary>
/// 装備外し
/// </summary>
void Character::resetSkill() {
	delete this->equipedSkill;
	this->equipedSkill = nullptr;
}