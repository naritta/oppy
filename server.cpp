#include <iostream>
#include <sys/socket.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string>

using namespace std;

int main() {
  int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd < 0){
		std::cout << "Error socket:" << std::strerror(errno);
		exit(1);
	}

  return 0;
}
