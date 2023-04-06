/*
* @fileName:	CSkillFire.cpp
* @brief:		�X�L��(��)�N���X
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#include "CSkillFire.h"

CSkillFire::CSkillFire() {
	this->m_skillName = "��";
	this->m_baseDamage = 50;
	this->m_baseDamageCount = 1;
}

CSkillFire::~CSkillFire() {
	std::cout << "CSkillFire �f�X�g���N�^" << std::endl;
}

void CSkillFire::use() {
	__super::use();
}

/// <summary>
/// �_���[�W�l�擾
/// </summary>
/// <returns>�_���[�W�l</returns>
int CSkillFire::getDamage() const {
	return this->m_baseDamage;
}

/// <summary>
/// �_���[�W�񐔎擾
/// </summary>
/// <returns>�_���[�W��</returns>
int CSkillFire::getDamageCount() const {
	return this->m_baseDamageCount;
}