## Un sistema modular

Una estructura replicada en dos lenguajes: python y C

Los módulos 

- exportan, en principio:
  - lo que tienen (python) o
  - solo una parte (lo incluido como prototipos en los headers en el caso de C)
- importan lo que indican necesitar

En la versión C pretendemos *compilacion separada*: 
Cada modolo ha de ser procesable independientemente hasta un formato de objetos enlazables.

Los pasos del workflow son analizables
[ver explicacion](https://stackoverflow.com/questions/8527743/running-gccs-steps-manually-compiling-assembling-linking)

- `gcc -E`  just preprocessor, don't compile 
- `gcc -S`  compile, don't assemble: --> `.asm` 
- `gcc -c`  preprocess + compile + assemble --> `.o`, don't linked 
- `gcc` with no switch: will link object files and generate executable 

