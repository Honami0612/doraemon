#ifndef __INLINE_FUNCTION_H__
#define __INLINE_FUNCTION_H__

#include<time.h>
#include<iostream>


/*
 * @brief	インライン関数	ランダムに0から2の数値を取得
 * @return	0から2の乱数
 */
inline int numberSelect()
{
	return rand() % 3;
}


/*
 * @brief	インライン関数	現在時刻をもとに疑似乱数の初期値を設定
 */
inline void initRand()
{
	srand((unsigned int)time(NULL));
}

#endif // !__INLINE_FUNCTION_H__
