#pragma once
class DllClass
{
public:	
	int x;

	//コンストラクター
	DllClass(int a);

	//ライブラリ登録
	bool ResistLibrary();

	//ライブラリ更新
	bool UpDateLibrary();

	//ライブラリ削除
	bool DeleteLibrary();

	//足し算
	int AddFunction(int y);

};


/*
* クラスで作成している場合C#から参照できない
* そのためC#から参照できる形にしてエクスポートする
* 
* void* の戻り値はオブジェクトをもらうための型である（Inptr）
*/

//コンストラクターからインスタンス受け取る
extern "C" __declspec(dllexport) void* GetInstance(int x)
{
	return (void*) new DllClass(x);
}

/*
	インスタンスを渡して内部関数出力
*/

extern "C" __declspec(dllexport) bool Resist(DllClass* dllClass)
{
	return dllClass->ResistLibrary();
}

extern "C" __declspec(dllexport) bool Update(DllClass * dllClass)
{
	return dllClass->UpDateLibrary();
}

extern "C" __declspec(dllexport) bool Delete(DllClass * dllClass)
{
	return dllClass->DeleteLibrary();
}

extern "C" __declspec(dllexport) int AddMethod(DllClass * dllClass, int y)
{
	return dllClass->AddFunction(y);
}


/*
* そのままメソッド作成して出力も可能	
*/
extern "C" __declspec(dllexport) int OutofClassMethd(int a, int b)
{
	return a * b;
}