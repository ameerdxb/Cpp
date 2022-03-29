#ifndef _LETTER_H_
#define _LETTER_H_

class CLetter
{
public:
	virtual void display(char) = 0;
};


class CUpper_case : public CLetter
{
public:
	virtual void display(char);
};


class CLower_case : public CLetter
{
public:
	virtual void display(char);
};


class CError : public CLetter
{
public:
	virtual void display(char);
};


class CInput
{
public:
	void getLetter();

private:
	CLetter* oL1;
};

#endif // !_LETTER_H_
