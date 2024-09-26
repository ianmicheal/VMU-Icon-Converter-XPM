/*
* Original Author:Ian micheal
 * LICENSE: The MIT License (MIT)
 * ------------------------------
 * Copyright (c) 2024 Ian Michael
*/

#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ICON_WIDTH 48
#define ICON_HEIGHT 32

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file.bmp or input_file.png>\n", argv[0]);
        return 1;
    }

    int width, height, channels;
    unsigned char *img = stbi_load(argv[1], &width, &height, &channels, 1);

    if (!img) {
        fprintf(stderr, "Error loading image\n");
        return 1;
    }

    if (width != ICON_WIDTH || height != ICON_HEIGHT) {
        fprintf(stderr, "Image must be 48x32 pixels\n");
        stbi_image_free(img);
        return 1;
    }

    printf("/* XPM */\n");
    printf("static char *vmu_icon =\n");

    for (int y = 0; y < ICON_HEIGHT; y++) {
        printf("\"");
        for (int x = 0; x < ICON_WIDTH; x++) {
            // Assuming pixel values > 127 are white, <= 127 are black
            char pixel = (img[y * ICON_WIDTH + x] > 127) ? '.' : '+';
            putchar(pixel);
        }
        printf("\"%s\n", (y == ICON_HEIGHT - 1) ? ";" : "");
    }

    stbi_image_free(img);
    return 0;
}
