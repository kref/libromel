#include "VGFuncs.h"


PyObject* pyvgGetError(PyObject* self, PyObject* args)
{
	return Py_BuildValue("i", vgGetError());
}

PyObject* pyvgFlush(PyObject* self, PyObject* args)
{
	vgFlush();
	Py_RETURN_NONE;
}

PyObject* pyvgFinish(PyObject* self, PyObject* args)
{
	vgFinish();
	Py_RETURN_NONE;
}

PyObject* pyvgSetf(PyObject* self, PyObject* args)
{
	int type=0; float value=0;
	
	if( !PyArg_ParseTuple(args, "if", &type, &value) )
		return NULL;
	
	vgSetf((VGParamType)type, (VGfloat)value);
	Py_RETURN_NONE;
}

PyObject* pyvgSeti(PyObject* self, PyObject* args)
{
	int type=0, value=0;
	
	if( !PyArg_ParseTuple(args, "ii", &type, &value) )
		return NULL;
	
	vgSeti((VGParamType)type, (VGint)value);
	Py_RETURN_NONE;
}

PyObject* pyvgSetfv(PyObject* self, PyObject* args)
{
	int type=0, count=0; PyObject* py_values=0;
	
	if( !PyArg_ParseTuple(args, "iiO", &type, &count, &py_values) )
		return NULL;
	
	VGfloat* values = malloc(count*sizeof(VGfloat));
	
	int i;
	for(i=0; i<count; i++)
		values[i] = (VGfloat)PyFloat_AsDouble(PyList_GetItem(py_values, i));
	
	
	vgSetfv((VGParamType)type, (VGint)count, values);
	
	free(values);
	Py_RETURN_NONE;
}

PyObject* pyvgSetiv(PyObject* self, PyObject* args)
{
	int type=0, count=0; PyObject* py_values=0;
	
	if( !PyArg_ParseTuple(args, "iiO", &type, &count, &py_values) )
		return NULL;
	
	VGint* values = malloc(count*sizeof(VGint));
	
	int i;
	for(i=0; i<count; i++)
		values[i] = (VGint)PyInt_AsLong(PyList_GetItem(py_values, i));
	
	vgSetiv((VGParamType)type, (VGint)count, values);
	
	free(values);
	Py_RETURN_NONE;
}

PyObject* pyvgGetf(PyObject* self, PyObject* args)
{
	int type=0;
	if( !PyArg_ParseTuple(args, "i", &type) )
		return NULL;
	
	return Py_BuildValue("f", vgGetf((VGParamType)type));
}

PyObject* pyvgGeti(PyObject* self, PyObject* args)
{
	int type=0;
	if( !PyArg_ParseTuple(args, "i", &type) )
		return NULL;
	
	return Py_BuildValue("i", vgGeti((VGParamType)type));
}

PyObject* pyvgGetVectorSize(PyObject* self, PyObject* args)
{
	int type=0;
	if( !PyArg_ParseTuple(args, "i", &type) )
		return NULL;
	
	return Py_BuildValue("i", vgGetVectorSize((VGParamType)type));
}

PyObject* pyvgGetfv(PyObject* self, PyObject* args)
{
	int type=0, count=-1;
	if( !PyArg_ParseTuple(args, "i|i", &type, &count) )
		return NULL;
	
	if(count <= 0)
		count = vgGetVectorSize((VGParamType)type);
	VGfloat* values = malloc(count*sizeof(VGfloat));
	PyObject* py_values = PyList_New(count);
	
	vgGetfv((VGParamType)type, (VGint)count, values);
	
	int i;
	for(i=0; i<count; i++)
		PyList_SetItem(py_values, i, PyFloat_FromDouble((double)values[i]));
		
	free(values);
	return py_values;
}

