import sumres
import muldiv

if __name__ == "__main__":

    a = 6
    b = 4

    print(" suma de", a, "y", b, ":", sumres.suma(a, b))
    print("resta de", a, "y", b, ":", sumres.resta(a, b))
    print("resta de", b, "y", a, ":", sumres.resta(b, a))

    print("  mul de", a, "y", b, ":", muldiv.multiplica(a, b))
    print("   // de", a, "y", b, ":", muldiv.divide(a, b))
    print("   // de", b, "y", a, ":", muldiv.divide(b, a))
