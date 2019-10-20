import java.awt.*;
import java.applet.*;

public class HumanFace extends Applet{
private int mouseX, mouseY;
private boolean mouseclicked = false;
public void init(){
}
public void paint(Graphics g){
g.drawOval(40,40,120,150);
g.drawOval(57,75,30,30);
g.drawOval(110,75,30,30);
g.fillOval(68,81,10,10);
g.fillOval(121,81,10,10);
g.drawLine(100,100,100,117);
g.fillRect(60,139,80,10);
if (mouseclicked) {
g.clearRect(60,139,80,10);
g.drawArc(70,100,60,60,0,-180);
mouseclicked = false;
}

}
public boolean mouseDown(Event e, int x, int y ) {
mouseX=x; mouseY=y;
mouseclicked = true;
repaint();
return true;
}
}
