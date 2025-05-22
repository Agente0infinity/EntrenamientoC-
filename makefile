# Configuración del compilador
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++11

# Obtener lista de todos los archivos .cpp en el directorio actual
CPP_FILES := $(wildcard *.cpp)
# Generar nombres de ejecutables (mismo nombre que los .cpp pero sin extensión)
EXECUTABLES := $(CPP_FILES:.cpp=)

# Regla por defecto: compilar todos los ejecutables
all: $(EXECUTABLES)

# Regla genérica para compilar cualquier archivo .cpp
%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

# Limpiar todos los ejecutables
clean:
	rm -f $(EXECUTABLES)

.PHONY: all clean