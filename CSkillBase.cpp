/*
* @fileName:	CSkillBase.cpp
* @brief:		スキル基底クラス
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#include "CSkillBase.h"

/// <summary>
/// コンストラクタ
/// </summary>
CSkillBase::CSkillBase() {
	auto now = std::chrono::high_resolution_clock::now();
	srand((unsigned int)std::chrono::duration_cast<std::chrono::microseconds>(now.time_since_epoch()).count());

	this->m_skillName = "デフォルト";
	this->m_baseDamage = 0;
	this->m_addDamage = 0;
	this->m_baseDamageCount = 1;
	this->m_addDamageCount = 0;
}

CSkillBase::~CSkillBase() {
	std::cout << "CSkillBase デストラクタ" << std::endl;
}

/// <summary>
/// スキル使用(ダメージ展示)
/// </summary>
void CSkillBase::use() {
	for (int i = 0; i < this->getDamageCount(); ++i) {
		std::cout << "スキル：" << this->getName()  << "\t" << this->getDamage() << " ダメージ" << std::endl;
	}
}

/// <summary>
/// スキル名取得
/// </summary>
/// <returns>スキル名</returns>
std::string CSkillBase::getName() const {
	return this->m_skillName;
}

/// <summary>
/// ダメージ値取得
/// </summary>
/// <returns>ダメージ値</returns>
int CSkillBase::getDamage() const {
	return 0;
}

/// <summary>
/// ダメージ回数取得
/// </summary>
/// <returns>ダメージ回数</returns>
int CSkillBase::getDamageCount() const {
	return 0;
}
