#include "pyOpenVG.h"


static PyMethodDef pyVG_methods[] = {
	{"vgGetError", (PyCFunction)pyvgGetError, METH_NOARGS, ""},
	{"vgFlush", (PyCFunction)pyvgFlush, METH_NOARGS, ""},
	{"vgFinish", (PyCFunction)pyvgFinish, METH_NOARGS, ""},
	{"vgSetf", (PyCFunction)pyvgSetf, METH_VARARGS, ""},
	{"vgSeti", (PyCFunction)pyvgSeti, METH_VARARGS, ""},
	{"vgSetfv", (PyCFunction)pyvgSetfv, METH_VARARGS, ""},
	{"vgSetiv", (PyCFunction)pyvgSetiv, METH_VARARGS, ""},
	{"vgGetf", (PyCFunction)pyvgGetf, METH_VARARGS, ""},
	{"vgGeti", (PyCFunction)pyvgGeti, METH_VARARGS, ""},
	{"vgGetVectorSize", (PyCFunction)pyvgGetVectorSize, METH_VARARGS, ""},
	{"vgGetfv", (PyCFunction)pyvgGetfv, METH_VARARGS, ""},
	{"vgGetiv", (PyCFunction)pyvgGetiv, METH_VARARGS, ""},
	{"vgSetParameterf", (PyCFunction)pyvgSetParameterf, METH_VARARGS, ""},
	{"vgSetParameteri", (PyCFunction)pyvgSetParameteri, METH_VARARGS, ""},
	{"vgSetParameterfv", (PyCFunction)pyvgSetParameterfv, METH_VARARGS, ""},
	{"vgSetParameteriv", (PyCFunction)pyvgSetParameteriv, METH_VARARGS, ""},
	{"vgGetParameterf", (PyCFunction)pyvgGetParameterf, METH_VARARGS, ""},
	{"vgGetParameteri", (PyCFunction)pyvgGetParameteri, METH_VARARGS, ""},
	{"vgGetParameterVectorSize", (PyCFunction)pyvgGetParameterVectorSize, METH_VARARGS, ""},
	{"vgGetParameterfv", (PyCFunction)pyvgGetParameterfv, METH_VARARGS, ""},
	{"vgGetParameteriv", (PyCFunction)pyvgGetParameteriv, METH_VARARGS, ""},
	{"vgLoadIdentity", (PyCFunction)pyvgLoadIdentity, METH_NOARGS, ""},
	{"vgLoadMatrix", (PyCFunction)pyvgLoadMatrix, METH_VARARGS, ""},
	{"vgGetMatrix", (PyCFunction)pyvgGetMatrix, METH_NOARGS, ""},
	{"vgMultMatrix", (PyCFunction)pyvgMultMatrix, METH_VARARGS, ""},
	{"vgTranslate", (PyCFunction)pyvgTranslate, METH_VARARGS, ""},
	{"vgScale", (PyCFunction)pyvgScale, METH_VARARGS, ""},
	{"vgShear", (PyCFunction)pyvgShear, METH_VARARGS, ""},
	{"vgRotate", (PyCFunction)pyvgRotate, METH_VARARGS, ""},
	// {"vgMask", (PyCFunction)pyvgMask, METH_VARARGS, ""},
	{"vgClear", (PyCFunction)pyvgClear, METH_VARARGS, ""},
	{"vgCreatePath", (PyCFunction)pyvgCreatePath, METH_VARARGS, ""},
	{"vgClearPath", (PyCFunction)pyvgClearPath, METH_VARARGS, ""},
	{"vgDestroyPath", (PyCFunction)pyvgDestroyPath, METH_VARARGS, ""},
	{"vgRemovePathCapabilities", (PyCFunction)pyvgRemovePathCapabilities, METH_VARARGS, ""},
	{"vgGetPathCapabilities", (PyCFunction)pyvgGetPathCapabilities, METH_VARARGS, ""},
	{"vgAppendPath", (PyCFunction)pyvgAppendPath, METH_VARARGS, ""},
	{"vgAppendPathData", (PyCFunction)pyvgAppendPathData, METH_VARARGS, ""},
	{"vgModifyPathCoords", (PyCFunction)pyvgModifyPathCoords, METH_VARARGS, ""},
	{"vgTransformPath", (PyCFunction)pyvgTransformPath, METH_VARARGS, ""},
	{"vgInterpolatePath", (PyCFunction)pyvgInterpolatePath, METH_VARARGS, ""},
	{"vgPathLength", (PyCFunction)pyvgPathLength, METH_VARARGS, ""},
	{"vgPointAlongPath", (PyCFunction)pyvgPointAlongPath, METH_VARARGS, ""},
	{"vgPathBounds", (PyCFunction)pyvgPathBounds, METH_VARARGS, ""},
	{"vgPathTransformedBounds", (PyCFunction)pyvgPathTransformedBounds, METH_VARARGS, ""},
	{"vgDrawPath", (PyCFunction)pyvgDrawPath, METH_VARARGS, ""},
	{"vgCreatePaint", (PyCFunction)pyvgCreatePaint, METH_NOARGS, ""},
	{"vgDestroyPaint", (PyCFunction)pyvgDestroyPaint, METH_VARARGS, ""},
	{"vgSetPaint", (PyCFunction)pyvgSetPaint, METH_VARARGS, ""},
	// {"vgGetPaint", (PyCFunction)pyvgGetPaint, METH_VARARGS, ""},
	// {"vgSetColor", (PyCFunction)pyvgSetColor, METH_VARARGS, ""},
	// {"vgGetColor", (PyCFunction)pyvgGetColor, METH_VARARGS, ""},
	{"vgPaintPattern", (PyCFunction)pyvgPaintPattern, METH_VARARGS, ""},
	
	
	
	{"vgCreateContextSH", (PyCFunction)pyvgCreateContextSH, METH_VARARGS, ""},
	{"vgResizeSurfaceSH", (PyCFunction)pyvgResizeSurfaceSH, METH_VARARGS, ""},
	{"vgDestroyContextSH", (PyCFunction)pyvgDestroyContextSH, METH_NOARGS, ""},
	{NULL}      // Sentinel
};


#ifndef PyMODINIT_FUNC /* declarations for DLL import/export */
#define PyMODINIT_FUNC void
#endif
PyMODINIT_FUNC initVG(void)
{
	PyObject* m;
	m = Py_InitModule3("VG", pyVG_methods, "Python binding of the OpenVG API");
	if(m == NULL)
		return;
	
	pyVG_initConsts(m);
}
