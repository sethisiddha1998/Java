#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  FILE *f;
  f=fopen("fan.java","w");
  fprintf(f,"import java.io.*;\n");
  fprintf(f, "\n\npublic class sanu\n{\n\tpublic static void main(String args[])\n\t{\n\t\tSystem.out.println(\"Hello this is fantastic\");\n\t}\n}");
  return 0;
}
