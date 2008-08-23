#include "pyVGU.h"


static PyMethodDef pyVGU_methods[] = {
	{"vguLine", (PyCFunction)pyvguLine, METH_VARARGS, ""},
	{"vguPolygon", (PyCFunction)pyvguPolygon, METH_VARARGS, ""},
	{"vguRect", (PyCFunction)pyvguRect, METH_VARARGS, ""},
	{"vguRoundRect", (PyCFunction)pyvguRoundRect, METH_VARARGS, ""},
	{"vguEllipse", (PyCFunction)pyvguEllipse, METH_VARARGS, ""},
	{"vguArc", (PyCFunction)pyvguArc, METH_VARARGS, ""},
	{NULL}      // Sentinel
};


#ifndef PyMODINIT_FUNC /* declarations for DLL import/export */
#define PyMODINIT_FUNC void
#endif
PyMODINIT_FUNC initVGU(void)
{
	PyObject* m;
	m = Py_InitModule3("VGU", pyVGU_methods, "Python binding of the OpenVG Utilities (VGU) API");
	if(m == NULL)
		return;
	
	pyVGU_initConsts(m);
}
