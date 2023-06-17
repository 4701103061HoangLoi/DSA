#include <iostream>

void moveDisk(int disk, char source, char destination)
{
	std::cout << "Move disk " << disk << " from " << source << " to " << destination << std::endl;
}

void HanoiTower(int disks, char source, char auxilary, char destination)
{
	if (disks == 1) 
	{
		moveDisk(disks, source, destination);
		return;
	}
	HanoiTower(disks - 1, source, destination, auxilary);
	moveDisk(disks, source, destination);
	HanoiTower(disks - 1, auxilary, source, destination);
}