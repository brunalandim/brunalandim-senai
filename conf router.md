#!configurar RT-01
en
conf t
hostname RT-01
banner motd "ACESSO AUTORIZADO APENAS PARA O DEPARTAMENTO DE TI DA COLONIA MARCIANA!"
line console 0
password TI*Marte2077
login
enable secret SenhaMarciana7702
service password-encryption
end
wr

#!configurar os ips
conf t
int g0/0.20
encapsulation dot1q 20
ip add 192.168.0.129 255.255.255.224
no shutdown
ipv6 add 2001:db8:cafe:2::1/64
ipv6 add fe80::1 link-local
no shutdown
int g0/0.30
encapsulation dot1q 30
ip add 192.168.0.161 255.255.255.224
no shutdown
ipv6 add 2001:db8:cafe:3::1/64
ipv6 add fe80::1 link-local
no shutdown
int g0/0.40
encapsulation dot1q 40
ip add 192.168.0.193 255.255.255.240
no shutdown
ipv6 add 2001:db8:cafe:4::1/64
ipv6 add fe80::1 link-local
no shutdown
int g0/0.50
encapsulation dot1q 50
ip add 192.168.0.209 255.255.255.240
no shutdown
ipv6 add 2001:db8:cafe:5::1/64
ipv6 add fe80::1 link-local
no shutdown



