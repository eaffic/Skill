/*
* @fileName:	CSkillBase.h
* @brief:		�X�L�����N���X�w�b�_�t�@�C��
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#pragma once

#include <iostream>
#include <random>
#include <chrono>

/// <summary>
/// �X�L�����N���X
/// </summary>
class CSkillBase {
public:
	CSkillBase();
	virtual ~CSkillBase();

	virtual void use();	

	virtual int getDamage() const;			
	virtual int getDamageCount() const;
	std::string getName() const;

protected:
	std::string m_skillName;		//�X�L����
	int m_baseDamage;				//���_���[�W
	int m_addDamage;				//�ϓ��_���[�W
	int m_baseDamageCount;			//���_���[�W��
	int m_addDamageCount;			//�ϓ��_���[�W��
};