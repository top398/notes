网址：[https://nodejs.org/en/]

* 设置全局模块路径：

        npm config set prefix <nodejs.exe 所在路径或自定>
        npm config set cache <cache 路径>

* 设置环境变量：

        set NODE_PATH = <node_modules 所在路径>
        PATH = %path%;<nodejs.exe所在路径>

* 自定义 repl 颜色

        // set your colors however desired
        var util = require('util');
        util.inspect.colors.magenta = [95,39];
        util.inspect.colors.green = [92,39];
        util.inspect.colors.yellow = [93,39];
        // util.inspect.styles.date = 'lightmagenta';

        // start the repl    
        require('repl').start({});
