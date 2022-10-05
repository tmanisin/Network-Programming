struct in_addr {
 in_addr_t s_addr;
};

struct sockaddr_in {
 uint8_t sin_len;
 sa_family_t sin_family;
 in_port_t sin_port;
 struct in_addr sin_addr;
 char sin_pad[16];
};