PyObject* pyvgGetiv(PyObject* self, PyObject* args)
{
	int type=0, count=-1;
	if( !PyArg_ParseTuple(args, "i|i", &type, &count) )
		return NULL;
	
	if(count <= 0)
		count = vgGetVectorSize((VGParamType)type);
	VGint* values = malloc(count*sizeof(VGint));
	PyObject* py_values = PyList_New(count);
	
	vgGetiv((VGParamType)type, (VGint)count, values);
	
	int i;
	for(i=0; i<count; i++)
		PyList_SetItem(py_values, i, PyInt_FromLong((long)values[i]));
		
	free(values);
	return py_values;
}

PyObject* pyvgSetParameterf(PyObject* self, PyObject* args)
{
	int object=0, paramType=0; float value=0;
	
	if( !PyArg_ParseTuple(args, "iif", &object, &paramType, &value) )
		return NULL;
	
	vgSetParameterf((VGHandle)object, (VGint)paramType, (VGfloat)value);
	Py_RETURN_NONE;
}

PyObject* pyvgSetParameteri(PyObject* self, PyObject* args)
{
	int object=0, paramType=0, value=0;
	
	if( !PyArg_ParseTuple(args, "iii", &object, &paramType, &value) )
		return NULL;
	
	vgSetParameteri((VGHandle)object, (VGint)paramType, (VGint)value);
	Py_RETURN_NONE;
}

PyObject* pyvgSetParameterfv(PyObject* self, PyObject* args)
{
	int object=0, paramType=0, count=0; PyObject* py_values=0;
	
	if( !PyArg_ParseTuple(args, "iiiO", &object, &paramType, &count, &py_values) )
		return NULL;
	
	VGfloat* values = malloc(count*sizeof(VGfloat));
	
	int i;
	for(i=0; i<count; i++)
		values[i] = (VGfloat)PyFloat_AsDouble(PyList_GetItem(py_values, i));
	
	
	vgSetParameterfv((VGHandle)object, (VGint)paramType, (VGint)count, values);
	
	free(values);
	Py_RETURN_NONE;
}

PyObject* pyvgSetParameteriv(PyObject* self, PyObject* args)
{
	int object=0, paramType=0, count=0; PyObject* py_values=0;
	
	if( !PyArg_ParseTuple(args, "iiiO", &object, &paramType, &count, &py_values) )
		return NULL;
	
	VGint* values = malloc(count*sizeof(VGint));
	
	int i;
	for(i=0; i<count; i++)
		values[i] = (VGint)PyInt_AsLong(PyList_GetItem(py_values, i));
	
	vgSetParameteriv((VGHandle)object, (VGint)paramType, (VGint)count, values);
	
	free(values);
	Py_RETURN_NONE;
}

PyObject* pyvgGetParameterf(PyObject* self, PyObject* args)
{
	int object=0, paramType=0;
	if( !PyArg_ParseTuple(args, "ii", &object, &paramType) )
		return NULL;
	
	return Py_BuildValue("f", vgGetParameterf((VGHandle)object, (VGint)paramType));
}

PyObject* pyvgGetParameteri(PyObject* self, PyObject* args)
{
	int object=0, paramType=0;
	if( !PyArg_ParseTuple(args, "ii", &object, &paramType) )
		return NULL;
	
	return Py_BuildValue("i", vgGetParameteri((VGHandle)object, (VGint)paramType));
}

PyObject* pyvgGetParameterVectorSize(PyObject* self, PyObject* args)
{
	int object=0, paramType=0;
	if( !PyArg_ParseTuple(args, "ii", &object, &paramType) )
		return NULL;
	
	return Py_BuildValue("i", vgGetParameterVectorSize((VGHandle)object, (VGint)paramType));
}

PyObject* pyvgGetParameterfv(PyObject* self, PyObject* args)
{
	int object=0, paramType=0, count=-1;
	if( !PyArg_ParseTuple(args, "ii|i", &object, &paramType, &count) )
		return NULL;
	
	if(count <= 0)
		count = vgGetParameterVectorSize((VGHandle)object, (VGint)paramType);
	VGfloat* values = malloc(count*sizeof(VGfloat));
	PyObject* py_values = PyList_New(count);
	
	vgGetParameterfv((VGHandle)object, (VGint)paramType, (VGint)count, values);
	
	int i;
	for(i=0; i<count; i++)
		PyList_SetItem(py_values, i, PyFloat_FromDouble((double)values[i]));
		
	free(values);
	return py_values;
}

