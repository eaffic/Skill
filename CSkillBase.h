/*
* @fileName:	CSkillBase.h
* @brief:		スキル基底クラスヘッダファイル
* @author:		hsu_chungwei
* @date:		2023/04/06
*/
#pragma once

#include <iostream>
#include <random>
#include <chrono>

/// <summary>
/// スキル基底クラス
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
	std::string m_skillName;		//スキル名
	int m_baseDamage;				//基底ダメージ
	int m_addDamage;				//変動ダメージ
	int m_baseDamageCount;			//基底ダメージ回数
	int m_addDamageCount;			//変動ダメージ回数
};