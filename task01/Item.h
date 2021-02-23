#ifndef __ITEM_H__
#define __ITEM_H__

#include<iostream>

/*
 * @class	Item�N���X
 * @brief	�A�C�e���֘A�̃X�[�p�[�N���X
 * @note	item_name	���ꂼ��̃A�C�e�������ԍۂɎg�p
 */
class Item
{
public:
	Item(std::string name);
	virtual ~Item();
	virtual void print();

protected:
	std::string item_name;
};


/*
 * @class	DokodemoDoor�N���X
 * @brief	Item�N���X�̃T�u�N���X	�ǂ��ł��h�A�ɂ��Ă̏���
 */
class DokodemoDoor : public Item
{
public:
	DokodemoDoor();
	~DokodemoDoor() {}
};


/*
 * @class	SmallLight�N���X
 * @brief	Item�N���X�̃T�u�N���X	�X���[�����C�g�ɂ��Ă̏���
 */
class SmallLight : public Item
{
public:
	SmallLight();
	~SmallLight() {}
};

/*
 * @class	Takekoputa�N���X
 * @brief	Item�N���X�̃T�u�N���X	�^�P�R�v�^�[�ɂ��Ă̏���
 */
class Takekoputa : public Item
{
public:
	Takekoputa();
	~Takekoputa() {}
};

#endif // !__ITEM_H__
