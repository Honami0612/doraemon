#ifndef __INLINE_FUNCTION_H__
#define __INLINE_FUNCTION_H__

#include<time.h>
#include<iostream>


/*
 * @brief	�C�����C���֐�	�����_����0����2�̐��l���擾
 * @return	0����2�̗���
 */
inline int numberSelect()
{
	return rand() % 3;
}


/*
 * @brief	�C�����C���֐�	���ݎ��������Ƃɋ^�������̏����l��ݒ�
 */
inline void initRand()
{
	srand((unsigned int)time(NULL));
}

#endif // !__INLINE_FUNCTION_H__
