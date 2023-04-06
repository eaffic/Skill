/*
* @fileName:	CSkillIce.cpp
* @brief:		スキル(氷)クラス
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#include "CSkillIce.h"

CSkillIce::CSkillIce() {
	this->m_skillName = "氷";
	this->m_baseDamage = 20;
	this->m_addDamage = 40;
	this->m_baseDamageCount = 1;
}

CSkillIce::~CSkillIce() {
	std::cout << "CSkillIce デストラクタ" << std::endl;
}

void CSkillIce::use() {
	__super::use();
}

/// <summary>
/// ダメージ値取得
/// </summary>
/// <returns>ダメージ値</returns>
int CSkillIce::getDamage() const {
	return this->m_baseDamage + (rand() % (this->m_addDamage + 1));
}

/// <summary>
/// ダメージ回数取得
/// </summary>
/// <returns>ダメージ回数</returns>
int CSkillIce::getDamageCount() const {
	return this->m_baseDamageCount;
}