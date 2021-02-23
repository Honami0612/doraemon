#ifndef __ITEM_H__
#define __ITEM_H__

#include<iostream>

/*
 * @class	Itemクラス
 * @brief	アイテム関連のスーパークラス
 * @note	item_name	それぞれのアイテムを叫ぶ際に使用
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
 * @class	DokodemoDoorクラス
 * @brief	Itemクラスのサブクラス	どこでもドアについての処理
 */
class DokodemoDoor : public Item
{
public:
	DokodemoDoor();
	~DokodemoDoor() {}
};


/*
 * @class	SmallLightクラス
 * @brief	Itemクラスのサブクラス	スモールライトについての処理
 */
class SmallLight : public Item
{
public:
	SmallLight();
	~SmallLight() {}
};

/*
 * @class	Takekoputaクラス
 * @brief	Itemクラスのサブクラス	タケコプターについての処理
 */
class Takekoputa : public Item
{
public:
	Takekoputa();
	~Takekoputa() {}
};

#endif // !__ITEM_H__
