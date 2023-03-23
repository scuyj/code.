#include <iostream>

using namespace std;

class Point{
	private:
		int m_x;
		int m_y;
	public:
		void setX(int x)
		{
			m_x=x;
		}
		int getX()
		{
			return m_x;
		}
		
		void setY(int y)
		{
			m_y=y;
		}
		int getY()
		{
			return m_y;
		}
};

class Circle{
	private:
		int m_r;
		Point m_center;
	
	public:
		void setR(int r)
		{
			m_r=r;
		}
		
		int getR()
		{
			return m_r;
		} 
		
		void setCenter(Point center)
		{
			m_center=center;
		}
		
		Point getCenter()
		{
			return m_center;
		}
};

void position(Circle &c, Point &p)
{
	int distance;
	distance=(c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX())+(c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY());
	
	if(distance > c.getR())
	{
		cout << "在圆外" << endl; 
	}
	if(distance == c.getR())
	{
		cout << "在圆上" << endl;
	}
	if(distance < c.getR())
	{
		cout << "在圆内" << endl; 
	}
}

int main()
{
	Circle c1;
	Point p,cp;
	int c_x,c_y,R;
	int x,y;
	
	printf("输入圆心(x,y)\n");
	scanf("(%d,%d)",&c_x,&c_y);
	printf("输入半径\n");
	scanf("%d",&R); 
	
	printf("输入点坐标\n");
	scanf ("(%d,%d)",&x,&y); 
	
	//圆半径 
	c1.setR(R);
	
	//圆心
	cp.setX(c_x);
	cp.setY(c_y); 
	c1.setCenter(cp);
	
	
	
	//点坐标 
	p.setX(x);
	p.setY(y);
	
	//判断位置 
	position(c1,p);
	
//	system("pause");
	
	return 0; 
 } 
