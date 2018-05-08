网址：[http://libuv.org/]

使用 mingw-gcc-7.3 编译 dll

    mingw32-make -f Makefile.mingw
    gcc -s -shared -o uv.dll src/fs-poll.o src/inet.o src/threadpool.o src/uv-common.o src/version.o src/win/async.o src/win/core.o src/win/detect-wakeup.o src/win/dl.o src/win/error.o src/win/fs-event.o src/win/fs.o src/win/getaddrinfo.o src/win/getnameinfo.o src/win/handle.o src/win/loop-watcher.o src/win/pipe.o src/win/poll.o src/win/process-stdio.o src/win/process.o src/win/req.o src/win/signal.o src/win/stream.o src/win/tcp.o src/win/thread.o src/win/timer.o src/win/tty.o src/win/udp.o src/win/util.o src/win/winapi.o src/win/winsock.o -lws2_32 -luserenv -lpsapi -liphlpapi
    pexports uv.dll > uv.def
    dlltool -D uv.dll -d uv.def -l ue.lib -k

编译出来的 dll 依赖于 libgcc_s_sjlj.dll

提取 .def .lib .dll 及 include 目录，即成 libuv 开发环境。
