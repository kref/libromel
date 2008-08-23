#include "VGUConsts.h"


void pyVGU_initConsts(PyObject* m)
{
	PyObject *cst;
	
	cst = PyInt_FromLong(VGU_NO_ERROR);
	PyModule_AddObject(m, "VGU_NO_ERROR", cst);
	
	cst = PyInt_FromLong(VGU_BAD_HANDLE_ERROR);
	PyModule_AddObject(m, "VGU_BAD_HANDLE_ERROR", cst);
	
	cst = PyInt_FromLong(VGU_ILLEGAL_ARGUMENT_ERROR);
	PyModule_AddObject(m, "VGU_ILLEGAL_ARGUMENT_ERROR", cst);
	
	cst = PyInt_FromLong(VGU_OUT_OF_MEMORY_ERROR);
	PyModule_AddObject(m, "VGU_OUT_OF_MEMORY_ERROR", cst);
	
	cst = PyInt_FromLong(VGU_PATH_CAPABILITY_ERROR);
	PyModule_AddObject(m, "VGU_PATH_CAPABILITY_ERROR", cst);
	
	cst = PyInt_FromLong(VGU_BAD_WARP_ERROR);
	PyModule_AddObject(m, "VGU_BAD_WARP_ERROR", cst);
	
	cst = PyInt_FromLong(VGU_ARC_OPEN);
	PyModule_AddObject(m, "VGU_ARC_OPEN", cst);
	
	cst = PyInt_FromLong(VGU_ARC_CHORD);
	PyModule_AddObject(m, "VGU_ARC_CHORD", cst);
	
	cst = PyInt_FromLong(VGU_ARC_PIE);
	PyModule_AddObject(m, "VGU_ARC_PIE", cst);
}
