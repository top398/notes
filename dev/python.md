# 官方网址

  * [官网](https://python.org)
  * [Windows](https://www.python.org/downloads/windows/)
  * [文档](https://docs.python.org/3/download.html)

# 3.5+ 从官方 FTP 获取 MSI 包

        md msi&&cd msi
        for %f in (core.msi,dev.msi,doc.msi,exe.msi,launcher.msi,lib.msi,path.msi,pip.msi,tcltk.msi,test.msi,tools.msi,ucrt.msi) (
          curl https://www.python.org/ftp/python/3.7.0/amd64/%%f -o %%f
          msiexec /a %%f /quiet targetdir=r:\python3
        )

# pypy - 最快的 JIT

  * [网址](https://www.pypy.org/download.html#default-with-a-jit-compiler)
  * [每夜](http://buildbot.pypy.org/nightly/trunk/pypy-c-jit-latest-win32.zip)

# pip - 包管理器

        curl https://bootstrap.pypa.io/get-pip.py -o get-pip.py
        pypy get-pip.py
        pypy -m pip install xxx