PyObject* pyvgGetParameteriv(PyObject* self, PyObject* args)
{
	int object=0, paramType=0, count=-1;
	if( !PyArg_ParseTuple(args, "i|i", &object, &paramType, &count) )
		return NULL;
	
	if(count <= 0)
		count = vgGetParameterVectorSize((VGHandle)object, (VGint)paramType);
	VGint* values = malloc(count*sizeof(VGint));
	PyObject* py_values = PyList_New(count);
	
	vgGetParameteriv((VGHandle)object, (VGint)paramType, (VGint)count, values);
	
	int i;
	for(i=0; i<count; i++)
		PyList_SetItem(py_values, i, PyInt_FromLong((long)values[i]));
		
	free(values);
	return py_values;
}

PyObject* pyvgLoadIdentity(PyObject* self, PyObject* args)
{
	vgLoadIdentity();
	Py_RETURN_NONE;
}

PyObject* pyvgLoadMatrix(PyObject* self, PyObject* args)
{
	PyObject* py_m;
	if( !PyArg_ParseTuple(args, "O", &py_m) )
		return NULL;
	
	VGfloat m[9];
	int i;
	for(i=0; i<9; i++)
		m[i] = (VGfloat)PyFloat_AsDouble(PyList_GetItem(py_m, i));
	
	vgLoadMatrix(m);
	Py_RETURN_NONE;
}

PyObject* pyvgGetMatrix(PyObject* self, PyObject* args)
{
	VGfloat m[9];
	vgGetMatrix(m);
	
	PyObject* py_m = PyList_New(9);
	
	int i;
	for(i=0; i<9; i++)
		PyList_SetItem( py_m, i, PyFloat_FromDouble((double)m[i]) );
	
	return py_m;
}

PyObject* pyvgMultMatrix(PyObject* self, PyObject* args)
{
	PyObject* py_m;
	if( !PyArg_ParseTuple(args, "O", &py_m) )
		return NULL;
	
	VGfloat m[9];
	int i;
	for(i=0; i<9; i++)
		m[i] = (VGfloat)PyFloat_AsDouble(PyList_GetItem(py_m, i));
	
	vgMultMatrix(m);
	Py_RETURN_NONE;
}

PyObject* pyvgTranslate(PyObject* self, PyObject* args)
{
	float tx=0, ty=0;
	if( !PyArg_ParseTuple(args, "ff", &tx, &ty) )
		return NULL;
	
	vgTranslate((VGfloat)tx, (VGfloat)ty);
	Py_RETURN_NONE;
}

PyObject* pyvgScale(PyObject* self, PyObject* args)
{
	float sx=0, sy=0;
	if( !PyArg_ParseTuple(args, "ff", &sx, &sy) )
		return NULL;
	
	vgScale((VGfloat)sx, (VGfloat)sy);
	Py_RETURN_NONE;
}

PyObject* pyvgShear(PyObject* self, PyObject* args)
{
	float shx=0, shy=0;
	if( !PyArg_ParseTuple(args, "ff", &shx, &shy) )
		return NULL;
	
	vgShear((VGfloat)shx, (VGfloat)shy);
	Py_RETURN_NONE;
}

PyObject* pyvgRotate(PyObject* self, PyObject* args)
{
	float angle;
	if( !PyArg_ParseTuple(args, "f", &angle) )
		return NULL;
	
	vgRotate((VGfloat)angle);
	Py_RETURN_NONE;
}

