[![Entice Logo](https://github.com/vtorri/entice/raw/master/data/icons/entice.png)](https://github.com/vtorri/entice)

[![Build Status](https://cloud.drone.io/api/badges/vtorri/entice/status.svg)](https://cloud.drone.io/vtorri/entice)
[![Coverity Scan](https://scan.coverity.com/projects/23000/badge.svg)](https://scan.coverity.com/projects/vtorri-entice)
[![Total alerts](https://img.shields.io/lgtm/alerts/g/vtorri/entice.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/vtorri/entice/alerts/)
[![Language grade: C/C++](https://img.shields.io/lgtm/grade/cpp/g/vtorri/entice.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/vtorri/entice/context:cpp)

### Entice
#### A simple cross-platform image viewer with basic features written with the EFL (Enlightement Foundation Libraries)

Development is done in [Enlightenment repository](https://git.enlightenment.org/vtorri/entice). Github mirror can be found [here](https://github.com/vtorri/entice).

### License

This application is released under the BSD 2-Clause License

### Requirements

The EFL.

### Build instructions

Entice uses [meson](https://mesonbuild.com/) as build system. Just use the classic instructions:

1. `meson setup builddir`
2. `ninja -C builddir`

### Supported images

The following image formats (with the corresponding file extension) are
supported, if they are supported by the EFL:

Image format  |  File extension
------------  |  --------------
 avif         | .avif, .avifs, .avis
 bmp          | .bmp
 dds          | .dds
 gif          | .gif
 heif         | .heif
 ico          | .ico, .cur
 jp2k         | .jp2k, .jp2,.jpx, .jpf
 jpeg         | .jpg, .jpeg, .jfif
 jxl          | .jxl
 pmaps        | .pbm, .pgm, .ppm, .pnm
 png          | .png
 psd          | .psd
 raw          | a lot...
 svg          | .svg, .svg.gz
 tga          | .tga
 tgv          | .tgv
 tiff         | .tiff
 wbmp         | .wbmp
 webp         | .webp
 xcf          | .xcf
 xpm          | .xpm

 Entice can also display PDF files if evas PDF generic loader is enabled

### Animated images

Animated images, like gif, avif or jxl, can also be played.

This feature is enabled by default and can be disabled in settings

### Shortcuts

Action | Shortcut
------ | --------
Quit   | Esc (when no panel is shown), or q, or Ctrl-q
Toggle fullscreen | F11 or f
Next image | space, or right arrow, or down arrow, or Next key
Previous image|  backspace, or left arrow, or up arrow, or Prior key
First image | home, or Alt-home
Last image | end, or Alt-end
rotation clockwise |  Ctrl-r
rotation counter-clockwise | Ctrl-Alt-r
Original size | Ctrl-0
Best fit | b
Zoom in | +, or =
Zoom out | -
Resize window to real image size (implies zoom 100%) | n
Manage Settings | s
Show EXIF data | e
Copy file in clipboard | Ctrl-c
Copy file name in clipboard | Ctrl-Shift-c
Exit Settings or Exif panels | Esc

### Mouse

Action | Shortcut
------ | --------
fullscreen | double click
Open Settings | right click
Exit Settings | right click
Zoom in/out | Ctrl-mouse wheel

### Interface

![interface](data/images/interface.png)

### TODO

- [ ] help panel
- [ ] about panel
- [ ] image list
- [ ] browser mode
