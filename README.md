# CS3388 Assignment 2

[Course Website](https://owl.uwo.ca/access/content/group/1b026160-e391-4236-b962-9783a9ab6a99/CS3388-Outline.html)

Due date: Friday Feb. 15th 2019, at 11:00pm.
Weight: 10% of final mark

## Description

This assignment consists of the design and implementation of a program that allows a user to create ans render 3D wiremesh objects defined with parametric functions. Your program will display spheres and tori with the use of Bresenham's algorithm for 2D line segments, the synthetic camera, and the parametric functions for he sphere and torus. Your program will perform the following:
	- Use 3D transformations (such as translation, for instance) for placing a sphere and a torus in the 3D scene.
	- Choose an appropriate location and orientation for the synthetic camera in such a way as to make the objects look visible
	- Render the parametric objects as wire-frames. A typical program output is given in the sample below.
	- Once your assignment is finished, submit you source code and a minimum of 5 output images taken from different camera positions.
	- Submit your assignment through OWL.


Before submitting your assignment, please refer to the [assignment marking](http://www.csd.uwo.ca/faculty/beau/CS3388/CS3388-Marking-Scheme.html) scheme and [submission guidelines](http://www.csd.uwo.ca/faculty/beau/CS3388/CS3388-Submission.html).

To assist you in this assignment, you are given a program that sets up the camera matrix. The camera matrix program requires matrix code found, all included in `/assets`. Use your own implementation of Bresenham's line to trace the wiremesh objects.

## Expected Resulting Image
![result](http://www.csd.uwo.ca/faculty/beau/CS3388/CS3388-Assign2-Output-Image.png "Resulting Image")

## Instructions to run
1. Make sure you have xlib11 installed. To install it, try `pacman -S xlib11-dev` (in arch linux), probably same name in other package managers.
2. Compile the program by running `make main`
3. Run the program by using `./main`. It should open a window with the expected graphic displayed
4. Close the window by typing 'q' or clicking the 'X' button
