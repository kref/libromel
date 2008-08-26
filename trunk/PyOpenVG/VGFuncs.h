#ifndef PYVG_FUNCS_HEADER
#define PYVG_FUNCS_HEADER

#include <vg/openvg.h>

#include <Python.h>

PyObject* pyvgGetError(PyObject* self, PyObject* args);

PyObject* pyvgFlush(PyObject* self, PyObject* args);

PyObject* pyvgFinish(PyObject* self, PyObject* args);

PyObject* pyvgSetf(PyObject* self, PyObject* args);

PyObject* pyvgSeti(PyObject* self, PyObject* args);

PyObject* pyvgSetfv(PyObject* self, PyObject* args);

PyObject* pyvgSetiv(PyObject* self, PyObject* args);

PyObject* pyvgGetf(PyObject* self, PyObject* args);

PyObject* pyvgGeti(PyObject* self, PyObject* args);

PyObject* pyvgGetVectorSize(PyObject* self, PyObject* args);

PyObject* pyvgGetfv(PyObject* self, PyObject* args);

PyObject* pyvgGetiv(PyObject* self, PyObject* args);

PyObject* pyvgSetParameterf(PyObject* self, PyObject* args);

PyObject* pyvgSetParameteri(PyObject* self, PyObject* args);

PyObject* pyvgSetParameterfv(PyObject* self, PyObject* args);

PyObject* pyvgSetParameteriv(PyObject* self, PyObject* args);

PyObject* pyvgGetParameterf(PyObject* self, PyObject* args);

PyObject* pyvgGetParameteri(PyObject* self, PyObject* args);

PyObject* pyvgGetParameterVectorSize(PyObject* self, PyObject* args);

PyObject* pyvgGetParameterfv(PyObject* self, PyObject* args);

PyObject* pyvgGetParameteriv(PyObject* self, PyObject* args);

PyObject* pyvgLoadIdentity(PyObject* self, PyObject* args);

PyObject* pyvgLoadMatrix(PyObject* self, PyObject* args);

PyObject* pyvgGetMatrix(PyObject* self, PyObject* args);

PyObject* pyvgMultMatrix(PyObject* self, PyObject* args);

PyObject* pyvgTranslate(PyObject* self, PyObject* args);

PyObject* pyvgScale(PyObject* self, PyObject* args);

PyObject* pyvgShear(PyObject* self, PyObject* args);

PyObject* pyvgRotate(PyObject* self, PyObject* args);

PyObject* pyvgMask(PyObject* self, PyObject* args);

PyObject* pyvgClear(PyObject* self, PyObject* args);

PyObject* pyvgCreatePath(PyObject* self, PyObject* args);

PyObject* pyvgClearPath(PyObject* self, PyObject* args);

PyObject* pyvgDestroyPath(PyObject* self, PyObject* args);

PyObject* pyvgRemovePathCapabilities(PyObject* self, PyObject* args);

PyObject* pyvgGetPathCapabilities(PyObject* self, PyObject* args);

PyObject* pyvgAppendPath(PyObject* self, PyObject* args);

PyObject* pyvgAppendPathData(PyObject* self, PyObject* Args);

PyObject* pyvgModifyPathCoords(PyObject* self, PyObject* args);

PyObject* pyvgTransformPath(PyObject* self, PyObject* args);

PyObject* pyvgInterpolatePath(PyObject* self, PyObject* args);

PyObject* pyvgPathLength(PyObject* self, PyObject* args);

PyObject* pyvgPointAlongPath(PyObject* self, PyObject* args);

PyObject* pyvgPathBounds(PyObject* self, PyObject* args);

PyObject* pyvgPathTransformedBounds(PyObject* self, PyObject* args);

PyObject* pyvgDrawPath(PyObject* self, PyObject* args);

PyObject* pyvgCreatePaint(PyObject* self, PyObject* args);

PyObject* pyvgDestroyPaint(PyObject* self, PyObject* args);

PyObject* pyvgSetPaint(PyObject* self, PyObject* args);

PyObject* pyvgGetPaint(PyObject* self, PyObject* args);

PyObject* pyvgSetColor(PyObject* self, PyObject* args);

PyObject* pyvgGetColor(PyObject* self, PyObject* args);

PyObject* pyvgPaintPattern(PyObject* self, PyObject* args);

PyObject* pyvgCreateImage(PyObject* self, PyObject* args);

PyObject* pyvgDestroyImage(PyObject* self, PyObject* args);

PyObject* pyvgClearImage(PyObject* self, PyObject* args);

PyObject* pyvgImageSubData(PyObject* self, PyObject* args);

PyObject* pyvgGetImageSubData(PyObject* self, PyObject* args);

PyObject* pyvgChildImage(PyObject* self, PyObject* args);

PyObject* pyvgGetParent(PyObject* self, PyObject* args);

PyObject* pyvgCopyImage(PyObject* self, PyObject* args);

PyObject* pyvgDrawImage(PyObject* self, PyObject* args);

PyObject* pyvgSetPixels(PyObject* self, PyObject* args);

PyObject* pyvgWritePixels(PyObject* self, PyObject* args);

PyObject* pyvgGetPixels(PyObject* self, PyObject* args);

PyObject* pyvgReadPixels(PyObject* self, PyObject* args);

PyObject* pyvgCopyPixels(PyObject* self, PyObject* args);

PyObject* pyvgColorMatrix(PyObject* self, PyObject* args);

PyObject* pyvgConvolve(PyObject* self, PyObject* args);

PyObject* pyvgSeparableConvolve(PyObject* self, PyObject* args);

PyObject* pyvgGaussianBlur(PyObject* self, PyObject* args);

PyObject* pyvgLookup(PyObject* self, PyObject* args);

PyObject* pyvgLookupSingle(PyObject* self, PyObject* args);

PyObject* pyvgHardwareQuery(PyObject* self, PyObject* args);

PyObject* pyvgGetString(PyObject* self, PyObject* args);

PyObject* pyvgCreateContextSH(PyObject* self, PyObject* args);

PyObject* pyvgResizeSurfaceSH(PyObject* self, PyObject* args);

PyObject* pyvgDestroyContextSH(PyObject* self, PyObject* args);

#endif
