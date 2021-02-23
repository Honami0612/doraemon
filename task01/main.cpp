#include "Item.h"
#include "Doraemon.h"
#include "InlineFunction.h"



/*
 * @class	Doraemonクラス
 * @brief	ドラえもんの行動選択（今回は四次元ポケットを使うのみ）
 */
class Doraemon
{
public:
	Doraemon()
	{
		m_pocket = new FourDPocket();
	}
	~Doraemon()
	{
		if (m_pocket)
		{
			delete m_pocket;
		}
	}

	void PickUp()
	{
		//四次元ポケットからアイテムを選択する
		Item* item = m_pocket->choseItem(numberSelect());
		item->print();
	}

private:
	FourDPocket* m_pocket;

};


/*
 * @brief	メイン関数
 */
int main(int argc, char** argv)
{
	//現在時刻をもとに疑似乱数の初期値を設定
	initRand();

	Doraemon* doraemon = new Doraemon();

	if (doraemon)
	{
		doraemon->PickUp();
	}

	delete doraemon;

	return 0;
};