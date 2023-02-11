#pragma once
class DllClass
{
public:	
	int x;

	//�R���X�g���N�^�[
	DllClass(int a);

	//���C�u�����o�^
	bool ResistLibrary();

	//���C�u�����X�V
	bool UpDateLibrary();

	//���C�u�����폜
	bool DeleteLibrary();

	//�����Z
	int AddFunction(int y);

};


/*
* �N���X�ō쐬���Ă���ꍇC#����Q�Ƃł��Ȃ�
* ���̂���C#����Q�Ƃł���`�ɂ��ăG�N�X�|�[�g����
* 
* void* �̖߂�l�̓I�u�W�F�N�g�����炤���߂̌^�ł���iInptr�j
*/

//�R���X�g���N�^�[����C���X�^���X�󂯎��
extern "C" __declspec(dllexport) void* GetInstance(int x)
{
	return (void*) new DllClass(x);
}

/*
	�C���X�^���X��n���ē����֐��o��
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
* ���̂܂܃��\�b�h�쐬���ďo�͂��\	
*/
extern "C" __declspec(dllexport) int OutofClassMethd(int a, int b)
{
	return a * b;
}