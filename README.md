# test_shell
编译指令 g++ shell.cpp -o shell -lreadline
如果编译失败，找不到readline相关的头文件，那就是readline没有安装

ubuntu下：
sudo apt-get install libreadline-dev

安装完成之后再执行上述编译指令即可
