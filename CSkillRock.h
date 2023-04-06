/*
* @fileName:	CSkillRock.h
* @brief:		スキル(岩)クラスヘッダファイル
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#pragma once

#include "CSkillBase.h"

class CSkillRock : public CSkillBase {
public:
	CSkillRock();
	~CSkillRock();

	void use() override;

	int getDamage() const override;
	int getDamageCount() const override;
};