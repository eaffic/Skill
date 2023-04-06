/*
* @fileName:	Character.h
* @brief:		キャラクタ基底クラスヘッダファイル
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#pragma once

#include "CSkillBase.h"
#include "CSkillFire.h"
#include "CSkillIce.h"
#include "CSkillRock.h"

/// <summary>
/// スキルタイプ
/// </summary>
enum class SkillType {
	Fire,		//スキル(火)
	Ice,		//スキル(氷)
	Rock,		//スキル(岩)
};

class Character {
public:
	Character();
	~Character();

	void setup(SkillType type);
	bool update();

	void resetSkill();

protected:
	CSkillBase* equipedSkill;	//現在の装備スキル
};