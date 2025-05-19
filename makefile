# Compilador
CXX = g++

# Opciones de compilación
CXXFLAGS = -Wall -std=c++11

# Obtener lista de archivos .cpp (sin extensión)
SRCS = $(wildcard *.cpp)
# Generar nombres de ejecutables (mismo nombre que los .cpp pero sin extensión)
EXECUTABLES = $(SRCS:.cpp=)

# Regla por defecto: compila todos los ejecutables
all: $(EXECUTABLES)

# Regla genérica para compilar cada .cpp en su ejecutable
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Limpieza (borra todos los ejecutables)
clean:
	rm -f $(EXECUTABLES)

.PHONY: all clean
