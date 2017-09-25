Nishant Rathi | nishantrathi@csu.fullerton.edu

Description-
1) Camere Move forward and backward
	a) The camera is on z axis 
	b) To get the new positon of the camera to move forward towards the object I used translate function to get the new matrix with negative value in z axis
	c) I multiplied the new matrix with the eyedirection vector to get the new position of the camera
	d) Similarly, I calculated the new postion of the camera for the backward movement using positive value in z axis 
2) Camera Pan left and right
	a) We need to turn camera on x axis for the left or right direction
	b) To get the new positon of the camera for the left panning I used translate function to get the new matrix with negative value in x axis
	c) I multiplied the new matrix with the centerposition vector to get the new position of the camera
	d) Similarly, I calculated the new postion of the camera for the right panning with positive value in x axis

