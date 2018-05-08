# php

下载地址：[http://windows.php.net/downloads/releases/]

## 配置修改：

选择预设配置文件之一复制为 php.ini，主要修改：

  extension_dir = "ext"
  date.timezone = Asia/Shanghai （时区）
  extension=php_sqlite3.dll （内置 SQLite3）
  php_xxx.dll （其它插件）

## 内建WEB服务器批处理：

  @echo off
  set cp=%~dp0
  php -c php.ini -S 127.0.0.1:80 -t e:\prog\cd88

## Fast-CGI 运行：

  php-cgi -b 127.0.0.1:9000

# 二、nginx

下载地址：[http://nginx.org/en/download.html]

## conf/nginx.conf 配置文件修改：
  server.location / index index.html index.htm index.php; //附加 index.php
    将上一行 root 移出至 server ，修改值为 "e:/prog/cd88" （即 $document_root）
  server.location ~ \.php$ FastCGI小节取消注释，去掉 root 一行，/scripts 改为 $document_root

## 运行：

nginx

# 三、PHP 与 NGINX 服务启停批处理

  @echo off
  if "%1" neq "s" goto :l1
  echo 开始服务
  set bp=d:\app
  start /d %bp%\php /i /min %bp%\php\php-cgi.exe -b 127.0.0.1:9000
  start /d %bp%\nginx /i /min %bp%\nginx\nginx.exe
  goto :eof

  :l1
  if "%1" neq "e" goto :l2
  echo 结束服务
  taskkill -f -im nginx.exe
  taskkill -f -im php-cgi.exe
  goto :eof

  :l2
  echo Nginx-PHP 服务启停
  echo 用法: %~n0 ^<s^|e^>
