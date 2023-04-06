/*
* @fileName:	CSkillBase.cpp
* @brief:		�X�L�����N���X
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#include "CSkillBase.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
CSkillBase::CSkillBase() {
	auto now = std::chrono::high_resolution_clock::now();
	srand((unsigned int)std::chrono::duration_cast<std::chrono::microseconds>(now.time_since_epoch()).count());

	this->m_skillName = "�f�t�H���g";
	this->m_baseDamage = 0;
	this->m_addDamage = 0;
	this->m_baseDamageCount = 1;
	this->m_addDamageCount = 0;
}

CSkillBase::~CSkillBase() {
	std::cout << "CSkillBase �f�X�g���N�^" << std::endl;
}

/// <summary>
/// �X�L���g�p(�_���[�W�W��)
/// </summary>
void CSkillBase::use() {
	for (int i = 0; i < this->getDamageCount(); ++i) {
		std::cout << "�X�L���F" << this->getName()  << "\t" << this->getDamage() << " �_���[�W" << std::endl;
	}
}

/// <summary>
/// �X�L�����擾
/// </summary>
/// <returns>�X�L����</returns>
std::string CSkillBase::getName() const {
	return this->m_skillName;
}

/// <summary>
/// �_���[�W�l�擾
/// </summary>
/// <returns>�_���[�W�l</returns>
int CSkillBase::getDamage() const {
	return 0;
}

/// <summary>
/// �_���[�W�񐔎擾
/// </summary>
/// <returns>�_���[�W��</returns>
int CSkillBase::getDamageCount() const {
	return 0;
}
