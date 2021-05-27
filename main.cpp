#include <DxLib.h>

// #pragma pack		これは覚えていなくてもいい

struct Sample
{
	char c;		// 8bitバイト
	// （プログラマに見えないバイト）
	int w;		// 32bitバイト
};  // 24bit = 5byte

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_  HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	

	Sample s;

	//cont << sizeof(s) << endl;
	
	// システム処理
	DxLib::SetMainWindowText(L"2016184_小楠 竜矢");
	SetGraphMode(640, 480, 32);			// 640 × 480ドット 32bitカラーに設定
	ChangeWindowMode(true);				// true:window　false:フルスクリーン

	if (DxLib_Init() == -1)
	{
		return -1;						// DXライブラリ初期化処理
	}
	
	// プログラムの終了

	int Cnt = 0;
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		Cnt += 1;
		
	}
}

