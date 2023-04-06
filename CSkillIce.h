/*
* @fileName:	CSkillIce.h
* @brief:		スキル(氷)クラスヘッダファイル
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#pragma once

#include "CSkillBase.h"

class CSkillIce : public CSkillBase {
public:
	CSkillIce();
	~CSkillIce();

	void use() override;

	int getDamage() const override;
	int getDamageCount() const override;
};