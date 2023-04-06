/*
* @fileName:	CSkillRock.cpp
* @brief:		スキル(岩)クラス
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#include "CSkillRock.h"

CSkillRock::CSkillRock() {
	this->m_skillName = "岩";
	this->m_baseDamage = 10;
	this->m_addDamage = 10;
	this->m_baseDamageCount = 2;
	this->m_addDamageCount = 2;
}

CSkillRock::~CSkillRock() {
	std::cout << "CSkillRock デストラクタ" << std::endl;
}

void CSkillRock::use() {
	__super::use();
}

/// <summary>
/// ダメージ値取得
/// </summary>
/// <returns>ダメージ値</returns>
int CSkillRock::getDamage() const {
	return this->m_baseDamage + (rand() % (this->m_addDamage + 1));
}

/// <summary>
/// ダメージ回数取得
/// </summary>
/// <returns>ダメージ回数</returns>
int CSkillRock::getDamageCount() const {
	return this->m_baseDamageCount + (rand() % (this->m_addDamageCount + 1));
}