/*PyObject* pyvgMask(PyObject* self, PyObject* args)
{
	int mask=0, operation=0, x=0, y=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iiiiii", &mask, &operation, &x, &y, &width, &height) )
		return NULL;
	
	vgMask((VGImage)mask, (VGMaskOperation)operation, (VGint)x, (VGint)y, (VGint)width, (VGint)height);
	Py_RETURN_NONE;
}*/

PyObject* pyvgClear(PyObject* self, PyObject* args)
{
	int x=0, y=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iiii", &x, &y, &width, &height) )
		return NULL;
	
	vgClear((VGint)x, (VGint)y, (VGint)width, (VGint)height);
	Py_RETURN_NONE;
}

PyObject* pyvgCreatePath(PyObject* self, PyObject* args)
{
	int pathFormat=0, datatype=0, segmentCapacityHint=0, coordCapacityHint=0;
	float scale=0, bias=0;
	unsigned int capabilities=0;
	if( !PyArg_ParseTuple(args, "iiffiii", &pathFormat, &datatype, &scale, &bias, &segmentCapacityHint, &coordCapacityHint, &capabilities) )
		return NULL;
	
	return Py_BuildValue("i", vgCreatePath((VGint)pathFormat, (VGPathDatatype)datatype, (VGfloat)scale, (VGfloat)bias, (VGint)segmentCapacityHint, (VGint)coordCapacityHint, (VGbitfield)capabilities));
}

PyObject* pyvgClearPath(PyObject* self, PyObject* args)
{
	int path=0;
	unsigned int capabilities=0;
	if( !PyArg_ParseTuple(args, "ii", &path, &capabilities) )
		return NULL;
	
	vgClearPath((VGPath)path, (VGbitfield)capabilities);
	Py_RETURN_NONE;
}

PyObject* pyvgDestroyPath(PyObject* self, PyObject* args)
{
	int path=0;
	if( !PyArg_ParseTuple(args, "i", &path) )
		return NULL;
	
	vgDestroyPath((VGPath)path);
	Py_RETURN_NONE;
}

PyObject* pyvgRemovePathCapabilities(PyObject* self, PyObject* args)
{
	int path=0;
	unsigned int capabilities=0;
	if( !PyArg_ParseTuple(args, "ii", &path, &capabilities) )
		return NULL;
	
	vgRemovePathCapabilities((VGPath)path, (VGbitfield)capabilities);
	Py_RETURN_NONE;
}

PyObject* pyvgGetPathCapabilities(PyObject* self, PyObject* args)
{
	int path=0;
	if( !PyArg_ParseTuple(args, "i", &path) )
		return NULL;
	
	return Py_BuildValue("i", vgGetPathCapabilities((VGPath)path));
}

PyObject* pyvgAppendPath(PyObject* self, PyObject* args)
{
	int dstPath=0, srcPath=0;
	if( !PyArg_ParseTuple(args, "ii", &dstPath, &srcPath) )
		return NULL;
	
	vgAppendPath((VGPath)dstPath, (VGPath)srcPath);
	Py_RETURN_NONE;
}

PyObject* pyvgAppendPathData(PyObject* self, PyObject* args)
{
	int dstPath=0, numSegments=0;
	PyObject *py_pathSegments=NULL, *py_pathData=NULL;
	if( !PyArg_ParseTuple(args, "iiOO", &dstPath, &numSegments, &py_pathSegments, &py_pathData) )
		return NULL;
	
	int numData = PyList_Size(py_pathData);
	VGubyte* pathSegments = malloc(numSegments*sizeof(VGubyte));
	VGfloat* pathData = malloc(numData*sizeof(VGfloat));
	
	int i;
	for(i=0; i<numSegments; i++)
		pathSegments[i] = (VGubyte)PyInt_AsLong(PyList_GetItem(py_pathSegments, i));
	
	for(i=0; i<numData; i++)
		pathData[i] = (VGfloat)PyFloat_AsDouble(PyList_GetItem(py_pathData, i));
	
	vgAppendPathData((VGPath)dstPath, (VGint)numSegments, pathSegments, pathData);
	free(pathSegments);
	free(pathData);
	Py_RETURN_NONE;
}

