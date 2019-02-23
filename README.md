# Create-a-Robot-
In this project you will create a robot class. 
The robot objects move within a grid similar to the 3x3 grid shown below to pick up and carry the letters on the grid to different 
locations. 
The grid size should be declared as constants, use a 25X25 grid for our program. 
const int RIGHTBOUNDARY=26;
const int LEFTBOUNDARY=0;
const int TOPBOUNDARY=26;
const int BOTTOMBOUNDARY=0;
 
The Robot class must have the following data members and methods:
The Robot class has three private data members
An integer type variable for the x component of the location of the robot on the grid
An integer type variable for the y component of the location of the robot on the grid
A char type variable “payload” to hold letters as load
The Robot class must have the following public member functions
A default constructor places the robot at location (0,0) and payload to character space:  ‘ ‘ ( empty)
A constructor that receives three parameters to initialize the private data members.
Include a set and get method for each of the private data members.
Include a member function print() that prints the location of the robot on the grid as well as its load.
Method pickup(int lx, int ly) with boolean return type. This method examines the current location of the robot and if not at location (lx, ly), it should display a message “not at (lx,ly)” and return false. If the is no load (letters) at the location print “No load at this location” and return false. Otherwise, the method should examine the payload of the robot and if empty it will pick up the load at location (lx,ly) and place it in the payload and returns true. Note, the character at location (lx,ly) on the grid should be set to blank ( space)
Method dropOff(int lx, int ly) with Boolean return type. This method examines the current location of the robot and if not at location (lx, ly), it should display a message “not at (lx,ly)” and return false. Otherwise, the method examines the payload of the robot and if full, it will drop its load at location (lx, ly) on the grid and and returns true. Note, the grid element grid[lx][ly] should be set to the character that was placed there.
Method moveRight() with a void return type. The method moves robot one unit to the right on the grid. If the robot hits the right boundary of the grid, it should print “Right boundary reached”.
Method moveLeft() with a void return type. The method moves robot one unit to the left on the grid. If the robot hits the left boundary of the grid, it should print “Left boundary reached”.
Method moveUp() with a void return type. The method moves robot one unit up on the grid. If the robot hits the top boundary of the grid, it should print “Top boundary reached”.
Method moveDown() with a void return type. The method moves robot one unit down on the grid. If the robot hits the bottom boundary of the grid, it should print “Bottom boundary reached”.
Method MoveTo(int lx, int ly) with boolean return type. This method checks to see whether the location (lx, ly) is within the boundary of the grid, if not returns false. Otherwise, it uses the combination of moveUp(), moveDown(), moveRight(), moveLeft() methods to move the robot to this new location on the grid. Note: if the robot has to move, say 5, units to the right you must write a loop and call moveRight() five times rather that literally writing moveRight() five times. 
Write a nonmember function  print2D() that reveries a 2D array of characters and prints it ( in our case 25 elements per row).

Write a main function to test the operation of the robot. 
You program should define a 2D array representing the grid char grid [26][26] .  Initialize all the elements of the 2D array to blank. Then, place character ‘B’ at location (10, 8) and ‘C’ at (22, 45).  Use print2D() to print the grid
Create two robots R1 and R2 using the two constructors. Print the location of the robots.
Use “moveTo()” method to place R1 at location (25, 26) and R2  at location (15, 32). Print the location of the robots
Direct R1 to pick up ‘B’ at location (10, 8) and place it at location (20,20). Print the location of the robot. Print the grid.
Direct R2 to pick up ‘C’ at location (22, 45) and place it at location (0, 0). Print the location of the robot. Print the grid.
(extra point) Write a nonmember function clear() that receives a 2D array of character type with a void return type. The function traverses through all the elements of the array and if it finds a character at any location it should dynamically create a Robot, set the robot at that location (where the character is located) and pick up the load. When this task is done the robot must be deleted. To test this function, in the main call the function clear() and pass the grid array as the argument. After this function call the grid should be clear of any characters. Print the grid.
