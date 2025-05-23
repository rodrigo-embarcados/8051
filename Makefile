#Modelo de makefile usado para compilar os projeots usando sdcc no linux:

# Nome do projeto
TARGET = 

# Compilador e flags do SDCC
CC = sdcc
CFLAGS = -mmcs51

# Arquivos de origem
SRC = main.c

# Arquivos de saída
OBJ = $(SRC:.c=.rel)
IHX = $(TARGET).ihx
HEX = $(TARGET).hex

# Alvo padrão para construir o programa
all: $(HEX)

# Gerar o .ihx e .hex
$(IHX): $(OBJ)
	$(CC) -o $(IHX) $(OBJ)

$(HEX): $(IHX)
	packihx $(IHX) > $(HEX)

# Compilar os arquivos de origem para objetos
%.rel: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Flash no microcontrolador usando STCgal
flash: $(HEX)
	stcgal -P stc89 -p /dev/ttyUSB0 $(HEX)

# Limpar os arquivos gerados
clean:
	rm -f *.rel *.ihx *.hex