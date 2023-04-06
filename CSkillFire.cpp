/*
* @fileName:	CSkillFire.cpp
* @brief:		スキル(火)クラス
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#include "CSkillFire.h"

CSkillFire::CSkillFire() {
	this->m_skillName = "火";
	this->m_baseDamage = 50;
	this->m_baseDamageCount = 1;
}

CSkillFire::~CSkillFire() {
	std::cout << "CSkillFire デストラクタ" << std::endl;
}

void CSkillFire::use() {
	__super::use();
}

/// <summary>
/// ダメージ値取得
/// </summary>
/// <returns>ダメージ値</returns>
int CSkillFire::getDamage() const {
	return this->m_baseDamage;
}

/// <summary>
/// ダメージ回数取得
/// </summary>
/// <returns>ダメージ回数</returns>
int CSkillFire::getDamageCount() const {
	return this->m_baseDamageCount;
}