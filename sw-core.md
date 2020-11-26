!configurar o sw-core
conf t
vlan 50
name SERVIDORES
vlan 60
name GERENCIAMENTO
end
wr

!configurando o ip
conf t
int vlan 60
ip add 192.168.0.238 255.255.255.240
no shutdown
end
wr

!vlans e interfaces
conf t
int f0/1
switchport mode access
switchport access vlan 50
int f0/2
switchport mode access
switchport access vlan 50
int f0/3
switchport mode access
switchport access vlan 60
int range f0/21-24
switchport trunk allowed vlan 10,20,30,40,50,60,99
end
wr

!configurando ssh
conf t
ip domain-name coloniamarciana.local
crypto key generate rsa general-key modulus 1024
username suporte-marte privilege 15 secret suporte@123
line vty 0 15
transport input ssh
login local
end
wr

!console line
conf t
line console 0
login local
end
wr


