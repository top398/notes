网址 [https://www.freetype.org/]

编译 dll 方法：

下载源码，设置 mingw-gcc bin 路径。

    cd freetype-x.x.x
    mingw32-make
    mingw32-make
    cd <输出目录>
    gcc -s -shared -o freetype.dll ftsystem.o ftdebug.o ftinit.o ftbase.o ftbbox.o ftbdf.o ftbitmap.o ftcid.o ftfntfmt.o ftfstype.o ftgasp.o ftglyph.o ftgxval.o ftlcdfil.o ftmm.o ftotval.o ftpatent.o ftpfr.o ftstroke.o ftsynth.o fttype1.o ftwinfnt.o truetype.o type1.o cff.o type1cid.o pfr.o type42.o winfnt.o pcf.o bdf.o sfnt.o autofit.o pshinter.o raster.o smooth.o ftcache.o ftgzip.o ftlzw.o ftbzip2.o psaux.o psnames.o
    pexports freetype.dll > freetype.def
    dlltool -D freetype.dll -d freetype.def -l freetype.lib -k
