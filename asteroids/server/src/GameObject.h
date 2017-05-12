#pragma once

#include "Vector2.h"

class CGameObject
{
private:
	SVector2 m_location;
public:
	CGameObject();
	~CGameObject();
	virtual void Update(float fDeltaTime) = 0;
};

