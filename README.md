# CMake Adventures

This repo contains sub-projects that shows usage of cmake features.

## Sub Projects

* **math-lib-demo** - shows the usage of my_math and my_print libraries in the same
		      project directory. These libraries can be installed in your system.
* **use-math-lib-system-installed-demo** - shows the usage of my_math and my_print libraries that is installed in your system.
* **opencv-usage** - shows how to link an external library (in this case OpenCV) that uses CMake based build generation process.
* **GTK-pkg-config-demo** - shows how to link an external library (in this case GTK3) that uses Non-CMake based build generation process (.pc file available).
* **custom-FindGTKmodule-demo** - shows how to link an external library (in this case GTK3) by creating custom Find module (.pc file not available).

## Compile and Run

```bash
cd project_name
mkdir build
cd build
cmake ..
make -j$(nproc)
./executable_name
```

**NOTE: For projects that uses external libraries, it must be installed in your system before compiling**
