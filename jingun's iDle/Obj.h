#pragma once
class CObj
{
public:
	CObj();
	virtual ~CObj();

public:
	virtual void Initialize()=0;
	virtual void Update()=0;
	virtual void Late_Update()=0;
	virtual void Render(HDC hDC)=0;

public:
void	Update_Rect();

const INFO Get_Info() { return m_tInfo; }
const RECT Get_Rect() { return m_tRect; }
const bool Get_Dead() { return m_bDead; }
void Set_Dead() { m_bDead = true; }
protected:
	INFO m_tInfo;
	RECT m_tRect;

	float m_fSpeed;

	bool m_bDead;
};

