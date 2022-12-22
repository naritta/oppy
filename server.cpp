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
  struct sockaddr_in addr;
	memset(&addr, 0, sizeof(struct sockaddr_in));
	addr.sin_family = AF_INET;
	addr.sin_port = htons(10000);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");

  return 0;
}
