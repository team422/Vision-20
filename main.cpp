#include <networktables/NetworkTable.h>

int main() {
	std::cout << "Starting program" << std::endl;
	NetworkTable::SetClientMode();
	NetworkTable::SetTeam(422);
	NetworkTable::SetIPAddress("10.4.22.42");
	NetworkTable::Initialize();
	
	std::shared_ptr<NetworkTable> pixy_table = NetworkTable::GetTable("pie");
	int i = 0;
	while() {
		pixy_table->PutNumber("bigger", i);
		i++;
	}
	return 0;
}