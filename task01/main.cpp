#include "Item.h"
#include "Doraemon.h"
#include "InlineFunction.h"



/*
 * @class	Doraemon�N���X
 * @brief	�h��������̍s���I���i����͎l�����|�P�b�g���g���̂݁j
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
		//�l�����|�P�b�g����A�C�e����I������
		Item* item = m_pocket->choseItem(numberSelect());
		item->print();
	}

private:
	FourDPocket* m_pocket;

};


/*
 * @brief	���C���֐�
 */
int main(int argc, char** argv)
{
	//���ݎ��������Ƃɋ^�������̏����l��ݒ�
	initRand();

	Doraemon* doraemon = new Doraemon();

	if (doraemon)
	{
		doraemon->PickUp();
	}

	delete doraemon;

	return 0;
};