# .NET Core

* 下载

    [跨平台/Windows，多种安装及压缩包](https://www.microsoft.com/net/download/windows)

* 示例源文件

        using System;
        class Test
        {
          static void Main (string[] args)
          {
            Console.WriteLine("Hello world! 你好，世界！");
          }
        }

* 设置环境变量

        set DOTNET_HOST_PATH=r:\dotnet\dotnet

* 进入运行库目录

        cd/d R:\dotnet\shared\Microsoft.NETCore.App\2.1.1

* 编译

        \dotnet\sdk\2.1.301\Roslyn\bincore\RunCsc /nologo -r:r:\dotnet\shared\Microsoft.NETCore.App\2.1.1\System.Private.CoreLib.dll -r:r:\dotnet\shared\Microsoft.NETCore.App\2.1.1\System.Console.dll -r:r:\dotnet\shared\Microsoft.NETCore.App\2.1.1\System.Runtime.dll r:\z.cs

* 运行

        %DOTNET_HOST_PATH% z.exe
