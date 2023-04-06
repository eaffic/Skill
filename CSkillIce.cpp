/*
* @fileName:	CSkillIce.cpp
* @brief:		�X�L��(�X)�N���X
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#include "CSkillIce.h"

CSkillIce::CSkillIce() {
	this->m_skillName = "�X";
	this->m_baseDamage = 20;
	this->m_addDamage = 40;
	this->m_baseDamageCount = 1;
}

CSkillIce::~CSkillIce() {
	std::cout << "CSkillIce �f�X�g���N�^" << std::endl;
}

void CSkillIce::use() {
	__super::use();
}

/// <summary>
/// �_���[�W�l�擾
/// </summary>
/// <returns>�_���[�W�l</returns>
int CSkillIce::getDamage() const {
	return this->m_baseDamage + (rand() % (this->m_addDamage + 1));
}

/// <summary>
/// �_���[�W�񐔎擾
/// </summary>
/// <returns>�_���[�W��</returns>
int CSkillIce::getDamageCount() const {
	return this->m_baseDamageCount;
}