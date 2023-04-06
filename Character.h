/*
* @fileName:	Character.h
* @brief:		�L�����N�^���N���X�w�b�_�t�@�C��
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#pragma once

#include "CSkillBase.h"
#include "CSkillFire.h"
#include "CSkillIce.h"
#include "CSkillRock.h"

/// <summary>
/// �X�L���^�C�v
/// </summary>
enum class SkillType {
	Fire,		//�X�L��(��)
	Ice,		//�X�L��(�X)
	Rock,		//�X�L��(��)
};

class Character {
public:
	Character();
	~Character();

	void setup(SkillType type);
	bool update();

	void resetSkill();

protected:
	CSkillBase* equipedSkill;	//���݂̑����X�L��
};