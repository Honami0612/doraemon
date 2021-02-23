#include "Doraemon.h"


FourDPocket::FourDPocket()
{
	m_items[0] = new DokodemoDoor();
	m_items[1] = new SmallLight();
	m_items[2] = new Takekoputa();
}

FourDPocket::~FourDPocket()
{
	delete m_items[0];
	delete m_items[1];
	delete m_items[2];
}

/*
 * @brief	3つのアイテムから1つを選択する
 * @param	0から2の乱数
 * @return	乱数から取得した1つのアイテム
 */
#pragma region [ public methods ]
Item* FourDPocket::choseItem(int numberSelect)
{
	return m_items[numberSelect];
}
#pragma endregion