!configurando os switches de distribuicao
!configurando as vlans
conf t
vlan 50
name SERVIDORES
vlan 60 
name GERENCIAMENTO
end
wr

!colocar ip de gerenciamento
conf t
int vlan 60
ip add 192.168.0.234 255.255.255.240
no shutdown
end
wr

!configurar o ssh
conf t
ip domain-name coloniamarciana.local
crypto key generate rsa general-key modulus 1024
username suporte-marte privilege 15 secret suporte@123
line vty 0 15
transport input ssh
login local 
end
wr

!configurar o login local 
conf t
line console 0
login local
end
wr

!configurar o trunk
conf t
int f0/21
switchport trunk allowed vlan 10,20,30,40,50,60,99
end
wr