PyObject* pyvgModifyPathCoords(PyObject* self, PyObject* args)
{
	int dstPath=0, startIndex=0, numSegments=0;
	PyObject* py_pathData=NULL;
	if( !PyArg_ParseTuple(args, "iiiO", &dstPath, &startIndex, &numSegments, &py_pathData) )
		return NULL;
	
	int numData = PyList_Size(py_pathData);
	VGfloat* pathData = malloc(numData*sizeof(VGfloat));
	
	int i;
	for(i=0; i<numData; i++)
		pathData[i] = (VGfloat)PyFloat_AsDouble(PyList_GetItem(py_pathData, i));
	
	vgModifyPathCoords((VGPath)dstPath, (VGint)startIndex, (VGint)numSegments, pathData);
	free(pathData);
	Py_RETURN_NONE;
}

PyObject* pyvgTransformPath(PyObject* self, PyObject* args)
{
	int dstPath=0, srcPath=0;
	if( !PyArg_ParseTuple(args, "ii", &dstPath, &srcPath) )
		return NULL;
	
	vgTransformPath((VGPath)dstPath, (VGPath)srcPath);
	Py_RETURN_NONE;
}

PyObject* pyvgInterpolatePath(PyObject* self, PyObject* args)
{
	int dstPath=0, startPath=0, endPath=0;
	float amount=0;
	if( !PyArg_ParseTuple(args, "iiif", &dstPath, &startPath, &endPath, &amount) )
		return NULL;
	
	return Py_BuildValue("i", vgInterpolatePath((VGPath)dstPath, (VGPath)startPath, (VGPath)endPath, (VGfloat)amount));
}

PyObject* pyvgPathLength(PyObject* self, PyObject* args)
{
	int path=0, startSegment=0, numSegments=0;
	if( !PyArg_ParseTuple(args, "iii", &path, &startSegment, &numSegments) )
		return NULL;
	
	return Py_BuildValue("f", vgPathLength((VGPath)path, (VGint)startSegment, (VGint)numSegments));
}

PyObject* pyvgPointAlongPath(PyObject* self, PyObject* args)
{
	int path=0, startSegment=0, numSegments=0;
	float distance=0, x=0, y=0, tangentX=0, tangentY=0;
	if( !PyArg_ParseTuple(args, "iiif", &path, &startSegment, &numSegments, &distance) )
		return NULL;
	
	vgPointAlongPath((VGPath)path, (VGint)startSegment, (VGint)numSegments, (VGfloat)distance, (VGfloat*)&x, (VGfloat*)&y, (VGfloat*)&tangentX, (VGfloat*)&tangentY);
	return Py_BuildValue("(ffff)", x, y, tangentX, tangentY);
}

PyObject* pyvgPathBounds(PyObject* self, PyObject* args)
{
	int path=0;
	float minX=0, minY=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "i", &path) )
		return NULL;
	
	vgPathBounds((VGPath)path, (VGfloat*)&minX, (VGfloat*)&minY, (VGfloat*)&width, (VGfloat*)&height);
	return Py_BuildValue("(ffff)", minX, minY, width, height);
}

PyObject* pyvgPathTransformedBounds(PyObject* self, PyObject* args)
{
	int path=0;
	float minX=0, minY=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "i", &path) )
		return NULL;
	
	vgPathTransformedBounds((VGPath)path, (VGfloat*)&minX, (VGfloat*)&minY, (VGfloat*)&width, (VGfloat*)&height);
	return Py_BuildValue("(ffff)", minX, minY, width, height);
}

PyObject* pyvgDrawPath(PyObject* self, PyObject* args)
{
	int path=0;
	unsigned int paintModes=0;
	if( !PyArg_ParseTuple(args, "ii", &path, &paintModes) )
		return NULL;
	
	vgDrawPath((VGPath)path, (VGbitfield)paintModes);
	Py_RETURN_NONE;
}

