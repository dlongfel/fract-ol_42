# Fract-ol

Fract-ol is a graphic fractal exploration program, supporting deep-zooms.
MacOs support only

![main image](https://github.com/dlongfel/fract-ol_42/blob/master/images/Frame%201.png)

# General

Fract-ol runs it’s calculations on OpenCL, which allows for a high iteration count renders and smooth deep-zoom experience.

This project makes use of my libcl library, to make it easier to work with OpenCL and a complex_opencl library, which allows to perform arythmetics on complex numbers inside the cl kernel.

# Fractals
### Julia Sets

![image formula](https://github.com/dlongfel/fract-ol_42/blob/master/images/julia/formula.jpg)

![image 1](https://github.com/dlongfel/fract-ol_42/blob/master/images/julia/julia1.png)

![image 2](https://github.com/dlongfel/fract-ol_42/blob/master/images/julia/julia2.png)

![image 3](https://github.com/dlongfel/fract-ol_42/blob/master/images/julia/julia3.png)


### Mandelbrot Sets

![image formula](https://github.com/dlongfel/fract-ol_42/blob/master/images/mandelbrot/mand.jpg)

![image 1](https://github.com/dlongfel/fract-ol_42/blob/master/images/mandelbrot/mand1.png)

![image 2](https://github.com/dlongfel/fract-ol_42/blob/master/images/mandelbrot/mand2.png)

![image 3](https://github.com/dlongfel/fract-ol_42/blob/master/images/mandelbrot/mand3.png)

### Mandelbar Set

![image mandelbar](https://github.com/dlongfel/fract-ol_42/blob/master/images/mandelbar/mandelbar.png)

### Celtic Sets

![celtic formula](https://github.com/dlongfel/fract-ol_42/blob/master/images/celtic/formula.png)

![celtic 1](https://github.com/dlongfel/fract-ol_42/blob/master/images/celtic/celtic1.png)

![celtic 2](https://github.com/dlongfel/fract-ol_42/blob/master/images/celtic/celtic2.png)

### BurningShip Sets

![burning formula](https://github.com/dlongfel/fract-ol_42/blob/master/images/burningship/formula.jpg)

![burning 1](https://github.com/dlongfel/fract-ol_42/blob/master/images/burningship/burning1.png)

![burning 2](https://github.com/dlongfel/fract-ol_42/blob/master/images/burningship/burning2.png)

### Buffalo

![buffalo formula](https://github.com/dlongfel/fract-ol_42/blob/master/images/buffalo/formula.png)

![buffalo](https://github.com/dlongfel/fract-ol_42/blob/master/images/buffalo/buffalo.png)

# Usage
Place the directory in your root folder and compile it with
```
make
```
Run the program with
```
./fractol *type_of_fractal*
```
Where `*type_of_fractal*` can be one of the following:

*Julia
*Burningship
*Mandelbar
*Celtic
*Buffalo

Keys to control:

`Right` - Move Right

`Left` - Move Left

`Up` - Move Up

`Down` - Move Down

`P` - Next Color

`O` - Previous Color

`K` - Dynamic Color Change 

`L` - Lock(Only Julia)

`Mouse Scroll` - Zoom
