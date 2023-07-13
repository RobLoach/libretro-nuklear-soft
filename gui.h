#define BASE_WIDTH 1024
#define BASE_HEIGHT 768

#define MAX_WIDTH 2048
#define MAX_HEIGHT 2048

#ifndef M16B
#define M16B
#endif

//#undef M16B

#ifndef M16B
#define PIXEL_TYPE unsigned
#define MPITCH 1
#else
#define PIXEL_TYPE unsigned short
#define MPITCH 2
#endif

extern unsigned rwidth;
extern unsigned rheight;
#ifdef M16B
extern unsigned short int *frame_buf;
#else
extern unsigned int *frame_buf;|
#endif

int gui_init();
int gui_free();
int gui_frame();