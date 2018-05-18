* 网址：
        [Windows 版本](http://httpd.apache.org/docs/current/platform/windows.html#down)
        [首选](https://www.apachehaus.com/cgi-bin/download.plx#OSSLUP24VC11)
        [url重写语法参考](https://httpd.apache.org/docs/trunk/mod/mod_rewrite.html)

* 通过修改 <apache目录>/conf/httpd.conf 进行配置。

* 设置服务器根目录

        Define SRVROOT "d:/prog/apache24"
        ServerRoot "${SRVROOT}"

* 加载重写模块

        LoadModule rewrite_module modules/mod_rewrite.so

* 设置文档根目录

        DocumentRoot "e:/slim"

* 文档根目录允许 .htaccess

        <Directory "e:/slim">
            AllowOverride All
            # ...

* （可选）设置目录默认打开文件

        <IfModule dir_module>
            DirectoryIndex index.html index.php
        </IfModule>

* 加载 PHP 模块及进行相关定义

        PHPIniDir "d:\prog\php"
        LoadModule php7_module "d:\prog\php\php7apache2_4.dll"
        #AddType application/x-httpd-php .php
        <FilesMatch \.php$>
            SetHandler application/x-httpd-php
        </FilesMatch> 

* 运行

        # 无须运行 php
        <apache目录>\bin\httpd.exe
