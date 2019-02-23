
#include <iostream>
#include <string>

using namespace std;

//char grid[26][26];
const int rightboundary = 26;
const int lefboundary = 0;
const int topboundary = 26;
const int bottomboundary = 0;

class Robot
{
private:
	int x;
	int y;
	char payload;
public:
	Robot()
	{
		x = 10, y = 10; payload = ' ';
	}
	Robot(int xl, int yl, char l)
	{
		xl = x;
		yl = y;
		l = payload;
	}

	int getX() const
	{
		return x;
	}
	int getY() const
	{
		return y;
	}
	int getPayload() const
	{
		return payload;
	}
	void setX(int xl)
	{
		x = xl;
	}
	void setY(int yl)
	{
		y = yl;
	}
	void setPayload(char c)
	{
		payload = c;
	}
	void print() const
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
	bool pickUp(int lx, int ly, int b[][rightboundary], int topboundary)/*Method pickup(int lx, int ly) with boolean return type.
This method examines the current location of the robot and if not at location (lx, ly),
it should display a message “not at (lx,ly)” and return false. If the is no load (letters) at the location
print “No load at this location” and return false. Otherwise, the method should examine the payload of the
robot and if empty it will pick up the load at location (lx,ly) and place it in the payload and returns true.
													Note, the character at location (lx,ly) on the grid should be set to blank (space)*/
	{
		if (x != lx && y != ly)
		{
			cout << "not at this location" << lx << "," << ly << endl;
			return false;
		}
		if (b[lx][ly] != ' ')
		{
			cout << "No load at this location " << endl;
			return false;
		}
		else
		{
			if (this->payload == ' ')
			{
				payload = b[lx][ly];
				b[lx][ly] = ' ';
			}
			else
				cout << "Payload is full" << endl;
			return true;
		}
	}
	bool dropOff(int lx, int ly, int b[][rightboundary], int topboundary)
	{
		if (x != lx && y != ly)
		{
			cout << "Not at location (" << lx << ", " << ly << ")" << endl;
			return false;
		}
	}
	void moveRight()
	{
		if (x != rightboundary) x++;
		else
			cout << "Reach boundary " << endl;
	}
	void moveLeft()
	{
		if (x != rightboundary) x--;
		else
			cout << "reach boundary" << endl;
	}
	void moveUp()
	{
		if (y != topboundary) y++;
		else cout << "Reached boundary" << endl;
	}
	void moveDown()
	{
		if (y != 0) y--;
		else cout << "Reached boundary" << endl;
	}
	bool moveTo(int lx, int ly);
};
void print2D(char c[][topboundary], int row)
{
	for (int i = 0; i < topboundary; i++)
	{
		for (int j = 0; j < row; j++)
			cout << c[i][j];
		cout << "\n";
	}
}
void initialize2D(char c[][topboundary], int row)
{
	for (int i = 0; i < topboundary; i++)

		for (int j = 0; j < row; j++)
			c[i][j] = '-';
}
int main()
{
	char board[topboundary][rightboundary];
	initialize2D(board, 26);
	board[23][15] = 'b';
	Robot r(2, 3, ' ');
	print2D(board, 26);
	r.moveUp();
	for (int i = 0; i < 5; i++) r.moveUp();
	r.print();
	system("pause");
	return 0;
	
}
