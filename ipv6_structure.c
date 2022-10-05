// Main IPv6 Structure
struct sockaddr_in6 {
 uint8_t sin6_len;
 sa_family_t sin6_family;
 in_port_t sin6_port;
 uint32_t sin6_flowinfo;
 struct in6_addr sin6_addr;
};

// Supporting Function

struct in6_addr {
 uint8_t s6_addr[16];
};
