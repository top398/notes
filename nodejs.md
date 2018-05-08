网址：[https://nodejs.org/en/]

* 设置全局模块路径：

    npm config set prefix <nodejs.exe 所在路径或自定>
    npm config set cache <cache 路径>


* 设置环境变量：

    set NODE_PATH = <nodejs.exe 所在路径>
    PATH = %path%;%NODE_PATH%\;%NODE_PATH%\node_modules;%NODE_PATH%\node_global;
