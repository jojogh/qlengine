# qlengine

**qlengine**是基于QuantLib和QuantLib-SWIG项目的扩展。目的是通过增加新模块的方法，使得在不破坏QuantLib原有项目的结构的前提下，添加自定义功能，满足特定的需求。

该项目的特点：

* 非侵入式的更改QuantLib主项目；

* 在QuantLib-Ext项目下增加新的功能；

* 更加容易使用的安装脚本。

## 依赖

* boost >= 1.58.0 
 
    编译安装只需要``boost``库头文件。如果需要运行单元测试，需要链接``unit_test_frame_work``。

* SWIG >= 3.0.12

    生成需要的python wrapper。

* QuantLib >= 1.10.0

* QuantLib-SWIG >= 1.10.0

其中QuantLib以及QuantLib-SWIG已经作为依赖的模块加入。


## 安装

### Windows

在windows上我们使用了静态库链接。

* 打开``build_windows.bat``文件，将环境变量``BOOST_ROOT``修改为正确的值，``BOOST_ROOT``需要指向boost库的根目录；

* 运行``build_windows.bat``。

### Linux

在Linux上我们使用了动态库链接，所以需要在安装完成后，将必要的库目录加入``LD_LIBRARY_PATH``：

* 运行``build_linux.sh``。

* 将以下两个路径加入``LD_LIBRARY_PATH``：

    * QuantLib/lib

    * QuantLib-Ext/lib

## 运行

安装完成以后，可以在python环境中运行如下语句：

```python

from QuantLib import *

```
