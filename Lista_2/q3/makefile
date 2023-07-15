# Variáveis de compilação
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17

# Nome do arquivo executável
TARGET = main

# Arquivos objeto
OBJS = main.o Turma.o Aluno.o

# Regra para compilar o arquivo executável
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Regras para compilar cada um dos arquivos objeto
main.o: main.cpp Turma.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

Turma.o: Turma.cpp Turma.hpp Aluno.hpp
	$(CXX) $(CXXFLAGS) -c Turma.cpp

Aluno.o: Aluno.cpp Aluno.hpp
	$(CXX) $(CXXFLAGS) -c Aluno.cpp

# Regra para limpar os arquivos objeto e o arquivo executável
clean:
	rm -f $(OBJS) $(TARGET)
