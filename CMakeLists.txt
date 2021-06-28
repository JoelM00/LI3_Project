cmake_minimum_required(VERSION 3.19)
project(LI3_Project C)

set(CMAKE_C_STANDARD 99)

add_executable(LI3_Project main.c leitor.c leitor.h produto.h produto.c cliente.c cliente.h estado.c estado.h catalogoProdutos.c catalogoProdutos.h catalogoClientes.c catalogoClientes.h)