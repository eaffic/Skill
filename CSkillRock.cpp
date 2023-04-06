/*
* @fileName:	CSkillRock.cpp
* @brief:		�X�L��(��)�N���X
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#include "CSkillRock.h"

CSkillRock::CSkillRock() {
	this->m_skillName = "��";
	this->m_baseDamage = 10;
	this->m_addDamage = 10;
	this->m_baseDamageCount = 2;
	this->m_addDamageCount = 2;
}

CSkillRock::~CSkillRock() {
	std::cout << "CSkillRock �f�X�g���N�^" << std::endl;
}

void CSkillRock::use() {
	__super::use();
}

/// <summary>
/// �_���[�W�l�擾
/// </summary>
/// <returns>�_���[�W�l</returns>
int CSkillRock::getDamage() const {
	return this->m_baseDamage + (rand() % (this->m_addDamage + 1));
}

/// <summary>
/// �_���[�W�񐔎擾
/// </summary>
/// <returns>�_���[�W��</returns>
int CSkillRock::getDamageCount() const {
	return this->m_baseDamageCount + (rand() % (this->m_addDamageCount + 1));
}