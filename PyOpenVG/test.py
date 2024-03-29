#!/usr/bin/env python
#encoding=utf-8

import sys, math
from PySFML import sf

sys.path.insert(0, "build/lib.linux-i686-2.5")

from OpenVG.VG import *
from OpenVG.VGU import *


def newPath():
	return vgCreatePath(VG_PATH_FORMAT_STANDARD, VG_PATH_DATATYPE_F, 1,0,0,0, VG_PATH_CAPABILITY_ALL)


def createApple():
	segs = [VG_MOVE_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS,
		VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS,
		VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CLOSE_PATH,
		VG_MOVE_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CLOSE_PATH]
	
	data = [1.53125,-44.681982, -3.994719,-44.681982, -8.0085183,-50.562501,
		-26.5625,-50.562501, -42.918439,-50.562501, -56.46875,-34.239393,
		-56.46875,-12.187501, -56.46875,26.520416, -34.65822,61.731799,
		-16.84375,61.812499, -7.1741233,61.812499, -2.9337937,55.656199,
		4.15625,55.656199, 11.746294,55.656199, 17.981627,62.281199,
		25.4375,62.281199, 33.88615,62.281199, 50.53251,44.282999,
		58.75,15.718799, 47.751307,9.086518, 40.999985,-0.228074,
		41,-13.046574, 41,-27.849147, 46.64686,-34.763001,
		52.4375,-39.937501, 46.111827,-47.219094, 39.0413,-50.503784,
		29.09375,-50.446384, 11.146487,-50.342824, 8.6341912,-44.681982,
		1.53125,-44.681982,
		
		0.23972344,-52.075169, -2.8344902,-69.754133, 5.9303785,-81.915323,
		24.152707,-86.881406, 23.71828,-70.367255, 15.114064,-58.365865,
		0.23972344,-52.075169]
	
	path = newPath()
	vgAppendPathData(path, len(segs), segs, data);
	
	pathRev = newPath()
	vgSeti(VG_MATRIX_MODE, VG_MATRIX_PATH_USER_TO_SURFACE);
	vgLoadIdentity();
	vgScale(1,-1);
	vgTransformPath(pathRev, path)
	
	vgDestroyPath(path)
	
	return pathRev


def createPear():
	segs = [VG_MOVE_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS,
		VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS,
		VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CLOSE_PATH,
		VG_MOVE_TO_ABS, VG_CUBIC_TO_ABS, VG_CUBIC_TO_ABS, VG_CLOSE_PATH]
	
	data = [0.0625,-90.625001, -29.44062,-89.191161, -23.07159,-32.309301,
		-30.5625,-14.062501, -38.29681,4.7771994, -56.8077,20.767199,
		-56.46875,42.812499, -56.1298,64.502999, -40.15822,79.731799,
		-22.34375,79.812499, -4.17446,79.893199, -1.93369,71.113999,
		4.15625,71.156199, 10.49619,71.198499, 13.70293,80.336799,
		30.4375,80.281199, 42.49257,80.241199, 53.53251,70.782999,
		58.75,58.218799, 47.0442,54.768499, 38.5,43.943499,
		38.5,31.124999, 38.50001,22.754099, 42.14686,15.236999,
		47.9375,10.062499, 42.2834,1.5737994, 36.5413,-6.6199006,
		34.09375,-14.062501, 28.48694,-31.111801, 32.99356,-90.265511,
		1.5,-90.625001,
		
		5.1056438,-97.8762, -12.766585,-99.48239, -22.244878,-111.09615,
		-22.325466,-129.98288, -6.486451,-125.28908, 2.8790668,-113.87186,
		5.1056438,-97.8762]
	
	path = newPath()
	vgAppendPathData(path, len(segs), segs, data);
	
	pathRev = newPath()
	vgSeti(VG_MATRIX_MODE, VG_MATRIX_PATH_USER_TO_SURFACE);
	vgLoadIdentity();
	vgScale(1,-1);
	vgTransformPath(pathRev, path)
	
	vgDestroyPath(path)
	
	return pathRev


def displayVG(app, path):
	vgClear(0, 0, app.GetWidth(), app.GetHeight())
	
	vgSeti(VG_MATRIX_MODE, VG_MATRIX_PATH_USER_TO_SURFACE)
	vgLoadIdentity()
	
	vgTranslate(app.GetWidth()/4, app.GetHeight()/2)
	vgDrawPath(path, VG_STROKE_PATH)
	
	vgTranslate(app.GetWidth()/4, 0)
	vgDrawPath(path, VG_FILL_PATH)
	
	vgTranslate(app.GetWidth()/4, 0)
	vgDrawPath(path, VG_FILL_PATH | VG_STROKE_PATH)


def VG_addPaint(paintMode, color):
	paint = vgCreatePaint()
	vgSetParameterfv(paint, VG_PAINT_COLOR, 4, color)
	vgSetPaint(paint, paintMode)
	return paint


def updateMorphing(dstPath, startPath, endPath, angle, app):
	vgClearPath(dstPath, VG_PATH_CAPABILITY_ALL)
	
	angle += app.GetFrameTime()
	if angle >= math.pi/2:
		angle = -math.pi/2
	amount = math.cos(angle)
	
	vgInterpolatePath(dstPath, startPath, endPath, amount)
	return angle


if __name__ == "__main__":
	
	app = sf.RenderWindow(sf.VideoMode.GetDesktopMode(), "PyOpenVG Test with SFML", sf.Style.Fullscreen)
	app.PreserveOpenGLStates(False)
	#app.UseVerticalSync(True)
	
	vgCreateContextSH(app.GetWidth(), app.GetHeight())
	
	print "Program Launched!"
	
	vgSetfv(VG_CLEAR_COLOR, 4, [0.8,0.8,1,1])
	
	applePath = createApple()
	pearPath = createPear()
	morphPath = newPath()
	
	morphAngle = -math.pi/2
	
	fillPaint = VG_addPaint(VG_FILL_PATH, [0,1,0,1])
	strokePaint = VG_addPaint(VG_STROKE_PATH, [0,0.4,0,1])
	
	running = True
	evt = sf.Event()
	while running:
		while app.GetEvent(evt):
			if evt.Type == sf.Event.Closed:
				running = False
			elif evt.Type == sf.Event.KeyPressed:
				if evt.Key.Code == sf.Key.Escape:
					running = False
		
		f = app.GetFrameTime()
		print 1/(f if f>0 else 1)
		
		morphAngle = updateMorphing(morphPath, applePath, pearPath, morphAngle, app)
		
		displayVG(app, morphPath)
		
		app.Display()
	
	vgDestroyPath(applePath)
	vgDestroyPath(pearPath)
	vgDestroyPath(morphPath)
	
	vgDestroyContextSH()
	
	app.Close()
