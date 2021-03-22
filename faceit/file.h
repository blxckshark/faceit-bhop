#include <Windows.h>
#include "xor.h"

//Settings
bool Hide = true;
bool Message = true;
bool Check = false;

//Polymorphism
class ScriptMorph
{
public:
	virtual void HideThis();
	virtual void Message();
	virtual void Check();
	virtual void Script();
private:

protected:

};

class MorphScript : public ScriptMorph
{
public:
	virtual void HideThis();
	virtual void Message();
	virtual void Check();
	virtual void Script();
private:

protected:

};

void ScriptMorph::HideThis()
{
	MessageBox(NULL, XorStr("Little problem, contact support!"), XorStr("FaceIT - Client"), MB_OK);
}

void ScriptMorph::Message()
{
	MessageBox(NULL, XorStr("Little problem, contact support!"), XorStr("FaceIT - Client"), MB_OK);
}

void ScriptMorph::Check()
{
	MessageBox(NULL, XorStr("Little problem, contact support!"), XorStr("FaceIT - Client"), MB_OK);
}

void ScriptMorph::Script()
{
	MessageBox(NULL, XorStr("Little problem, contact support!"), XorStr("FaceIT - Client"), MB_OK);
}