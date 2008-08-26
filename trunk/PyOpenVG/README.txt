PyOpenVG : Python binding to the OpenVG API
By : Limestrael
email : ypares@tele2.fr


|-----------------------------|
|How to install this binding ?|
|-----------------------------|

Once the ShivaVG implementation is installed on your computer, just run the command : "python setup.py install"


|-------------------------|
|How to use this binding ?|
|-------------------------|

This binding has been developped with the ShivaVG implementation of OpenVG.
That is why, until EGL is implemented, the function vgCreateContextSH(int window_width, int window_height) must be used prior to any OpenVG call.
Besides, don't forget to use the function vgDestroyContextSH() when the application closes. (Obviously, no OpenVG call will be accepted after the VG context closure).

The binding consists in a package OpenVG containing two modules: VG and VGU.
Then, just do:	"from OpenVG.VG import *"
		"from OpenVG.VGU import *"

All the python vgXxxx functions are the same than the C ones.
There is only a few exceptions with the getters:
	- C: vgGetfv(VGParamType type, VGint count, VGfloat * values);
	- Python: vgGetfv(type[, count]) -> values
		( if count is not specified, its value will automatically be get by calling vgGetVectorSize(type) )
	
	Use the functions vgGetiv and vgGetParameter*v likewise.
