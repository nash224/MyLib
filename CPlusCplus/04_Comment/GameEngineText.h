#pragma once
#include <string>

// ����: �ؽ�Ʈ ��� �������� ����Ѵ�.
class GameEngineText
{
public:
	/**
	* @brief			Write Message to buffer
	*
	* @param _Text		This parameter is rendering Message
	*
	* @return int		If the function encounters a problem, 
	*							it returns failed.
	*/
	int Write(const std::string& _Text);

private:
	/* Render Text */
	void Render();

private:
	std::string Buffer; // Message�� ������ ������ ���

};