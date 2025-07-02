#include <libdragon.h>

int main(void) {
    display_init(RESOLUTION_320x240, DEPTH_16_BPP, 2, GAMMA_NONE, ANTIALIAS_RESAMPLE);
    surface_t* disp;

    while(1) {
        disp = display_get();
        graphics_fill_screen(disp, graphics_make_color(80, 160, 255, 255)); // azul claro
        display_show(disp);
    }
    return 0;
}
