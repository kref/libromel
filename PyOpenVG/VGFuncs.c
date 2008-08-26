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

PyObject* pyvgImageSubData(PyObject* self, PyObject* args)
{
	int image=0, dataStride=0, dataFormat=0, x=0, y=0, width=0, height=0;
	PyObject* py_data=NULL;
	if( !PyArg_ParseTuple(args, "iOiiiiii", &image, &py_data, &dataStride, &dataFormat, &x, &y, &width, &height) )
		return NULL;
	
	int numData = dataStride*height;
	VGubyte* data = malloc(numData*sizeof(VGubyte));
	
	int i;
	for(i=0; i<numData; i++)
		data[i] = (VGubyte)PyInt_AsLong(PyList_GetItem(py_data, i));
	
	vgImageSubData((VGImage)image, data, (VGint)dataStride, (VGint)dataFormat, (VGint)x, (VGint)y, (VGint)width, (VGint)height);
	free(data);
	Py_RETURN_NONE;
}

PyObject* pyvgGetImageSubData(PyObject* self, PyObject* args)
{
	int image=0, dataStride=0, dataFormat=0, x=0, y=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iiiiiii", &image, &dataStride, &dataFormat, &x, &y, &width, &height) )
		return NULL;
	
	int numData = dataStride*height;
	VGubyte* data = malloc(numData*sizeof(VGubyte));
	vgGetImageSubData((VGImage)image, data, (VGint)dataStride, (VGint)dataFormat, (VGint)x, (VGint)y, (VGint)width, (VGint)height);
	
	PyObject* py_data = PyList_New(numData);
	int i;
	for(i=0; i<numData; i++)
		PyList_SetItem( py_data, i, PyInt_FromLong((long)data[i]) );
	
	free(data);
	return py_data;
}

PyObject* pyvgChildImage(PyObject* self, PyObject* args)
{
	int parent=0, x=0, y=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iiiii", &parent, &x, &y, &width, &height) )
		return NULL;
	
	return Py_BuildValue("i", vgChildImage((VGImage)parent, (VGint)x, (VGint)y, (VGint)width, (VGint)height));
}

PyObject* pyvgGetParent(PyObject* self, PyObject* args)
{
	int image=0;
	if( !PyArg_ParseTuple(args, "i", &image) )
		return NULL;
	
	return Py_BuildValue("i", vgGetParent((VGImage)image));
}

PyObject* pyvgCopyImage(PyObject* self, PyObject* args)
{
	int dst=0, dx=0, dy=0, src=0, sx=0, sy=0, width=0, height=0, dither=0;
	if( !PyArg_ParseTuple(args, "iiiiiiiii", &dst, &dx, &dy, &src, &sx, &sy, &width, &height, &dither) )
		return NULL;
	
	vgCopyImage((VGImage)dst, (VGint)dx, (VGint)dy, (VGImage)src, (VGint)sx, (VGint)sy, (VGint)width, (VGint)height, (VGboolean)dither);
	Py_RETURN_NONE;
}

PyObject* pyvgDrawImage(PyObject* self, PyObject* args)
{
	int image=0;
	if( !PyArg_ParseTuple(args, "i", &image) )
		return NULL;
	
	vgDrawImage((VGImage)image);
	Py_RETURN_NONE;
}

PyObject* pyvgSetPixels(PyObject* self, PyObject* args)
{
	int dx=0, dy=0, src=0, sx=0, sy=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iiiiiii", &dx, &dy, &src, &sx, &sy, &width, &height) )
		return NULL;
	
	vgSetPixels((VGint)dx, (VGint)dy, (VGImage)src, (VGint)sx, (VGint)sy, (VGint)width, (VGint)height);
	Py_RETURN_NONE;
}

PyObject* pyvgWritePixels(PyObject* self, PyObject* args)
{
	int dataStride=0, dataFormat=0, dx=0, dy=0, width=0, height=0;
	PyObject* py_data=NULL;
	if( !PyArg_ParseTuple(args, "Oiiiiii", &py_data, &dataStride, &dataFormat, &dx, &dy, &width, &height) )
		return NULL;
	
	int numData = dataStride*height;
	VGubyte* data = malloc(numData*sizeof(VGubyte));
	
	int i;
	for(i=0; i<numData; i++)
		data[i] = (VGubyte)PyInt_AsLong(PyList_GetItem(py_data, i));
	
	vgWritePixels(data, (VGint)dataStride, (VGint)dataFormat, (VGint)dx, (VGint)dy, (VGint)width, (VGint)height);
	free(data);
	Py_RETURN_NONE;
}

