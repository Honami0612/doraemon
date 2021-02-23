#include<iostream>
#include "Item.h"

Item::Item(std::string name)
	:item_name(name)
{
}

Item::~Item()
{
}

/*
 * @brief	アイテムを叫ぶ
 */
#pragma region [ public methods ]
void Item::print()
{
	std::cout << "四次元ポケットからアイテムを取り出した" << std::endl;
	std::cout << item_name << std::endl;
}
#pragma endregion


/*
 *　@brief	どこでもドアと叫ぶ
 */
#pragma region [ public methods ]
DokodemoDoor::DokodemoDoor()
	:Item("どこでもドア")
{
}

/*
void DokodemoDoor :: print()
{
	Item :: print();
	std :: cout << item_name << std :: endl;
}
#pragma endregion
*/

/*
 * @brief	スモールライトと叫ぶ
 */
#pragma region [ public methods ]
SmallLight::SmallLight()
	:Item("スモールライト")
{
}


#pragma endregion


/*
 * @brief	タケコプターと叫ぶ
 */
#pragma region [ public methods ]
Takekoputa::Takekoputa()
	: Item("タケコプター")
{
}


#pragma endregion

