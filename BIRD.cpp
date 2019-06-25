#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void handdown(int i)
{
     //handdown
 line(20+i,30,10+i,50);               //for first bird
 line(20+i,30,30+i,50);
 ellipse(20+i,50,180,360,10,15);


 line(-20+i,100,-30+i,120);
 line(-20+i,100,-10+i,120);           ///for ssecond bird
 ellipse(-20+i,120,180,360,10,15);


 line(-60+i,170,-70+i,190);
 line(-60+i,170,-50+i,190);          ///for third bird
 ellipse(-60+i,190,180,360,10,15);

 line(-20+i,260,-30+i,280);
 line(-20+i,260,-10+i,280);   //for fourth bird
 ellipse(-20+i,280,180,360,10,15);

 line(20+i,330,10+i,350);
 line(20+i,330,30+i,350);  //for fifth bird
 ellipse(20+i,350,180,360,10,15);

}
void handup(int i)
{
    //hand up
 line(20+i,30,10+i,10);
 line(20+i,30,30+i,10);  //for first bird
 ellipse(20+i,50,0,180,10,15);



 line(-20+i,100,-30+i,80);
 line(-20+i,100,-10+i,80);           ///for second bird
 ellipse(-20+i,120,0,180,10,15);


 line(-60+i,170,-70+i,150);
 line(-60+i,170,-50+i,150);          //for third bird
 ellipse(-60+i,190,0,180,10,15);

 line(-20+i,240,-30+i,220);
 line(-20+i,240,-10+i,220);         //for fourth bird
 ellipse(-20+i,260,0,180,10,15);

 line(20+i,310,10+i,290);
 line(20+i,310,30+i,290);      //for fifth bird
 ellipse(20+i,330,0,180,10,15);

}
void main()
{
 int i=0, gd=DETECT,gm;
 initgraph(&gd,&gm,"..\\bgi");
 for(i=0;i<200;i++)
 {
  //forhead
  circle(60+i,30,15);    //for first bird

  circle(20+i,100,15);    //for second bird

  circle(-20+i,170,15);   //for third bird

  circle(20+i,240,15);  //forfourth bird

  circle(60+i,310,15);  //for fifth bird


  //eye
  setcolor(15);
  setfillstyle(1,15);
  circle(65+i,25,2);         ///for first bird
  floodfill(65+i,25,15);

 // putpixel(25+i,100,15);

  circle(25+i,95,2);         ///for  second bird
  floodfill(25+i,95,15);


 circle(-15+i,165,2);            //for third bird
 floodfill(-15+i,165,15);

 circle(25+i,235,2);   //for fourth bird
 floodfill(25+i,235,15);

 circle(65+i,305,2);   //for fifth bird
 floodfill(65+i,305,15);


 //Chuchuro
  line(75+i,38,80+i,35);     //for first bird
  line(75+i,30,80+i,35);

 line(35+i,108,40+i,105);    //for bird second
 line(35+i,100,40+i,105);


 line(-5+i,178,0+i,175);     //for third bird
 line(-5+i,170,0+i,175);

 line(35+i,248,40+i,245);     //for fourth bird
 line(35+i,240,40+i,245);

 line(75+i,318,80+i,315);
 line(75+i,310,80+i,315);  //for fifth bird


 //stomach
 ellipse(20+i,30,0,180,25,10);  //for first bird
 ellipse(20+i,30,180,360,25,10);

 ellipse(-20+i,100,0,180,25,10);        //for second bird
 ellipse(-20+i,100,180,360,25,10);


 ellipse(-60+i,170,0,180,25,10);
 ellipse(-60+i,170,180,360,25,10);		      //for third bird

 ellipse(-20+i,240,0,180,25,10);
 ellipse(-20+i,240,180,360,25,10);   //for fourth bird

 ellipse(20+i,310,0,180,25,10);
 ellipse(20+i,310,180,360,25,10);  //for fifth bird


 //tail
 line(-5+i,30,-10+i,25);       //for first bird
 line(-5+i,30,-10+i,30);
 line(-5+i,30,-10+i,35);

 line(-45+i,100,-50+i,95);
 line(-45+i,100,-50+i,100);        ///for second bird
 line(-45+i,100,-50+i,105);


 line(-85+i,170,-90+i,165);
 line(-85+i,170,-90+i,170);      //for third bird
 line(-85+i,170,-90+i,175);

 line(-45+i,240,-50+i,235);
 line(-45+i,240,-50+i,240);
 line(-45+i,240,-50+i,245);   //for fourth  bird

 line(-5+i,310,-10+i,305);
 line(-5+i,310,-10+i,310);
 line(-5+i,310,-10+i,315);   //for fifth bird




  if(i%2==0)
  {
   handdown(i);
  }
  else
  {
   handup(i);
  }


  delay(100);

  cleardevice();
  }
 getch();
 closegraph();
}