PyObject* pyvgGetPixels(PyObject* self, PyObject* args)
{
	int dst=0, dx=0, dy=0, sx=0, sy=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iiiiiii", &dst, &dx, &dy, &sx, &sy, &width, &height) )
		return NULL;
	
	vgGetPixels((VGImage)dst, (VGint)dx, (VGint)dy, (VGint)sx, (VGint)sy, (VGint)width, (VGint)height);
	Py_RETURN_NONE;
}

PyObject* pyvgReadPixels(PyObject* self, PyObject* args)
{
	int dataStride=0, dataFormat=0, sx=0, sy=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iiiiii", &dataStride, &dataFormat, &sx, &sy, &width, &height) )
		return NULL;
	
	int numData = dataStride*height;
	VGubyte* data = malloc(numData*sizeof(VGubyte));
	vgReadPixels(data, (VGint)dataStride, (VGint)dataFormat, (VGint)sx, (VGint)sy, (VGint)width, (VGint)height);
	
	PyObject* py_data = PyList_New(numData);
	int i;
	for(i=0; i<numData; i++)
		PyList_SetItem( py_data, i, PyInt_FromLong((long)data[i]) );
	
	free(data);
	return py_data;
}

PyObject* pyvgCopyPixels(PyObject* self, PyObject* args)
{
	int dx=0, dy=0, sx=0, sy=0, width=0, height=0;
	if( !PyArg_ParseTuple(args, "iiiiii", &dx, &dy, &sx, &sy, &width, &height) )
		return NULL;
	
	vgCopyPixels((VGint)dx, (VGint)dy, (VGint)sx, (VGint)sy, (VGint)width, (VGint)height);
	Py_RETURN_NONE;
}

PyObject* pyvgColorMatrix(PyObject* self, PyObject* args)
{
	int dst=0, src=0;
	PyObject* py_matrix=NULL;
	if( !PyArg_ParseTuple(args, "iiO", &dst, &src, &py_matrix) )
		return NULL;
	
	VGfloat matrix[20];
	int i;
	for(i=0; i<20; i++)
		matrix[i] = (VGfloat)PyFloat_AsDouble(PyList_GetItem(py_matrix, i));
	
	vgColorMatrix((VGImage)dst, (VGImage)src, matrix);
	Py_RETURN_NONE;
}

PyObject* pyvgConvolve(PyObject* self, PyObject* args)
{
	int dst=0, src=0, kernelWidth=0, kernelHeight=0, shiftX=0, shiftY=0, tilingMode=0;
	PyObject* py_kernel=NULL;
	float scale=0.0, bias=0.0;
	if( !PyArg_ParseTuple(args, "iiiiiiOffi", &dst, &src, &kernelWidth, &kernelHeight, &shiftX, &shiftY, &py_kernel, &scale, &bias, &tilingMode) )
		return NULL;
	
	int kernelSize = kernelWidth*kernelHeight;
	VGshort* kernel = malloc(kernelSize*sizeof(VGshort));
	
	int i;
	for(i=0; i<kernelSize; i++)
		kernel[i] = (VGshort)PyInt_AsLong(PyList_GetItem(py_kernel, i));
	
	vgConvolve((VGImage)dst, (VGImage)src, (VGint)kernelWidth, (VGint)kernelHeight, (VGint)shiftX, (VGint)shiftY, kernel, (VGfloat)scale, (VGfloat)bias, (VGTilingMode)tilingMode);
	
	free(kernel);
	Py_RETURN_NONE;
}

