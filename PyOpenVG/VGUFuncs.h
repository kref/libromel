#ifndef PYVGU_FUNCS_HEADER
#define PYVGU_FUNCS_HEADER

#include <vg/openvg.h>
#include <vg/vgu.h>

#include <Python.h>

PyObject* pyvguLine(PyObject* self, PyObject* args);

PyObject* pyvguPolygon(PyObject* self, PyObject* args);

PyObject* pyvguRect(PyObject* self, PyObject* args);

PyObject* pyvguRoundRect(PyObject* self, PyObject* args);

PyObject* pyvguEllipse(PyObject* self, PyObject* args);

PyObject* pyvguArc(PyObject* self, PyObject* args);

#endif
