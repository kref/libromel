#include "VGUFuncs.h" 


PyObject* pyvguLine(PyObject* self, PyObject* args)
{
	int path=0;
	float x0=0, y0=0, x1=0, y1=0;
	if( !PyArg_ParseTuple(args, "iffff", &path, &x0, &y0, &x1, &y1) )
		return NULL;
	
	return Py_BuildValue("i", vguLine((VGPath)path, (VGfloat)x0, (VGfloat)y0, (VGfloat)x1, (VGfloat)y1));
}

PyObject* pyvguPolygon(PyObject* self, PyObject* args)
{
	int path=0, count=0, closed=0; PyObject* py_points=NULL;
	if( !PyArg_ParseTuple(args, "iOii", &path, &py_points, &count, &closed) )
		return NULL;
	
	VGfloat* points = malloc(count*sizeof(VGfloat));
	int i;
	for(i=0; i<count; i++)
		points[i] = (VGfloat)PyFloat_AsDouble(PyList_GetItem(py_points, i));
	
	VGUErrorCode ec = vguPolygon((VGPath)path, points, (VGint)count, (VGboolean)closed);
	
	free(points);
	return Py_BuildValue("i", ec);
}

PyObject* pyvguRect(PyObject* self, PyObject* args)
{
	int path=0;
	float x=0, y=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iffff", &path, &x, &y, &width, &height) )
		return NULL;
	
	return Py_BuildValue("i", vguRect((VGPath)path, (VGfloat)x, (VGfloat)y, (VGfloat)width, (VGfloat)height));
}

PyObject* pyvguRoundRect(PyObject* self, PyObject* args)
{
	int path=0;
	float x=0, y=0, width=0, height=0, arcWidth=0, arcHeight=0;
	if( !PyArg_ParseTuple(args, "iffff", &path, &x, &y, &width, &height, &arcWidth, &arcHeight) )
		return NULL;
	
	return Py_BuildValue("i", vguRoundRect((VGPath)path, (VGfloat)x, (VGfloat)y, (VGfloat)width, (VGfloat)height, (VGfloat)arcWidth, (VGfloat)arcHeight));
}

PyObject* pyvguEllipse(PyObject* self, PyObject* args)
{
	int path=0;
	float cx=0, cy=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iffff", &path, &cx, &cy, &width, &height) )
		return NULL;
	
	return Py_BuildValue("i", vguEllipse((VGPath)path, (VGfloat)cx, (VGfloat)cy, (VGfloat)width, (VGfloat)height));
}

PyObject* pyvguArc(PyObject* self, PyObject* args)
{
	int path=0, arcType=0;
	float x=0, y=0, width=0, height=0, startAngle=0, angleExtent=0;
	if( !PyArg_ParseTuple(args, "iffff", &path, &x, &y, &width, &height, &startAngle, &angleExtent, &arcType) )
		return NULL;
	
	return Py_BuildValue("i", vguArc((VGPath)path, (VGfloat)x, (VGfloat)y, (VGfloat)width, (VGfloat)height, (VGfloat)startAngle, (VGfloat)angleExtent, (VGUArcType)arcType));
}
