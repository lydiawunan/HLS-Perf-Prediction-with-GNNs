//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 112154129
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(char p[3][1][4], double p_5)
{
  int v_11;
  unsigned int v_9;
  long v_7;
  char v;
  char result;
  v_11 = (int)p_5;
  v_7 = (long)p[1][0][0];
  result = (char)64;
  v_9 = (unsigned int)v_11;
  v = (char)(~ ((long)result & (~ v_7 >> (v_9 & 31U))));
  result = (char)(- ((double)((unsigned long)(~ p[0][0][2]) % (((unsigned long)v & 3738049204UL) + 377UL)) * (
                     -2121. / (- p_5 + 422.))));
  return result;
}


