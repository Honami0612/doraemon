#ifndef __DORAEMON_BEHAVIOR_H__
#define __DORAEMON_BEHAVIOR_H__

#include "Item.h"

/*
 * @class	FourDPocket
 * @brief	�A�C�e����I������
 */
class FourDPocket
{
public:
	FourDPocket();
	~FourDPocket();

	Item* choseItem(int numberSelect);

private:
	Item* m_items[3];

};


#endif // !__DORAEMON_BEHAVIOR_H__

