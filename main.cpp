#include <DxLib.h>

// #pragma pack		����͊o���Ă��Ȃ��Ă�����

struct Sample
{
	char c;		// 8bit�o�C�g
	// �i�v���O���}�Ɍ����Ȃ��o�C�g�j
	int w;		// 32bit�o�C�g
};  // 24bit = 5byte

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_  HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	

	Sample s;

	//cont << sizeof(s) << endl;
	
	// �V�X�e������
	DxLib::SetMainWindowText(L"2016184_���� ����");
	SetGraphMode(640, 480, 32);			// 640 �~ 480�h�b�g 32bit�J���[�ɐݒ�
	ChangeWindowMode(true);				// true:window�@false:�t���X�N���[��

	if (DxLib_Init() == -1)
	{
		return -1;						// DX���C�u��������������
	}
	
	// �v���O�����̏I��

	int Cnt = 0;
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		Cnt += 1;
		
	}
}

