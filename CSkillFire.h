/*
* @fileName:	CSkillFire.h
* @brief:		スキル(火)クラスヘッダファイル
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#pragma once

#include "CSkillBase.h"

class CSkillFire : public CSkillBase {
public:
	CSkillFire();
	~CSkillFire();

	void use() override;

	int getDamage() const override;
	int getDamageCount() const override;
};