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
 * @brief	3�̃A�C�e������1��I������
 * @param	0����2�̗���
 * @return	��������擾����1�̃A�C�e��
 */
#pragma region [ public methods ]
Item* FourDPocket::choseItem(int numberSelect)
{
	return m_items[numberSelect];
}
#pragma endregion