PyObject* pyvgCreatePaint(PyObject* self, PyObject* args)
{
	return Py_BuildValue("i", vgCreatePaint());
}

PyObject* pyvgDestroyPaint(PyObject* self, PyObject* args)
{
	int paint=0;
	if( !PyArg_ParseTuple(args, "i", &paint) )
		return NULL;
	
	vgDestroyPaint((VGPaint)paint);
	Py_RETURN_NONE;
}

PyObject* pyvgSetPaint(PyObject* self, PyObject* args)
{
	int paint=0, paintModes=0;
	if( !PyArg_ParseTuple(args, "ii", &paint, &paintModes) )
		return NULL;
	
	vgSetPaint((VGPaint)paint, (VGbitfield)paintModes);
	Py_RETURN_NONE;
}

/*PyObject* pyvgGetPaint(PyObject* self, PyObject* args)
{
	int paintMode=0;
	if( !PyArg_ParseTuple(args, "i", &paintMode) )
		return NULL;
	
	return Py_BuildValue("i", vgGetPaint((VGPaintMode)paintMode));
}*/

/*PyObject* pyvgSetColor(PyObject* self, PyObject* args)
{
	int paint=0;
	unsigned int rgba=0;
	if( !PyArg_ParseTuple(args, "ii", &paint, &rgba) )
		return NULL;
	
	vgSetColor((VGPaint)paint, (VGuint)rgba);
	Py_RETURN_NONE;
}*/

/*PyObject* pyvgGetColor(PyObject* self, PyObject* args)
{
	int paint=0;
	if( !PyArg_ParseTuple(args, "i", &paint) )
		return NULL;
	
	return Py_BuildValue("i", vgGetColor((VGPaint)paint));
}*/

PyObject* pyvgPaintPattern(PyObject* self, PyObject* args)
{
	int paint=0, pattern=0;
	if( !PyArg_ParseTuple(args, "ii", &paint, &pattern) )
		return NULL;
	
	vgPaintPattern((VGPaint)paint, (VGImage)pattern);
	Py_RETURN_NONE;
}

PyObject* pyvgCreateImage(PyObject* self, PyObject* args)
{
	int format=0, width=0, height=0, allowedQuality=0;
	if( !PyArg_ParseTuple(args, "iiii", &format, &width, &height, &allowedQuality) )
		return NULL;
	
	return Py_BuildValue("i", vgCreateImage((VGImageFormat)format, (VGint)width, (VGint)height, (VGbitfield)allowedQuality));
}

PyObject* pyvgDestroyImage(PyObject* self, PyObject* args)
{
	int image=0;
	if( !PyArg_ParseTuple(args, "i", &image) )
		return NULL;
	
	vgDestroyImage((VGImage)image);
	Py_RETURN_NONE;
}

PyObject* pyvgClearImage(PyObject* self, PyObject* args)
{
	int image=0, x=0, y=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iiiii", &image, &x, &y, &width, &height) )
		return NULL;
	
	vgClearImage((VGImage)image, (VGint)x, (VGint)y, (VGint)width, (VGint)height);
	Py_RETURN_NONE;
}







PyObject* pyvgCreateContextSH(PyObject* self, PyObject* args)
{
	int width=0, height=0;
	if( !PyArg_ParseTuple(args, "ii", &width, &height) )
		return NULL;
	
	return PyInt_FromLong((long)vgCreateContextSH((VGint)width, (VGint)height));
}

PyObject* pyvgResizeSurfaceSH(PyObject* self, PyObject* args)
{
	int width=0, height=0;
	if( !PyArg_ParseTuple(args, "ii", &width, &height) )
		return NULL;
	
	vgResizeSurfaceSH((VGint)width, (VGint)height);
	Py_RETURN_NONE;
}

PyObject* pyvgDestroyContextSH(PyObject* self, PyObject* args)
{
	vgDestroyContextSH();
	Py_RETURN_NONE;
}
