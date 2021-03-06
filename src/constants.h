#ifndef CONSTANTS_H
#define CONSTANTS_H

#define DEFAULT_OUTPUT_FILENAME "output/output.ppm"
#define DEFAULT_IMAGE_HEIGHT 3000 // in pixels
#define DEFAULT_IMAGE_WIDTH  3000 // in pixels
#define DEFAULT_LINES_PER_JOB 100

#define min_x (-2.5)
#define max_x 1.0
#define min_y (-1.0)
#define max_y 1
#define delta_x (max_x - min_x)
#define delta_y (max_y - min_y)

#define iterations 100
#define iteration_factor (255 / iterations)

#endif
