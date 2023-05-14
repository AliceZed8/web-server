#include "include/web_server.h"

int main() {
	WebServer server("192.168.0.107");
	server.launch();
	return 0;
}