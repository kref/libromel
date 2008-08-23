#include "VGConsts.h"


void pyVG_initConsts(PyObject* m)
{
	PyObject *cst;
	
	cst = PyInt_FromLong(VG_FALSE);
	PyModule_AddObject(m, "VG_FALSE", cst);
	
	cst = PyInt_FromLong(VG_TRUE);
	PyModule_AddObject(m, "VG_TRUE", cst);
	
	cst = PyInt_FromLong(VG_MAXSHORT);
	PyModule_AddObject(m, "VG_MAXSHORT", cst);
	
	cst = PyInt_FromLong(VG_MAXINT);
	PyModule_AddObject(m, "VG_MAXINT", cst);
	
	cst = PyInt_FromLong((long)VG_INVALID_HANDLE);
	PyModule_AddObject(m, "VG_INVALID_HANDLE", cst);
	
	cst = PyInt_FromLong(VG_NO_ERROR);
	PyModule_AddObject(m, "VG_NO_ERROR", cst);
	
	cst = PyInt_FromLong(VG_BAD_HANDLE_ERROR);
	PyModule_AddObject(m, "VG_BAD_HANDLE_ERROR", cst);
	
	cst = PyInt_FromLong(VG_ILLEGAL_ARGUMENT_ERROR);
	PyModule_AddObject(m, "VG_ILLEGAL_ARGUMENT_ERROR", cst);
	
	cst = PyInt_FromLong(VG_OUT_OF_MEMORY_ERROR);
	PyModule_AddObject(m, "VG_OUT_OF_MEMORY_ERROR", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_ERROR);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_ERROR", cst);
	
	cst = PyInt_FromLong(VG_UNSUPPORTED_IMAGE_FORMAT_ERROR);
	PyModule_AddObject(m, "VG_UNSUPPORTED_IMAGE_FORMAT_ERROR", cst);
	
	cst = PyInt_FromLong(VG_UNSUPPORTED_PATH_FORMAT_ERROR);
	PyModule_AddObject(m, "VG_UNSUPPORTED_PATH_FORMAT_ERROR", cst);
	
	cst = PyInt_FromLong(VG_IMAGE_IN_USE_ERROR);
	PyModule_AddObject(m, "VG_NO_CONTEXT_ERROR", cst);
	
	cst = PyInt_FromLong(VG_MATRIX_MODE);
	PyModule_AddObject(m, "VG_MATRIX_MODE", cst);
	
	cst = PyInt_FromLong(VG_FILL_RULE);
	PyModule_AddObject(m, "VG_FILL_RULE", cst);
	
	cst = PyInt_FromLong(VG_IMAGE_QUALITY);
	PyModule_AddObject(m, "VG_IMAGE_QUALITY", cst);
	
	cst = PyInt_FromLong(VG_BLEND_MODE);
	PyModule_AddObject(m, "VG_BLEND_MODE", cst);
	
	cst = PyInt_FromLong(VG_IMAGE_MODE);
	PyModule_AddObject(m, "VG_IMAGE_MODE", cst);
	
	cst = PyInt_FromLong(VG_SCISSOR_RECTS);
	PyModule_AddObject(m, "VG_SCISSOR_RECTS", cst);
	
	cst = PyInt_FromLong(VG_STROKE_LINE_WIDTH);
	PyModule_AddObject(m, "VG_STROKE_LINE_WIDTH", cst);
	
	cst = PyInt_FromLong(VG_STROKE_CAP_STYLE);
	PyModule_AddObject(m, "VG_STROKE_CAP_STYLE", cst);
	
	cst = PyInt_FromLong(VG_STROKE_JOIN_STYLE);
	PyModule_AddObject(m, "VG_STROKE_JOIN_STYLE", cst);
	
	cst = PyInt_FromLong(VG_STROKE_MITER_LIMIT);
	PyModule_AddObject(m, "VG_STROKE_MITER_LIMIT", cst);
	
	cst = PyInt_FromLong(VG_STROKE_DASH_PATTERN);
	PyModule_AddObject(m, "VG_STROKE_DASH_PATTERN", cst);
	
	cst = PyInt_FromLong(VG_STROKE_DASH_PHASE);
	PyModule_AddObject(m, "VG_STROKE_DASH_PHASE", cst);
	
	cst = PyInt_FromLong(VG_STROKE_DASH_PHASE_RESET);
	PyModule_AddObject(m, "VG_STROKE_DASH_PHASE_RESET", cst);
	
	cst = PyInt_FromLong(VG_TILE_FILL_COLOR);
	PyModule_AddObject(m, "VG_TILE_FILL_COLOR", cst);
	
	cst = PyInt_FromLong(VG_CLEAR_COLOR);
	PyModule_AddObject(m, "VG_CLEAR_COLOR", cst);
	
	cst = PyInt_FromLong(VG_MASKING);
	PyModule_AddObject(m, "VG_MASKING", cst);
	
	cst = PyInt_FromLong(VG_SCISSORING);
	PyModule_AddObject(m, "VG_SCISSORING", cst);
	
	cst = PyInt_FromLong(VG_PIXEL_LAYOUT);
	PyModule_AddObject(m, "VG_PIXEL_LAYOUT", cst);
	
	cst = PyInt_FromLong(VG_SCREEN_LAYOUT);
	PyModule_AddObject(m, "VG_SCREEN_LAYOUT", cst);
	
	cst = PyInt_FromLong(VG_FILTER_FORMAT_LINEAR);
	PyModule_AddObject(m, "VG_FILTER_FORMAT_LINEAR", cst);
	
	cst = PyInt_FromLong(VG_FILTER_FORMAT_PREMULTIPLIED);
	PyModule_AddObject(m, "VG_FILTER_FORMAT_PREMULTIPLIED", cst);
	
	cst = PyInt_FromLong(VG_FILTER_CHANNEL_MASK);
	PyModule_AddObject(m, "VG_FILTER_CHANNEL_MASK", cst);
	
	cst = PyInt_FromLong(VG_MAX_SCISSOR_RECTS);
	PyModule_AddObject(m, "VG_MAX_SCISSOR_RECTS", cst);
	
	cst = PyInt_FromLong(VG_MAX_DASH_COUNT);
	PyModule_AddObject(m, "VG_MAX_DASH_COUNT", cst);
	
	cst = PyInt_FromLong(VG_MAX_KERNEL_SIZE);
	PyModule_AddObject(m, "VG_MAX_KERNEL_SIZE", cst);
	
	cst = PyInt_FromLong(VG_MAX_SEPARABLE_KERNEL_SIZE);
	PyModule_AddObject(m, "VG_MAX_SEPARABLE_KERNEL_SIZE", cst);
	
	cst = PyInt_FromLong(VG_MAX_COLOR_RAMP_STOPS);
	PyModule_AddObject(m, "VG_MAX_COLOR_RAMP_STOPS", cst);
	
	cst = PyInt_FromLong(VG_MAX_IMAGE_WIDTH);
	PyModule_AddObject(m, "VG_MAX_IMAGE_WIDTH", cst);
	
	cst = PyInt_FromLong(VG_MAX_IMAGE_HEIGHT);
	PyModule_AddObject(m, "VG_MAX_IMAGE_HEIGHT", cst);
	
	cst = PyInt_FromLong(VG_MAX_IMAGE_PIXELS);
	PyModule_AddObject(m, "VG_MAX_IMAGE_PIXELS", cst);
	
	cst = PyInt_FromLong(VG_MAX_IMAGE_BYTES);
	PyModule_AddObject(m, "VG_MAX_IMAGE_BYTES", cst);
	
	cst = PyInt_FromLong(VG_MAX_FLOAT);
	PyModule_AddObject(m, "VG_MAX_FLOAT", cst);
	
	cst = PyInt_FromLong(VG_MAX_GAUSSIAN_STD_DEVIATION);
	PyModule_AddObject(m, "VG_MAX_GAUSSIAN_STD_DEVIATION", cst);
	
	cst = PyInt_FromLong(VG_RENDERING_QUALITY_NONANTIALIASED);
	PyModule_AddObject(m, "VG_RENDERING_QUALITY_NONANTIALIASED", cst);
	
	cst = PyInt_FromLong(VG_RENDERING_QUALITY_FASTER);
	PyModule_AddObject(m, "VG_RENDERING_QUALITY_FASTER", cst);
	
	cst = PyInt_FromLong(VG_RENDERING_QUALITY_BETTER);
	PyModule_AddObject(m, "VG_RENDERING_QUALITY_BETTER", cst);
	
	cst = PyInt_FromLong(VG_PIXEL_LAYOUT_UNKNOWN);
	PyModule_AddObject(m, "VG_PIXEL_LAYOUT_UNKNOWN", cst);
	
	cst = PyInt_FromLong(VG_PIXEL_LAYOUT_RGB_VERTICAL);
	PyModule_AddObject(m, "VG_PIXEL_LAYOUT_RGB_VERTICAL", cst);
	
	cst = PyInt_FromLong(VG_PIXEL_LAYOUT_BGR_VERTICAL);
	PyModule_AddObject(m, "VG_PIXEL_LAYOUT_BGR_VERTICAL", cst);
	
	cst = PyInt_FromLong(VG_PIXEL_LAYOUT_RGB_HORIZONTAL);
	PyModule_AddObject(m, "VG_PIXEL_LAYOUT_RGB_HORIZONTAL", cst);
	
	cst = PyInt_FromLong(VG_PIXEL_LAYOUT_BGR_HORIZONTAL);
	PyModule_AddObject(m, "VG_PIXEL_LAYOUT_BGR_HORIZONTAL", cst);
	
	cst = PyInt_FromLong(VG_MATRIX_PATH_USER_TO_SURFACE);
	PyModule_AddObject(m, "VG_MATRIX_PATH_USER_TO_SURFACE", cst);
	
	cst = PyInt_FromLong(VG_MATRIX_IMAGE_USER_TO_SURFACE);
	PyModule_AddObject(m, "VG_MATRIX_IMAGE_USER_TO_SURFACE", cst);
	
	cst = PyInt_FromLong(VG_MATRIX_FILL_PAINT_TO_USER);
	PyModule_AddObject(m, "VG_MATRIX_FILL_PAINT_TO_USER", cst);
	
	cst = PyInt_FromLong(VG_MATRIX_STROKE_PAINT_TO_USER);
	PyModule_AddObject(m, "VG_MATRIX_STROKE_PAINT_TO_USER", cst);
	
	cst = PyInt_FromLong(VG_CLEAR_MASK);
	PyModule_AddObject(m, "VG_CLEAR_MASK", cst);
	
	cst = PyInt_FromLong(VG_FILL_MASK);
	PyModule_AddObject(m, "VG_FILL_MASK", cst);
	
	cst = PyInt_FromLong(VG_SET_MASK);
	PyModule_AddObject(m, "VG_SET_MASK", cst);
	
	cst = PyInt_FromLong(VG_UNION_MASK);
	PyModule_AddObject(m, "VG_UNION_MASK", cst);
	
	cst = PyInt_FromLong(VG_INTERSECT_MASK);
	PyModule_AddObject(m, "VG_INTERSECT_MASK", cst);
	
	cst = PyInt_FromLong(VG_SUBTRACT_MASK);
	PyModule_AddObject(m, "VG_SUBTRACT_MASK", cst);
	
	cst = PyInt_FromLong(VG_PATH_FORMAT_STANDARD);
	PyModule_AddObject(m, "VG_PATH_FORMAT_STANDARD", cst);
	
	cst = PyInt_FromLong(VG_PATH_DATATYPE_S_8);
	PyModule_AddObject(m, "VG_PATH_DATATYPE_S_8", cst);
	
	cst = PyInt_FromLong(VG_PATH_DATATYPE_S_16);
	PyModule_AddObject(m, "VG_PATH_DATATYPE_S_16", cst);
	
	cst = PyInt_FromLong(VG_PATH_DATATYPE_S_32);
	PyModule_AddObject(m, "VG_PATH_DATATYPE_S_32", cst);
	
	cst = PyInt_FromLong(VG_PATH_DATATYPE_F);
	PyModule_AddObject(m, "VG_PATH_DATATYPE_F", cst);
	
	cst = PyInt_FromLong(VG_ABSOLUTE);
	PyModule_AddObject(m, "VG_ABSOLUTE", cst);
	
	cst = PyInt_FromLong(VG_RELATIVE);
	PyModule_AddObject(m, "VG_RELATIVE", cst);
	
	cst = PyInt_FromLong(VG_CLOSE_PATH);
	PyModule_AddObject(m, "VG_CLOSE_PATH", cst);
	
	cst = PyInt_FromLong(VG_MOVE_TO);
	PyModule_AddObject(m, "VG_MOVE_TO", cst);
	
	cst = PyInt_FromLong(VG_LINE_TO);
	PyModule_AddObject(m, "VG_LINE_TO", cst);
	
	cst = PyInt_FromLong(VG_HLINE_TO);
	PyModule_AddObject(m, "VG_HLINE_TO", cst);
	
	cst = PyInt_FromLong(VG_VLINE_TO);
	PyModule_AddObject(m, "VG_VLINE_TO", cst);
	
	cst = PyInt_FromLong(VG_QUAD_TO);
	PyModule_AddObject(m, "VG_QUAD_TO", cst);
	
	cst = PyInt_FromLong(VG_CUBIC_TO);
	PyModule_AddObject(m, "VG_CUBIC_TO", cst);
	
	cst = PyInt_FromLong(VG_SQUAD_TO);
	PyModule_AddObject(m, "VG_SQUAD_TO", cst);
	
	cst = PyInt_FromLong(VG_SCUBIC_TO);
	PyModule_AddObject(m, "VG_SCUBIC_TO", cst);
	
	cst = PyInt_FromLong(VG_SCCWARC_TO);
	PyModule_AddObject(m, "VG_SCCWARC_TO", cst);
	
	cst = PyInt_FromLong(VG_SCWARC_TO);
	PyModule_AddObject(m, "VG_SCWARC_TO", cst);
	
	cst = PyInt_FromLong(VG_LCCWARC_TO);
	PyModule_AddObject(m, "VG_LCCWARC_TO", cst);
	
	cst = PyInt_FromLong(VG_LCWARC_TO);
	PyModule_AddObject(m, "VG_LCWARC_TO", cst);
	
	cst = PyInt_FromLong(VG_MOVE_TO_ABS);
	PyModule_AddObject(m, "VG_MOVE_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_MOVE_TO_REL);
	PyModule_AddObject(m, "VG_MOVE_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_LINE_TO_ABS);
	PyModule_AddObject(m, "VG_LINE_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_LINE_TO_REL);
	PyModule_AddObject(m, "VG_LINE_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_HLINE_TO_ABS);
	PyModule_AddObject(m, "VG_HLINE_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_HLINE_TO_REL);
	PyModule_AddObject(m, "VG_HLINE_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_VLINE_TO_ABS);
	PyModule_AddObject(m, "VG_VLINE_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_VLINE_TO_REL);
	PyModule_AddObject(m, "VG_VLINE_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_QUAD_TO_ABS);
	PyModule_AddObject(m, "VG_QUAD_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_QUAD_TO_REL);
	PyModule_AddObject(m, "VG_QUAD_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_CUBIC_TO_ABS);
	PyModule_AddObject(m, "VG_CUBIC_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_CUBIC_TO_REL);
	PyModule_AddObject(m, "VG_CUBIC_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_SQUAD_TO_ABS);
	PyModule_AddObject(m, "VG_SQUAD_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_SQUAD_TO_REL);
	PyModule_AddObject(m, "VG_SQUAD_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_SCUBIC_TO_ABS);
	PyModule_AddObject(m, "VG_SCUBIC_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_SCUBIC_TO_REL);
	PyModule_AddObject(m, "VG_SCUBIC_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_SCCWARC_TO_ABS);
	PyModule_AddObject(m, "VG_SCCWARC_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_SCCWARC_TO_REL);
	PyModule_AddObject(m, "VG_SCCWARC_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_SCWARC_TO_ABS);
	PyModule_AddObject(m, "VG_SCWARC_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_SCWARC_TO_REL);
	PyModule_AddObject(m, "VG_SCWARC_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_LCCWARC_TO_ABS);
	PyModule_AddObject(m, "VG_LCCWARC_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_LCCWARC_TO_REL);
	PyModule_AddObject(m, "VG_LCCWARC_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_LCWARC_TO_ABS);
	PyModule_AddObject(m, "VG_LCWARC_TO_ABS", cst);
	
	cst = PyInt_FromLong(VG_LCWARC_TO_REL);
	PyModule_AddObject(m, "VG_LCWARC_TO_REL", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_APPEND_FROM);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_APPEND_FROM", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_APPEND_TO);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_APPEND_TO", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_MODIFY);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_MODIFY", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_TRANSFORM_FROM);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_TRANSFORM_FROM", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_TRANSFORM_TO);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_TRANSFORM_TO", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_INTERPOLATE_FROM);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_INTERPOLATE_FROM", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_INTERPOLATE_TO);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_INTERPOLATE_TO", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_PATH_LENGTH);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_PATH_LENGTH", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_POINT_ALONG_PATH);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_POINT_ALONG_PATH", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_TANGENT_ALONG_PATH);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_TANGENT_ALONG_PATH", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_PATH_BOUNDS);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_PATH_BOUNDS", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_PATH_TRANSFORMED_BOUNDS);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_PATH_TRANSFORMED_BOUNDS", cst);
	
	cst = PyInt_FromLong(VG_PATH_CAPABILITY_ALL);
	PyModule_AddObject(m, "VG_PATH_CAPABILITY_ALL", cst);
	
	cst = PyInt_FromLong(VG_PATH_FORMAT);
	PyModule_AddObject(m, "VG_PATH_FORMAT", cst);
	
	cst = PyInt_FromLong(VG_PATH_DATATYPE);
	PyModule_AddObject(m, "VG_PATH_DATATYPE", cst);
	
	cst = PyInt_FromLong(VG_PATH_SCALE);
	PyModule_AddObject(m, "VG_PATH_SCALE", cst);
	
	cst = PyInt_FromLong(VG_PATH_BIAS);
	PyModule_AddObject(m, "VG_PATH_BIAS", cst);
	
	cst = PyInt_FromLong(VG_PATH_NUM_SEGMENTS);
	PyModule_AddObject(m, "VG_PATH_NUM_SEGMENTS", cst);
	
	cst = PyInt_FromLong(VG_PATH_NUM_COORDS);
	PyModule_AddObject(m, "VG_PATH_NUM_COORDS", cst);
	
	cst = PyInt_FromLong(VG_CAP_BUTT);
	PyModule_AddObject(m, "VG_CAP_BUTT", cst);
	
	cst = PyInt_FromLong(VG_CAP_ROUND);
	PyModule_AddObject(m, "VG_CAP_ROUND", cst);
	
	cst = PyInt_FromLong(VG_CAP_SQUARE);
	PyModule_AddObject(m, "VG_CAP_SQUARE", cst);
	
	cst = PyInt_FromLong(VG_JOIN_MITER);
	PyModule_AddObject(m, "VG_JOIN_MITER", cst);
	
	cst = PyInt_FromLong(VG_JOIN_ROUND);
	PyModule_AddObject(m, "VG_JOIN_ROUND", cst);
	
	cst = PyInt_FromLong(VG_JOIN_BEVEL);
	PyModule_AddObject(m, "VG_JOIN_BEVEL", cst);
	
	cst = PyInt_FromLong(VG_EVEN_ODD);
	PyModule_AddObject(m, "VG_EVEN_ODD", cst);
	
	cst = PyInt_FromLong(VG_NON_ZERO);
	PyModule_AddObject(m, "VG_NON_ZERO", cst);
	
	cst = PyInt_FromLong(VG_STROKE_PATH);
	PyModule_AddObject(m, "VG_STROKE_PATH", cst);
	
	cst = PyInt_FromLong(VG_FILL_PATH);
	PyModule_AddObject(m, "VG_FILL_PATH", cst);
	
	cst = PyInt_FromLong(VG_PAINT_TYPE);
	PyModule_AddObject(m, "VG_PAINT_TYPE", cst);
	
	cst = PyInt_FromLong(VG_PAINT_COLOR);
	PyModule_AddObject(m, "VG_PAINT_COLOR", cst);
	
	cst = PyInt_FromLong(VG_PAINT_COLOR_RAMP_SPREAD_MODE);
	PyModule_AddObject(m, "VG_PAINT_COLOR_RAMP_SPREAD_MODE", cst);
	
	cst = PyInt_FromLong(VG_PAINT_COLOR_RAMP_PREMULTIPLIED);
	PyModule_AddObject(m, "VG_PAINT_COLOR_RAMP_PREMULTIPLIED", cst);
	
	cst = PyInt_FromLong(VG_PAINT_COLOR_RAMP_STOPS);
	PyModule_AddObject(m, "VG_PAINT_COLOR_RAMP_STOPS", cst);
	
	cst = PyInt_FromLong(VG_PAINT_LINEAR_GRADIENT);
	PyModule_AddObject(m, "VG_PAINT_LINEAR_GRADIENT", cst);
	
	cst = PyInt_FromLong(VG_PAINT_RADIAL_GRADIENT);
	PyModule_AddObject(m, "VG_PAINT_RADIAL_GRADIENT", cst);
	
	cst = PyInt_FromLong(VG_PAINT_PATTERN_TILING_MODE);
	PyModule_AddObject(m, "VG_PAINT_PATTERN_TILING_MODE", cst);
	
	cst = PyInt_FromLong(VG_PAINT_TYPE_COLOR);
	PyModule_AddObject(m, "VG_PAINT_TYPE_COLOR", cst);
	
	cst = PyInt_FromLong(VG_PAINT_TYPE_LINEAR_GRADIENT);
	PyModule_AddObject(m, "VG_PAINT_TYPE_LINEAR_GRADIENT", cst);
	
	cst = PyInt_FromLong(VG_PAINT_TYPE_RADIAL_GRADIENT);
	PyModule_AddObject(m, "VG_PAINT_TYPE_RADIAL_GRADIENT", cst);
	
	cst = PyInt_FromLong(VG_PAINT_TYPE_PATTERN);
	PyModule_AddObject(m, "VG_PAINT_TYPE_PATTERN", cst);
	
	cst = PyInt_FromLong(VG_COLOR_RAMP_SPREAD_PAD);
	PyModule_AddObject(m, "VG_COLOR_RAMP_SPREAD_PAD", cst);
	
	cst = PyInt_FromLong(VG_COLOR_RAMP_SPREAD_REPEAT);
	PyModule_AddObject(m, "VG_COLOR_RAMP_SPREAD_REPEAT", cst);
	
	cst = PyInt_FromLong(VG_COLOR_RAMP_SPREAD_REFLECT);
	PyModule_AddObject(m, "VG_COLOR_RAMP_SPREAD_REFLECT", cst);
	
	cst = PyInt_FromLong(VG_TILE_FILL);
	PyModule_AddObject(m, "VG_TILE_FILL", cst);
	
	cst = PyInt_FromLong(VG_TILE_PAD);
	PyModule_AddObject(m, "VG_TILE_PAD", cst);
	
	cst = PyInt_FromLong(VG_TILE_REPEAT);
	PyModule_AddObject(m, "VG_TILE_REPEAT", cst);
	
	cst = PyInt_FromLong(VG_TILE_REFLECT);
	PyModule_AddObject(m, "VG_TILE_REFLECT", cst);
	
	cst = PyInt_FromLong(VG_sRGBX_8888);
	PyModule_AddObject(m, "VG_sRGBX_8888", cst);
	
	cst = PyInt_FromLong(VG_sRGBA_8888);
	PyModule_AddObject(m, "VG_sRGBA_8888", cst);
	
	cst = PyInt_FromLong(VG_sRGBA_8888_PRE);
	PyModule_AddObject(m, "VG_sRGBA_8888_PRE", cst);
	
	cst = PyInt_FromLong(VG_sRGB_565);
	PyModule_AddObject(m, "VG_sRGB_565", cst);
	
	cst = PyInt_FromLong(VG_sRGBA_5551);
	PyModule_AddObject(m, "VG_sRGBA_5551", cst);
	
	cst = PyInt_FromLong(VG_sRGBA_4444);
	PyModule_AddObject(m, "VG_sRGBA_4444", cst);
	
	cst = PyInt_FromLong(VG_sL_8);
	PyModule_AddObject(m, "VG_sL_8", cst);
	
	cst = PyInt_FromLong(VG_lRGBX_8888);
	PyModule_AddObject(m, "VG_lRGBX_8888", cst);
	
	cst = PyInt_FromLong(VG_lRGBA_8888);
	PyModule_AddObject(m, "VG_lRGBA_8888", cst);
	
	cst = PyInt_FromLong(VG_lRGBA_8888_PRE);
	PyModule_AddObject(m, "VG_lRGBA_8888_PRE", cst);
	
	cst = PyInt_FromLong(VG_lL_8);
	PyModule_AddObject(m, "VG_lL_8", cst);
	
	cst = PyInt_FromLong(VG_A_8);
	PyModule_AddObject(m, "VG_A_8", cst);
	
	cst = PyInt_FromLong(VG_BW_1);
	PyModule_AddObject(m, "VG_BW_1", cst);
	
	cst = PyInt_FromLong(VG_sXRGB_8888);
	PyModule_AddObject(m, "VG_sXRGB_8888", cst);
	
	cst = PyInt_FromLong(VG_sARGB_8888);
	PyModule_AddObject(m, "VG_sARGB_8888", cst);
	
	cst = PyInt_FromLong(VG_sARGB_8888_PRE);
	PyModule_AddObject(m, "VG_sARGB_8888_PRE", cst);
	
	cst = PyInt_FromLong(VG_sARGB_1555);
	PyModule_AddObject(m, "VG_sARGB_1555", cst);
	
	cst = PyInt_FromLong(VG_sARGB_4444);
	PyModule_AddObject(m, "VG_sARGB_4444", cst);
	
	cst = PyInt_FromLong(VG_lXRGB_8888);
	PyModule_AddObject(m, "VG_lXRGB_8888", cst);
	
	cst = PyInt_FromLong(VG_lARGB_8888);
	PyModule_AddObject(m, "VG_lARGB_8888", cst);
	
	cst = PyInt_FromLong(VG_lARGB_8888_PRE);
	PyModule_AddObject(m, "VG_lARGB_8888_PRE", cst);
	
	cst = PyInt_FromLong(VG_sBGRX_8888);
	PyModule_AddObject(m, "VG_sBGRX_8888", cst);
	
	cst = PyInt_FromLong(VG_sBGRA_8888);
	PyModule_AddObject(m, "VG_sBGRA_8888", cst);
	
	cst = PyInt_FromLong(VG_sBGRA_8888_PRE);
	PyModule_AddObject(m, "VG_sBGRA_8888_PRE", cst);
	
	cst = PyInt_FromLong(VG_sBGR_565);
	PyModule_AddObject(m, "VG_sBGR_565", cst);
	
	cst = PyInt_FromLong(VG_sBGRA_5551);
	PyModule_AddObject(m, "VG_sBGRA_5551", cst);
	
	cst = PyInt_FromLong(VG_sBGRA_4444);
	PyModule_AddObject(m, "VG_sBGRA_4444", cst);
	
	cst = PyInt_FromLong(VG_lBGRX_8888);
	PyModule_AddObject(m, "VG_lBGRX_8888", cst);
	
	cst = PyInt_FromLong(VG_lBGRA_8888);
	PyModule_AddObject(m, "VG_lBGRA_8888", cst);
	
	cst = PyInt_FromLong(VG_lBGRA_8888_PRE);
	PyModule_AddObject(m, "VG_lBGRA_8888_PRE", cst);
	
	cst = PyInt_FromLong(VG_sXBGR_8888);
	PyModule_AddObject(m, "VG_sXBGR_8888", cst);
	
	cst = PyInt_FromLong(VG_sABGR_8888);
	PyModule_AddObject(m, "VG_sABGR_8888", cst);
	
	cst = PyInt_FromLong(VG_sABGR_8888_PRE);
	PyModule_AddObject(m, "VG_sABGR_8888_PRE", cst);
	
	cst = PyInt_FromLong(VG_sABGR_1555);
	PyModule_AddObject(m, "VG_sABGR_1555", cst);
	
	cst = PyInt_FromLong(VG_sABGR_4444);
	PyModule_AddObject(m, "VG_sABGR_4444", cst);
	
	cst = PyInt_FromLong(VG_lXBGR_8888);
	PyModule_AddObject(m, "VG_lXBGR_8888", cst);
	
	cst = PyInt_FromLong(VG_lABGR_8888);
	PyModule_AddObject(m, "VG_lABGR_8888", cst);
	
	cst = PyInt_FromLong(VG_lABGR_8888_PRE);
	PyModule_AddObject(m, "VG_lABGR_8888_PRE", cst);
	
	cst = PyInt_FromLong(VG_IMAGE_QUALITY_NONANTIALIASED);
	PyModule_AddObject(m, "VG_IMAGE_QUALITY_NONANTIALIASED", cst);
	
	cst = PyInt_FromLong(VG_IMAGE_QUALITY_FASTER);
	PyModule_AddObject(m, "VG_IMAGE_QUALITY_FASTER", cst);
	
	cst = PyInt_FromLong(VG_IMAGE_QUALITY_BETTER);
	PyModule_AddObject(m, "VG_IMAGE_QUALITY_BETTER", cst);
	
	cst = PyInt_FromLong(VG_IMAGE_FORMAT);
	PyModule_AddObject(m, "VG_IMAGE_FORMAT", cst);
	
	cst = PyInt_FromLong(VG_IMAGE_WIDTH);
	PyModule_AddObject(m, "VG_IMAGE_WIDTH", cst);
	
	cst = PyInt_FromLong(VG_IMAGE_HEIGHT);
	PyModule_AddObject(m, "VG_IMAGE_HEIGHT", cst);
	
	cst = PyInt_FromLong(VG_DRAW_IMAGE_NORMAL);
	PyModule_AddObject(m, "VG_DRAW_IMAGE_NORMAL", cst);
	
	cst = PyInt_FromLong(VG_DRAW_IMAGE_MULTIPLY);
	PyModule_AddObject(m, "VG_DRAW_IMAGE_MULTIPLY", cst);
	
	cst = PyInt_FromLong(VG_DRAW_IMAGE_STENCIL);
	PyModule_AddObject(m, "VG_DRAW_IMAGE_STENCIL", cst);
	
	cst = PyInt_FromLong(VG_RED);
	PyModule_AddObject(m, "VG_RED", cst);
	
	cst = PyInt_FromLong(VG_GREEN);
	PyModule_AddObject(m, "VG_GREEN", cst);
	
	cst = PyInt_FromLong(VG_BLUE);
	PyModule_AddObject(m, "VG_BLUE", cst);
	
	cst = PyInt_FromLong(VG_ALPHA);
	PyModule_AddObject(m, "VG_ALPHA", cst);
	
	cst = PyInt_FromLong(VG_BLEND_SRC);
	PyModule_AddObject(m, "VG_BLEND_SRC", cst);
	
	cst = PyInt_FromLong(VG_BLEND_SRC_OVER);
	PyModule_AddObject(m, "VG_BLEND_SRC_OVER", cst);
	
	cst = PyInt_FromLong(VG_BLEND_DST_OVER);
	PyModule_AddObject(m, "VG_BLEND_DST_OVER", cst);
	
	cst = PyInt_FromLong(VG_BLEND_SRC_IN);
	PyModule_AddObject(m, "VG_BLEND_SRC_IN", cst);
	
	cst = PyInt_FromLong(VG_BLEND_DST_IN);
	PyModule_AddObject(m, "VG_BLEND_DST_IN", cst);
	
	cst = PyInt_FromLong(VG_BLEND_MULTIPLY);
	PyModule_AddObject(m, "VG_BLEND_MULTIPLY", cst);
	
	cst = PyInt_FromLong(VG_BLEND_SCREEN);
	PyModule_AddObject(m, "VG_BLEND_SCREEN", cst);
	
	cst = PyInt_FromLong(VG_BLEND_DARKEN);
	PyModule_AddObject(m, "VG_BLEND_DARKEN", cst);
	
	cst = PyInt_FromLong(VG_BLEND_LIGHTEN);
	PyModule_AddObject(m, "VG_BLEND_LIGHTEN", cst);
	
	cst = PyInt_FromLong(VG_BLEND_ADDITIVE);
	PyModule_AddObject(m, "VG_BLEND_ADDITIVE", cst);
	
	cst = PyInt_FromLong(VG_BLEND_SRC_OUT_SH);
	PyModule_AddObject(m, "VG_BLEND_SRC_OUT_SH", cst);
	
	cst = PyInt_FromLong(VG_BLEND_DST_OUT_SH);
	PyModule_AddObject(m, "VG_BLEND_DST_OUT_SH", cst);
	
	cst = PyInt_FromLong(VG_BLEND_SRC_ATOP_SH);
	PyModule_AddObject(m, "VG_BLEND_SRC_ATOP_SH", cst);
	
	cst = PyInt_FromLong(VG_BLEND_DST_ATOP_SH);
	PyModule_AddObject(m, "VG_BLEND_DST_ATOP_SH", cst);
	
	cst = PyInt_FromLong(VG_IMAGE_FORMAT_QUERY);
	PyModule_AddObject(m, "VG_IMAGE_FORMAT_QUERY", cst);
	
	cst = PyInt_FromLong(VG_PATH_DATATYPE_QUERY);
	PyModule_AddObject(m, "VG_PATH_DATATYPE_QUERY", cst);
	
	cst = PyInt_FromLong(VG_HARDWARE_ACCELERATED);
	PyModule_AddObject(m, "VG_HARDWARE_ACCELERATED", cst);
	
	cst = PyInt_FromLong(VG_HARDWARE_UNACCELERATED);
	PyModule_AddObject(m, "VG_HARDWARE_UNACCELERATED", cst);
	
	cst = PyInt_FromLong(VG_VENDOR);
	PyModule_AddObject(m, "VG_VENDOR", cst);
	
	cst = PyInt_FromLong(VG_RENDERER);
	PyModule_AddObject(m, "VG_RENDERER", cst);
	
	cst = PyInt_FromLong(VG_VERSION);
	PyModule_AddObject(m, "VG_VERSION", cst);
	
	cst = PyInt_FromLong(VG_EXTENSIONS);
	PyModule_AddObject(m, "VG_EXTENSIONS", cst);
}
