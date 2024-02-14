## Notes on gtkdialog

* [gtkdialog.info file is not installed by meson](https://github.com/puppylinux-woof-CE/gtkdialog/issues/158)

  I manually added this to gtkdialog-doc. Not patched in Debian as awaiting code fix
* The  gtkdialog.info throws lintian error **install-info: warning: no info dir entry**

  Again awaiting code fix so not patched

* Documentation for examples and reference are dumped in the wrong folder /usr/share/doc
  Again awaiting code fix so not patched
  
```--- a/meson.build
+++ b/meson.build
@@ -26,7 +26,7 @@ endif
 if get_option('docs')
        subdir('doc')
        install_subdir(
-       'examples', install_dir : join_paths(get_option('datadir'), 'doc')
+       'examples', install_dir : join_paths(get_option('datadir'), 'doc', 'gtkdialog')
        )
 endif
```
and 

```--- a/doc/meson.build
+++ b/doc/meson.build
@@ -1,3 +1,3 @@
 install_subdir(
-       'reference', install_dir : join_paths(get_option('datadir'), 'doc')
+       'reference', install_dir : join_paths(get_option('datadir'), 'doc', 'gtkdialog')
        )
```

meson --prefix=/usr -Ddocs=true build
ninja -C build
sudo ninja -C build install

gtkdialog/examples/* is installed to /usr/share/doc/examples/*
gtkdialog/doc/reference/* is installed to /usr/share/doc/reference/*

Examples and References should be installed to /usr/share/doc/gtkdialog
