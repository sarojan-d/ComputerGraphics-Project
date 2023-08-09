
/* C program to display bouncing DVD screen saver using computer graphics */

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>

int box(int x, int y,int fill, int col)
{
	// Set DVD Box dimensions from centre of box
	int l=x-45, t=y-30, r=x+45, b=y+30;
	
	settextstyle(10,0,5);
	outtextxy(x-35, y-18, "DVD");
	setfillstyle(fill, col);
	rectangle(l,t,r,b);
	// Fill color inside box
    floodfill(x, y-5,15);
    // Fill color inside D&D in DVD
    floodfill(x+25, y-5,15);
    floodfill(x-20, y-5,15);
}

int main() 
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TC\\BGI");
	
	int minx=0, miny=0, maxx=getmaxx(), maxy=getmaxy();
	int x, y, dx, dy, f, c;
	
	// Set default direction 
	dx=1;
	dy=1;
	
	// Set random initial starting position
	srand(time(0));
	x=rand()%(maxx-90)+45;
	y=rand()%(maxy-60)+30;
	// Set initial fill as SOLID and color BLUE
	f=1;
	c=1;
	
	// 0.8sec delay before start of screen saver
	box(x,y,f,c);
	delay(800);
	
	while(!kbhit())
	{
		box(x,y,f,c);
		
		// Motion of bouncing DVD logo
		x=x+dx;
		y=y+dy;
		
		// Set horizontal velocity towards right when hit left side of screen
		if(x-45<=minx){
			dx=abs(dx);
			f=rand()%12;
			if(f!=1) // Increase chances of solid fill
				f=rand()%12;
			if(f!=1) // Increase chances of solid fill
				f=rand()%12;
			if(f!=1 || f!= 11) // Increase chances of solid fill or close dot fill
				f=rand()%12;
			c++;
		}
		// Set horizontal velocity towards left when hit right side of screen
		if(x+45>=maxx){
			dx=-abs(dx);
			f=rand()%11;
			if(f!=1)
				f=rand()%12;
			if(f!=1)
				f=rand()%12;
			if(f!=1 || f!= 11)
				f=rand()%12;
			c++;
		}
		// Set vertical velocity towards bottom when hit top side of screen
		if(y-30<=miny){
			dy=abs(dy);
			f=rand()%12;
			if(f!=1)
				f=rand()%12;
			if(f!=1)
				f=rand()%12;
			if(f!=1 || f!= 11)
				f=rand()%12;
			c++;
		}
		// Set vertical velocity towards top when hit bottom side of screen
		if(y+30>=maxy){
			dy=-abs(dy);
			f=rand()%12;
			if(f!=1)
				f=rand()%12;
			if(f!=1)
				f=rand()%12;
			if(f!=1 || f!= 11)
				f=rand()%12;
			c++;
		}
		
		// Cycle color from BLUE to YELLOW
		if(c>=15)
			c=1;
		delay(1);
		cleardevice();
	}	
	closegraph();
	return 0;
}
