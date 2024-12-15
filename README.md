# OpenGL Development Example on 32-bit Linux

This repository demonstrates setting up and running a basic OpenGL application on a 32-bit Linux system using GLFW and GLAD.

## **Overview**
This project covers:
- Configuring OpenGL on Linux.
- Setting up a build system using **CMake**.
- Writing and running a basic OpenGL program that creates a window.

---

## **Dependencies**
Ensure the following tools and libraries are installed:
```bash
sudo apt update
sudo apt install build-essential cmake libglfw3 libglfw3-dev mesa-utils mesa-common-dev
```

---

## **Project Structure**

```
project/
├── build/               # Build directory (ignored in version control)
├── draft/               # Draft files (ignored)
├── include/             # Header files (glad.h and KHR/)
├── src/                 # Source files (main.cpp, glad.c)
├── CMakeLists.txt       # Build system configuration
└── README.md            # Project documentation
```

---

## **Building the Project**

1. **Generate Build Files**  
   Create and navigate to the `build/` directory:
   ```bash
   mkdir build && cd build
   cmake ..
   ```

2. **Compile the Project**  
   Run the following command to build the project:
   ```bash
   make
   ```

3. **Run the Executable**  
   After a successful build, run the application:
   ```bash
   ./main
   ```

---

## **Key Features**
- **GLFW**: Manages window creation and input handling.
- **GLAD**: Loads OpenGL functions.
- **CMake**: Simplifies the build process.

---

## **Common Issues**

### Error: `undefined reference to symbol 'dlclose@@GLIBC_2.0'`
**Solution**: Add `${CMAKE_DL_LIBS}` to your `target_link_libraries` in `CMakeLists.txt`:
```cmake
target_link_libraries(gltuto PUBLIC glfw OpenGL::GL ${CMAKE_DL_LIBS})
```

---

## **Next Steps**
- Add OpenGL shaders.
- Draw basic 2D and 3D shapes.
- Explore texture mapping and lighting.

---

## **License**
This project is released under the MIT License.

