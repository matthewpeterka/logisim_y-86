# Logisim CPU Design

## Overview
This repository contains Logisim files for a CPU design implemented using the Y86-64 architecture. 
The CPU design is a simplified version of the Y86-64 architecture and is meant for educational purposes. 
The final Logisim file allows you to simulate the operation of the CPU and observe its behavior.

## Getting Started
To get started with this CPU design, follow these steps:

Install Logisim: If you haven't already, download and install Logisim, which is available at http://www.cburch.com/logisim/.

Clone the Repository: Clone this repository to your local machine using the following command:

git clone https://github.com/matthewpeterka/logisim_y-86.git
Open the Logisim File: Launch Logisim and open the Final_Processor_Project.circ file from the cloned repository in the CPU folder.

Explore and Simulate: In Logisim, you can explore the CPU design by zooming in and out, inspecting components, and understanding the data path and control logic. To run a program, load the assembly code from the instructions.txt file into the memory component within Logisim. You can then start the simulation and observe the CPU's execution of the program.

## Sample Programs
In the CPU folder, there are 2 files that have instruction code in them. To test how they work, simply go into the fetch_instruction_memorycomponent in the logisim file and left-click the ROM. Then click load image and select the file you want to test. 
Then go back to main and start the simulation and the registers will change according to the code they execute.

## Contact
If you have any questions, feedback, or issues related to this project, please feel free to contact us at matthewpeterka@gmail.com.