PyObject* pyvgSeparableConvolve(PyObject* self, PyObject* args)
{
	int dst=0, src=0, kernelWidth=0, kernelHeight=0, shiftX=0, shiftY=0, tilingMode=0;
	PyObject *py_kernelX=NULL, *py_kernelY=NULL;
	float scale=0.0, bias=0.0;
	if( !PyArg_ParseTuple(args, "iiiiiiOOffi", &dst, &src, &kernelWidth, &kernelHeight, &shiftX, &shiftY, &py_kernelX, &py_kernelY, &scale, &bias, &tilingMode) )
		return NULL;
	
	int kernelSize = kernelWidth*kernelHeight;
	VGshort *kernelX = malloc(kernelSize*sizeof(VGshort)), *kernelY = malloc(kernelSize*sizeof(VGshort));
	
	int i;
	for(i=0; i<kernelSize; i++)
	{
		kernelX[i] = (VGshort)PyInt_AsLong(PyList_GetItem(py_kernelX, i));
		kernelY[i] = (VGshort)PyInt_AsLong(PyList_GetItem(py_kernelY, i));
	}
	
	vgSeparableConvolve((VGImage)dst, (VGImage)src, (VGint)kernelWidth, (VGint)kernelHeight, (VGint)shiftX, (VGint)shiftY, kernelX, kernelY, (VGfloat)scale, (VGfloat)bias, (VGTilingMode)tilingMode);
	
	free(kernelX);
	free(kernelY);
	Py_RETURN_NONE;
}

PyObject* pyvgGaussianBlur(PyObject* self, PyObject* args)
{
	int dst=0, src=0, tilingMode=0;
	float stdDeviationX=0.0, stdDeviationY=0.0;
	if( !PyArg_ParseTuple(args, "iiffi", &dst, &src, &stdDeviationX, &stdDeviationY, &tilingMode) )
		return NULL;
	
	vgGaussianBlur((VGImage)dst, (VGImage)src, (VGfloat)stdDeviationX, (VGfloat)stdDeviationY, (VGTilingMode)tilingMode);
	Py_RETURN_NONE;
}

PyObject* pyvgLookup(PyObject* self, PyObject* args)
{
	int dst=0, src=0, outputLinear=0, outputPremultiplied=0;
	PyObject *py_redLUT=NULL, *py_greenLUT=NULL, *py_blueLUT=NULL, *py_alphaLUT=NULL;
	if( !PyArg_ParseTuple(args, "iiOOOOii", &dst, &src, &py_redLUT, &py_greenLUT, &py_blueLUT, &py_alphaLUT, &outputLinear, &outputPremultiplied) )
		return NULL;
	
	VGubyte redLUT[256], greenLUT[256], blueLUT[256], alphaLUT[256];
	int i;
	for(i=0; i<256; i++)
	{
		redLUT[i] = (VGubyte)PyInt_AsLong(PyList_GetItem(py_redLUT, i));
		greenLUT[i] = (VGubyte)PyInt_AsLong(PyList_GetItem(py_greenLUT, i));
		blueLUT[i] = (VGubyte)PyInt_AsLong(PyList_GetItem(py_blueLUT, i));
		alphaLUT[i] = (VGubyte)PyInt_AsLong(PyList_GetItem(py_alphaLUT, i));
	}
	
	vgLookup((VGImage)dst, (VGImage)src, redLUT, greenLUT, blueLUT, alphaLUT, (VGboolean)outputLinear, (VGboolean)outputPremultiplied);
	Py_RETURN_NONE;
}

PyObject* pyvgLookupSingle(PyObject* self, PyObject* args)
{
	int dst=0, src=0, sourceChannel=0, outputLinear=0, outputPremultiplied=0;
	PyObject* py_lookupTable=NULL;
	if( !PyArg_ParseTuple(args, "iiOiii", &dst, &src, &py_lookupTable, &sourceChannel, &outputLinear, &outputPremultiplied) )
		return NULL;
	
	VGuint lookupTable[256];
	int i;
	for(i=0; i<256; i++)
		lookupTable[i] = (VGuint)PyInt_AsLong(PyList_GetItem(py_lookupTable, i));
	
	vgLookupSingle((VGImage)dst, (VGImage)src, lookupTable, (VGImageChannel)sourceChannel, (VGboolean)outputLinear, (VGboolean)outputPremultiplied);
	Py_RETURN_NONE;
}

PyObject* pyvgHardwareQuery(PyObject* self, PyObject* args)
{
	int key=0, setting=0;
	if( !PyArg_ParseTuple(args, "ii", &key, &setting) )
		return NULL;
	
	return Py_BuildValue("i", vgHardwareQuery((VGHardwareQueryType)key, (VGint)setting));
}

PyObject* pyvgGetString(PyObject* self, PyObject* args)
{
	int name;
	if( !PyArg_ParseTuple(args, "i", &name) )
		return NULL;
	
	return PyString_FromString((char*)vgGetString((VGStringID)name));
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
