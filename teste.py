import sys

# Verifica se o número correto de argumentos foi fornecido
if len(sys.argv) != 3:
    print("Uso: python app.py <parametro1> <parametro2>")
    sys.exit(1)

# Obtém os parâmetros
parametro1 = sys.argv[1]
parametro2 = sys.argv[2]

# Faça algo com os parâmetros
print("Parametro 1:", parametro1)
print("Parametro 2:", parametro2)