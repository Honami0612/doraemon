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
 * @brief	�A�C�e��������
 */
#pragma region [ public methods ]
void Item::print()
{
	std::cout << "�l�����|�P�b�g����A�C�e�������o����" << std::endl;
	std::cout << item_name << std::endl;
}
#pragma endregion


/*
 *�@@brief	�ǂ��ł��h�A�Ƌ���
 */
#pragma region [ public methods ]
DokodemoDoor::DokodemoDoor()
	:Item("�ǂ��ł��h�A")
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
 * @brief	�X���[�����C�g�Ƌ���
 */
#pragma region [ public methods ]
SmallLight::SmallLight()
	:Item("�X���[�����C�g")
{
}


#pragma endregion


/*
 * @brief	�^�P�R�v�^�[�Ƌ���
 */
#pragma region [ public methods ]
Takekoputa::Takekoputa()
	: Item("�^�P�R�v�^�[")
{
}


#pragma endregion

