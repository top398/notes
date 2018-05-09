* 在要共享的 **驱动器/文件夹** 上右键-共享-特定用户。

* 以 Guest 用户为例，添加 Guest 用户，选择读写权限，确定。

* 控制台输入

    net user guest active
    :: 启用该账户。
    net user guest *|password
    :: 取消/设置密码。
