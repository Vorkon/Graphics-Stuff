
#include "vector.h"	
#include <GL/glx.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <X11/extensions/xf86vmode.h>
#include <X11/keysym.h>



void rotateShape(int vectSize, int axis[]){
	
	if(vectSize != 4){ 
		
	}
}


/* need function that takes in the dimensions of the cuboid and then 
 * autogenerates the dimensions of the axis cuboids and their 
 * locations on the parent cuboid shape faces */



void drawCube(float leng, float wid, float hei, float color){

	struct direcType axisDims[6];
	
	
    glLoadIdentity();
    glBegin(GL_QUADS);
	/* Build all cube face axis displays */
    drawCuboid(leng, wid, hei, color);
        
        
    glEnd();
    
}

/*where width is the x axis of the front face, length is the z axis of the front face and y is the height of the front face of the cuboid*/
void drawCuboid(float length, float width, float height, float color){

	glBegin(GL_QUADS);
	    /* top of Polygon */
        glColor3f(color, color, color);
        glVertex3f(width, height, -length);
        glVertex3f(-width, height, -length);
        glVertex3f(-width, height, length);
        glVertex3f(width, height, length);        
        /* bottom of Polygon */
        glColor3f(color, color, color);
        glVertex3f(width, -height, length);
        glVertex3f(-width, -height, length);
        glVertex3f(-width, -height, -length);
        glVertex3f(width, -height, -length);     
        /* front of Polygon */
        glColor3f(color, color, color);
        glVertex3f(width, height, length);
        glVertex3f(-width, height, length);
        glVertex3f(-width, -height, length);
        glVertex3f(width, -height, length);     
        /* back of Polygon */
        glColor3f(color, color, color);
        glVertex3f(-width, height, -length);
        glVertex3f(width, height, -length);
        glVertex3f(width, -height, -length);
        glVertex3f(-width, -height, -length);  
        /* right side of Polygon */
        glColor3f(color, color, color);
        glVertex3f(width, height, -length);
        glVertex3f(width, height, length);
        glVertex3f(width, -height, length);
        glVertex3f(width, -height, -length);  
        /* left side of Polygon */
        glColor3f(color, color, color);
        glVertex3f(-width, height, length);
        glVertex3f(-width, height, -length);
        glVertex3f(-width, -height, -length);
        glVertex3f(-width, -height, length);
    glEnd();
}


int main(int argc, char **argv){
}



